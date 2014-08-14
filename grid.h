#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h> 

#define TPS 8

#define NPC_PATH 5
#define MAX_AREA 33

#define PLAYER_MAX 8

//player types
#define PC 0

//tower types
#define BASE 0

//isfriend types
#define ENEMY 0


//bullet damage types
#define SINGLE 1
#define MULTIPLE 2
#define AREA 3
#define AREA_FF 4

//bullet move types
#define SHOT 1

//bullet target types  !!not used
#define NPC 1
#define TOWER 2

//npc statuses
#define IN_ATTACK 1
#define IN_MOVE 2
#define IN_TARGET 3  //not used
#define IN_MOVE_ATTACK 4  //not used
#define IN_IDLE 0


//gnode type (buildable component)
#define NOTHING -1
//>1 may walk and build
#define MAX_PLAYERS 8


///////bit mask
#define setMask(z,x) z->bit_mask|=x
#define checkMask(z,x) z->bit_mask&x

#define MSG_TEST 0
#define MSG_NPC 1
#define MSG_TOWER 2
#define MSG_BULLET 3
#define MSG_PLAYER 4

#define PLAYER_HEALTH 1

#define NPC_POSITION 1
#define NPC_HEALTH 2
#define NPC_CREATE 4

#define TOWER_HEALTH 1
#define TOWER_TARGET 2
#define TOWER_CREATE 4

#define BULLET_POSITION 1
#define BULLET_DETONATE 2
#define BULLET_CREATE 4



typedef 
struct vector2{
	float x;
	float y;
} vec;

typedef 
struct vector2i{
	int x;
	int y;
} veci;


typedef 
struct effect{ //модификаторы свойств > 0
	float speed;
	float shield;
	float damage;
	int time;
	int status; //вероятность срабатывания в %
} effect;

typedef
struct tower_type{
	int id;
	int health;
	int damage;
	int energy;
	int shield;
	int distanse;
	int attack_speed; //ticks to attack
	int cost;
	int ignor_type;
	int prior_type;
	int bullet_type;
	int support;
	effect effects;   //наносимые эффекты
}tower_type;

typedef
struct npc_type{
	int id;
	int health;
	int damage;
	int shield;
	int attack_distanse;
	int see_distanse;
	int attack_speed;
	float move_speed;
	int cost;
	int type;
	int ignor_type;
	int prior_type;
	int bullet_type;
	int support;
	int receive;
	effect effects;  //наносимые эффекты
}npc_type;

typedef
struct bullet_type{
	int id;
	float speed;
	int attack_type;
	int move_type;
	int area;
}bullet_type;

typedef
struct tower{
	int id;
	int bit_mask;
	int position;//id of node
	int type;
	int health;
	int shield;
	int energy;
	int attack_count;
	int owner;
	effect effects;  //полученные эффекты
	struct npc* target;
}tower;

typedef
struct npc{
	char status;
	char isfriend;
	int bit_mask;
	vec position;
	vec destination;
	vec direction;
	int id;
	int type;
	int health;
	int shield;
	effect effects; //полученные эффекты
	struct npc* ntarget;
	struct tower* ttarget;
	int attack_count;
	int path_count;
	int path[NPC_PATH];
	struct npc * next; //for list in gnode
}npc;


typedef
struct bullet{
	int id;
	int bit_mask;
	vec position;
	vec destination;
	vec direction;
	vec source;
	char isfriend;
	char support;
	int type;
	char detonate;
	int damage;
	effect effects;
	int owner;
}bullet;



typedef
struct gnode{
	float f;
	float g;
	float h;
	int id;
	int next;
	char walkable; //-1 no see, 0 no walk, 1 walk
	tower * tower;
	npc * npcs[MAX_PLAYERS];
	char buildable; //<=0 no build, >0 build 
	
} gnode;

typedef
struct player{
	int id;
	int bit_mask;
	int isfriend; //player number [0-7]
	int base_health;
	tower * base;
} player;


typedef
struct wave_part{
	int point;
	int npc_type;
	int num;
	unsigned int delay;
	int spawned;
} wave_part;

typedef
struct wave{
	unsigned int delay;
	int parts_num;
	wave_part * parts;
} wave;

typedef
struct wave_spawner{
	unsigned int wave_num;
	unsigned int wave_part_num;
	unsigned int wave_ticks;
} wave_spawner;

typedef 
struct base{
	int id;
	int position;
	int spawn_position;
} base;

typedef 
struct point{
	int id;
	int position;
} point;

typedef
struct netw{
	
}netw;

typedef
struct config{
	int gridsize;
	veci* area_array[MAX_AREA];
	int area_size[MAX_AREA];
	unsigned int tower_max;
	unsigned int tower_types_size;
		tower_type* tower_types;
		struct tower* tower_array;
	unsigned int npc_max;
	unsigned int npc_num;
	unsigned int npc_types_size;
		npc_type* npc_types;
		struct npc* npc_array;
	unsigned int bullet_max;
	unsigned int bullet_types_size;
		bullet_type* bullet_types;
		struct bullet* bullet_array;
	unsigned int global_id;
	int players_num;
		player players[PLAYER_MAX];
	struct timeval time;
	
	unsigned int waves_size;
		wave* waves;
	wave_spawner wave_current;
	unsigned int bases_size;
		base* bases;
	unsigned int points_size;
		point* points;
} engine_config;

///////
#define setGridSize(size) (config.gridsize=size)
engine_config config;

///////
#define getGridx(id) (1.0*idtox(id)+0.5f)
#define getGridy(id) (1.0*idtoy(id)+0.5f)

#define getGridId(v) to2d(((int)v.x),((int)v.y))
#define to2d(x,y)  ((x)*config.gridsize+(y))

#define idtox(id)  (id/config.gridsize)
#define idtoy(id)  (id%config.gridsize)

#define sqr(x)  ((x)*(x))
#define eqInD(a,b,eq) (fabs(a-b)<=eq)
//////
#define setVecto0(v) memset(&v,0,sizeof(vec))


int aSearch(gnode* grid,gnode* start,gnode* goal, int* path);//start-куда, goal-откуда
#define setNPCPath(grid,start,goul) aSearch(grid,grid+goul,grid+start)

#define getGlobalId() (++config.global_id!=0?config.global_id:++config.global_id)

