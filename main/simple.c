#include "../grid.h"
#include "../gridmath.h"
#include "../engine.h"
#include "../engine_npc.h"
#include "../engine_tower.h"
#include "../engine_bullet.h"
#include "../file.h"
#include "../network.h"
#include "../threads.h"
//Test main file

void pinfo(){
	int i=0,
		j=0,
		k=0;
	printf("Towers\t\t\tNpcs\t\t\tBullets\n");
	while(i<config.tower_max||
		j<config.npc_max||
		k<config.bullet_max){
		for(;config.tower_array[i].id<=0 && i<config.tower_max;i++);
		if (i<config.tower_max){
			printf("%d(%d)%d ",config.tower_array[i].id,
					config.tower_array[i].position,
					config.tower_array[i].type!=BASE?
						config.tower_array[i].health:
						config.players[config.tower_array[i].owner].base_health
					);
			i++;
		}
		printf("|\t\t\t");
		for(;config.npc_array[j].id<=0 && j<config.npc_max;j++);
		if (j<config.npc_max){
			printf("%d(%g,%g)%d %d",config.npc_array[j].id,
					config.npc_array[j].position.x,
					config.npc_array[j].position.y,
					config.npc_array[j].health,
					config.npc_array[j].status
					);
			j++;
		}
		printf("|\t\t\t");
		for(;config.bullet_array[k].id<=0 && k<config.bullet_max;k++);
		if (k<config.bullet_max){
			printf("%d(%g,%g) ",config.bullet_array[k].id,
					config.bullet_array[k].position.x,
					config.bullet_array[k].position.y
					);
			k++;
		}
		printf("\n");
	}
	
		
}

void drawGrid(gnode* grid){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
//			printf("{%d}[%d]%d ",grid[to2d(i,j)].buildable,grid[to2d(i,j)].id,grid[to2d(i,j)].next);
			printf("%c ",
					grid[to2d(i,j)].tower!=0?
						grid[to2d(i,j)].tower->type==BASE?
							'B':
						'T':
						grid[to2d(i,j)].npcs[0]==0?
							grid[to2d(i,j)].walkable<1?
								'X':
							'O':
						'N');
		printf("\n");
	}		
}


int main(int argc, char* argv[]){
	srand(time(0));
	memset(&config,0,sizeof(config));
//	gnode grid[100];
	
	////////////////////
//	atexit(clearAll);
//	sysInit();
	//glutMainLoop();	
	struct sembuf sem;
	memset(&sem,0,sizeof(sem));
	struct sembuf sem_pl;
	memset(&sem,0,sizeof(sem_pl));
	
	int f_token,f_sem,f_shmem;
	int f_port;
	char * f_mem=0;
	int listener;
	int err;
	FILE * file;
	if (argc>1){
		parseArgv(argc,argv);//get game.port, game.token
		if ((file=fopen("manager.ini","r"))!=0){
			int servnum, startport;
			char buffer[101];
			while (!feof (file)) {
				if (fgets (buffer,100,file) == NULL ) 
					break;
//				sscanf(buffer, "menport %d", &f_port);
				sscanf(buffer, "servnum  %d", &servnum);
				sscanf(buffer, "startport  %d", &startport);
			}
			fclose (file);
			f_port=config.game.port-startport;
			if ((f_token=ftok("manager.ini",100))>0)
				if ((f_sem=semget(f_token,1,0))>0)
					if ((f_shmem=shmget(f_token, servnum*sizeof(char), 0777))>0)
						if ((f_mem=shmat(f_shmem,0,0))!=0){
							sem.sem_num=0; 
							sem.sem_op=-1; 
							semop(f_sem, &sem, 1);
							f_mem[f_port]=1;
							sem.sem_num=0; 
							sem.sem_op=1; 
							semop(f_sem, &sem, 1);
						}
		}
	}
	
	gnode* grid;
	
	initGridMath();
	//	loadConfig("../test.cfg");
	loadTypes("../types.cfg");
	grid=loadMap("../test.mp");
	
	listener=startServer(34140,grid);
	
	//config.player_max=4;
	//	timePassed(0);
	//npc* n=
	spawnNpc(grid,4,1,1);
	//npc* n2=
	spawnNpc(grid,5,1,2);
	spawnNpc(grid,6,0,3);
//	setupPlayer(2,0,1800,0);
	spawnTower(grid,75,1,BASE);
	spawnTower(grid,22,1,2);
	
	//npc* n3=
	spawnNpc(grid,42,0,2);
	
	while(config.players_num==0)
		sleep(0);
	
	printf("start game\n");
	timePassed(0);
	
	while(1){
		//drawGrid(grid);
		
		processWaves(grid);
		
		forEachNpc(grid,tickDiedCheckNpc);
		forEachTower(grid,tickDiedCheckTower);
			
		forEachNpc(grid,tickCleanNpc);
		forEachTower(grid,tickCleanTower);
		forEachBullet(grid,tickCleanBullet);
			
		forEachNpc(grid,tickMoveNpc);
		forEachNpc(grid,tickTargetNpc);
		forEachNpc(grid,tickAttackNpc);
		
		forEachTower(grid,tickAttackTower);
		
		forEachBullet(grid,tickProcessBullet);
		
		//set 1
		sem.sem_num=1;
		sem.sem_op=config.players_num;
		
		sem_pl.sem_num=0;
		sem_pl.sem_op=-1;
		semop(config.sem.player,&sem_pl,1);
//		while(semctl(config.sem.send,1,GETVAL)!=config.players_num)
		semop(config.sem.send,&sem,1);
		
		sem_pl.sem_num=0;
		sem_pl.sem_op=1;
		semop(config.sem.player,&sem_pl,1);
		//set 2
		sem.sem_num=2;
		sem.sem_op=1;
		//while(semctl(config.sem.send,2,GETVAL)<1)
		semop(config.sem.send,&sem,1);
		//drop 0
		sem.sem_num=0;
		sem.sem_op=-1;
//		while(semctl(config.sem.send,0,GETVAL)>0)
		semop(config.sem.send,&sem,1);
//		if (err<0)
//			printf("semop err\n");
		
		syncTPS();
		if(config.players_num==0)
			break;
		//check 1
		sem.sem_num=1;
		sem.sem_op=0;
		err=semop(config.sem.send,&sem,1);
		if (err<0)
			printf("semop err\n");
		//set 0
		sem.sem_num=0;
		sem.sem_op=1;
//		while(semctl(config.sem.send,0,GETVAL)<1)
		semop(config.sem.send,&sem,1);
//		if (err<0)
//			printf("semop err\n");
		//drop 2
		sem.sem_num=2;
		sem.sem_op=-1;
//		while(semctl(config.sem.send,2,GETVAL)>0)
		semop(config.sem.send,&sem,1);
//		if (err<0)
//			printf("semop err\n");
		
		
//		int z;
		//z=timePassed(1);
		//printf("time %d",z);
		
		
		//pinfo();
		
		//usleep(100000);
		forEachNpc(grid,tickMiscNpc);
		forEachTower(grid,tickMiscTower);
		forEachBullet(grid,tickMiscBullet);
	}
	printf("closing\n");
	config.game.run=0;
	close(listener);
	if (f_mem!=0){
		sem.sem_num=0; 
		sem.sem_op=-1; 
		semop(f_sem, &sem, 1);
		f_mem[f_port]=0;
		sem.sem_num=0; 
		sem.sem_op=1; 
		semop(f_sem, &sem, 1);
		shmdt(f_mem);
	}
	
	realizeMap(grid);
	realizeTypes();
	realizeArrays();
	realizeServer();
//	memset(&config.wave_current,0,sizeof(config.wave_current));
	
	
//	clearAll(grid);
	
	
	return 0;
}	