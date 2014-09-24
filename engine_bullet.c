#include "grid.h"
#include "engine.h"
#include "engine_npc.h"
#include "engine_tower.h"
#include "engine_bullet.h"

bullet* newBullet(){
	int i;
	for(i=0;i<config.bullet_max;i++)
		if (config.bullet_array[i].id==0){
			config.bullet_array[i].id=getGlobalId();
			return &config.bullet_array[i];
		}
	return 0;
}

int tickMiscBullet(gnode * grid,bullet * b){
	b->bit_mask=0;
	return 0;
}

int tickCleanBullet(gnode * grid,bullet * b){
	if (b->detonate>0)
		memset(b,0,sizeof(bullet));
	return 0;
}

int tickProcessBullet(gnode * grid,bullet * b){
	if (b->detonate==0){
		//vec dir={0,0};
//		printf("!!%g %g\n",b->position.x,b->position.y);
		//float length=getDir(&b->position,&b->destination,&dir);
		float delta;
		if (config.bullet_types[(int)b->type].move_type!=SHOT){
			b->position.x+=b->direction.x*config.bullet_types[(int)b->type].speed;
			b->position.y+=b->direction.y*config.bullet_types[(int)b->type].speed;
			delta=config.bullet_types[(int)b->type].speed;
			if (delta<0.2)
				delta=0.2;
		}else{
			b->position.x=b->destination.x;
			b->position.y=b->destination.y;
			delta=0.2;
		}
		setMask(b,BULLET_POSITION);
		if (eqInD(b->position.x,b->destination.x,delta)&&
				eqInD(b->position.y,b->destination.y,delta)){
			int i,j,k;
			int multiple=0;
			int x=(int)b->position.x;
			int y=(int)b->position.y;
			int xid,yid;
			//tower search
			{
				tower * tmp;
				if ((tmp=grid[to2d((int)b->position.x,(int)b->position.y)].tower)>0)
					if(config.players[tmp->owner].group!=b->group){
						if(tmp->type==BASE){
							config.players[tmp->owner].base_health-=b->damage;
							setMask((&config.players[tmp->owner]),PLAYER_HEALTH);
						}else{
							tmp->health-=b->damage;
							setMask(tmp,TOWER_HEALTH);
						}
						multiple++;
					}
			}	
			
			if (config.bullet_types[(int)b->type].attack_type==SINGLE && multiple>0)
				goto out;
			
			//npc search
			{
				npc* tmp;
				for(j=0;j<MAX_GROUPS;j++)
					for(tmp=grid[to2d((int)b->position.x,(int)b->position.y)].npcs[j];
						tmp!=0;tmp=tmp->next)
							if (config.players[tmp->owner].group!=b->group)
								if (eqInD(tmp->position.x,b->position.x,delta)&&
									eqInD(tmp->position.y,b->position.y,delta))
								//attack npc near the destination 
								{	
									damageNpc(tmp,b);
									multiple++;
									if (config.bullet_types[(int)b->type].attack_type==SINGLE)
										goto out;
									if (config.bullet_types[(int)b->type].attack_type==MULTIPLE && 
										multiple>config.bullet_types[(int)b->type].area)
										goto out;
								}
				//if npc not in node, see nodes near
				i=0;
				for(j=0;j<config.area_size[i];j++)
					if (((xid=x+config.area_array[i][j].x)>=0 && x+config.area_array[i][j].x<config.gridsize) &&
							((yid=y+config.area_array[i][j].y)>=0 && y+config.area_array[i][j].y<config.gridsize))
						for(k=0;k<MAX_GROUPS;k++)
							for(tmp=grid[to2d(xid,yid)].npcs[k];
								tmp!=0;tmp=tmp->next)
									if (config.players[tmp->owner].group!=b->group)
										if (eqInD(tmp->position.x,b->position.x,delta)&&
											eqInD(tmp->position.y,b->position.y,delta))
										//attack first npc in gnode, need to correct
										{	
											damageNpc(tmp,b);
											multiple++;
											if (config.bullet_types[(int)b->type].attack_type==SINGLE)
												goto out;
											if (config.bullet_types[(int)b->type].attack_type==MULTIPLE && 
												multiple>config.bullet_types[(int)b->type].area)
												goto out;
										}
			}
			
			//add area damage to Npc
			//add area damage to towers
			if (config.bullet_types[(int)b->type].attack_type==AREA ||
			 	config.bullet_types[(int)b->type].attack_type==AREA_FF){
				//add area gamage	
				npc* tmp;
				for (i=0;i<config.bullet_types[(int)b->type].area;i++)
					for(j=0;j<config.area_size[i];j++)
						if (((xid=x+config.area_array[i][j].x)>=0 && x+config.area_array[i][j].x<config.gridsize) &&
								((yid=y+config.area_array[i][j].y)>=0 && y+config.area_array[i][j].y<config.gridsize)){
							//tower
							if (grid[to2d(xid,yid)].tower!=0)
								if (canSee(grid,&b->position,&(vec){xid+0.5,yid+0.5})>0)
									if(config.bullet_types[(int)b->type].attack_type==AREA?
											config.players[grid[to2d(xid,yid)].tower->owner].group!=b->group
											:1){
										if (grid[to2d(xid,yid)].tower->type!=BASE){
											config.players[grid[to2d(xid,yid)].tower->owner].base_health-=b->damage;
											setMask((&config.players[grid[to2d(xid,yid)].tower->owner]),PLAYER_HEALTH);
										}else{
											grid[to2d(xid,yid)].tower->health-=b->damage;
											setMask(grid[to2d(xid,yid)].tower,TOWER_HEALTH);
										}
									}
							//npc
							for (k=0;k<MAX_GROUPS;k++)
								if (config.bullet_types[(int)b->type].attack_type==AREA?k!=b->group:1)
									for(tmp=grid[to2d(xid,yid)].npcs[k];
											tmp!=0;tmp=tmp->next)
										if (canSee(grid,&b->position,&tmp->position)>0)
											damageNpc(tmp,b);
						}
			}	
out:
			b->detonate++;
			setMask(b,BULLET_DETONATE);
		}
	}
	return 0;
}



int forEachBullet(gnode* grid, int (process)(gnode*g,bullet*b)){
	int i;
	for(i=0;i<config.bullet_max;i++)
		if(config.bullet_array[i].id>0)
			if (process(grid,&config.bullet_array[i])!=0)
				return -1;
	return 0;
}

