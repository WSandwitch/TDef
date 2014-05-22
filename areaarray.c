#include "grid.h"

#define tmp config.area_array
#define shift config.gridsize

void initAreaArray(){
	int tmp0[8]={-1+shift*-1, -1+shift*0, -1+shift*1, 0+shift*-1, 0+shift*1, 1+shift*-1, 1+shift*0, 1+shift*1};
	if((tmp[0]=malloc(sizeof(tmp0)))==0)
		perror("malloc tmp0 AreaArray");
	memcpy(tmp[0],tmp0,sizeof(tmp0));
	int tmp1[12]={-2+shift*-1, -2+shift*0, -2+shift*1, -1+shift*-2, -1+shift*2, 0+shift*-2, 0+shift*2, 1+shift*-2, 1+shift*2, 2+shift*-1, 2+shift*0, 2+shift*1};
	if((tmp[1]=malloc(sizeof(tmp1)))==0)
		perror("malloc tmp1 AreaArray");
	memcpy(tmp[1],tmp1,sizeof(tmp1));
	int tmp2[16]={-3+shift*-1, -3+shift*0, -3+shift*1, -2+shift*-2, -2+shift*2, -1+shift*-3, -1+shift*3, 0+shift*-3, 0+shift*3, 1+shift*-3, 1+shift*3, 2+shift*-2, 2+shift*2, 3+shift*-1, 3+shift*0, 3+shift*1};
	if((tmp[2]=malloc(sizeof(tmp2)))==0)
		perror("malloc tmp2 AreaArray");
	memcpy(tmp[2],tmp2,sizeof(tmp2));
	int tmp3[32]={-4+shift*-2, -4+shift*-1, -4+shift*0, -4+shift*1, -4+shift*2, -3+shift*-3, -3+shift*-2, -3+shift*2, -3+shift*3, -2+shift*-4, -2+shift*-3, -2+shift*3, -2+shift*4, -1+shift*-4, -1+shift*4, 0+shift*-4, 0+shift*4, 1+shift*-4, 1+shift*4, 2+shift*-4, 2+shift*-3, 2+shift*3, 2+shift*4, 3+shift*-3, 3+shift*-2, 3+shift*2, 3+shift*3, 4+shift*-2, 4+shift*-1, 4+shift*0, 4+shift*1, 4+shift*2};
	if((tmp[3]=malloc(sizeof(tmp3)))==0)
		perror("malloc tmp3 AreaArray");
	memcpy(tmp[3],tmp3,sizeof(tmp3));
	int tmp4[28]={-5+shift*-2, -5+shift*-1, -5+shift*0, -5+shift*1, -5+shift*2, -4+shift*-3, -4+shift*3, -3+shift*-4, -3+shift*4, -2+shift*-5, -2+shift*5, -1+shift*-5, -1+shift*5, 0+shift*-5, 0+shift*5, 1+shift*-5, 1+shift*5, 2+shift*-5, 2+shift*5, 3+shift*-4, 3+shift*4, 4+shift*-3, 4+shift*3, 5+shift*-2, 5+shift*-1, 5+shift*0, 5+shift*1, 5+shift*2};
	if((tmp[4]=malloc(sizeof(tmp4)))==0)
		perror("malloc tmp4 AreaArray");
	memcpy(tmp[4],tmp4,sizeof(tmp4));
	int tmp5[40]={-6+shift*-2, -6+shift*-1, -6+shift*0, -6+shift*1, -6+shift*2, -5+shift*-4, -5+shift*-3, -5+shift*3, -5+shift*4, -4+shift*-5, -4+shift*-4, -4+shift*4, -4+shift*5, -3+shift*-5, -3+shift*5, -2+shift*-6, -2+shift*6, -1+shift*-6, -1+shift*6, 0+shift*-6, 0+shift*6, 1+shift*-6, 1+shift*6, 2+shift*-6, 2+shift*6, 3+shift*-5, 3+shift*5, 4+shift*-5, 4+shift*-4, 4+shift*4, 4+shift*5, 5+shift*-4, 5+shift*-3, 5+shift*3, 5+shift*4, 6+shift*-2, 6+shift*-1, 6+shift*0, 6+shift*1, 6+shift*2};
	if((tmp[5]=malloc(sizeof(tmp5)))==0)
		perror("malloc tmp5 AreaArray");
	memcpy(tmp[5],tmp5,sizeof(tmp5));
	int tmp6[40]={-7+shift*-2, -7+shift*-1, -7+shift*0, -7+shift*1, -7+shift*2, -6+shift*-4, -6+shift*-3, -6+shift*3, -6+shift*4, -5+shift*-5, -5+shift*5, -4+shift*-6, -4+shift*6, -3+shift*-6, -3+shift*6, -2+shift*-7, -2+shift*7, -1+shift*-7, -1+shift*7, 0+shift*-7, 0+shift*7, 1+shift*-7, 1+shift*7, 2+shift*-7, 2+shift*7, 3+shift*-6, 3+shift*6, 4+shift*-6, 4+shift*6, 5+shift*-5, 5+shift*5, 6+shift*-4, 6+shift*-3, 6+shift*3, 6+shift*4, 7+shift*-2, 7+shift*-1, 7+shift*0, 7+shift*1, 7+shift*2};
	if((tmp[6]=malloc(sizeof(tmp6)))==0)
		perror("malloc tmp6 AreaArray");
	memcpy(tmp[6],tmp6,sizeof(tmp6));
	int tmp7[48]={-8+shift*-2, -8+shift*-1, -8+shift*0, -8+shift*1, -8+shift*2, -7+shift*-4, -7+shift*-3, -7+shift*3, -7+shift*4, -6+shift*-6, -6+shift*-5, -6+shift*5, -6+shift*6, -5+shift*-6, -5+shift*6, -4+shift*-7, -4+shift*7, -3+shift*-7, -3+shift*7, -2+shift*-8, -2+shift*8, -1+shift*-8, -1+shift*8, 0+shift*-8, 0+shift*8, 1+shift*-8, 1+shift*8, 2+shift*-8, 2+shift*8, 3+shift*-7, 3+shift*7, 4+shift*-7, 4+shift*7, 5+shift*-6, 5+shift*6, 6+shift*-6, 6+shift*-5, 6+shift*5, 6+shift*6, 7+shift*-4, 7+shift*-3, 7+shift*3, 7+shift*4, 8+shift*-2, 8+shift*-1, 8+shift*0, 8+shift*1, 8+shift*2};
	if((tmp[7]=malloc(sizeof(tmp7)))==0)
		perror("malloc tmp7 AreaArray");
	memcpy(tmp[7],tmp7,sizeof(tmp7));
	int tmp8[68]={-9+shift*-3, -9+shift*-2, -9+shift*-1, -9+shift*0, -9+shift*1, -9+shift*2, -9+shift*3, -8+shift*-5, -8+shift*-4, -8+shift*-3, -8+shift*3, -8+shift*4, -8+shift*5, -7+shift*-6, -7+shift*-5, -7+shift*5, -7+shift*6, -6+shift*-7, -6+shift*7, -5+shift*-8, -5+shift*-7, -5+shift*7, -5+shift*8, -4+shift*-8, -4+shift*8, -3+shift*-9, -3+shift*-8, -3+shift*8, -3+shift*9, -2+shift*-9, -2+shift*9, -1+shift*-9, -1+shift*9, 0+shift*-9, 0+shift*9, 1+shift*-9, 1+shift*9, 2+shift*-9, 2+shift*9, 3+shift*-9, 3+shift*-8, 3+shift*8, 3+shift*9, 4+shift*-8, 4+shift*8, 5+shift*-8, 5+shift*-7, 5+shift*7, 5+shift*8, 6+shift*-7, 6+shift*7, 7+shift*-6, 7+shift*-5, 7+shift*5, 7+shift*6, 8+shift*-5, 8+shift*-4, 8+shift*-3, 8+shift*3, 8+shift*4, 8+shift*5, 9+shift*-3, 9+shift*-2, 9+shift*-1, 9+shift*0, 9+shift*1, 9+shift*2, 9+shift*3};
	if((tmp[8]=malloc(sizeof(tmp8)))==0)
		perror("malloc tmp8 AreaArray");
	memcpy(tmp[8],tmp8,sizeof(tmp8));
	int tmp9[56]={-10+shift*-3, -10+shift*-2, -10+shift*-1, -10+shift*0, -10+shift*1, -10+shift*2, -10+shift*3, -9+shift*-5, -9+shift*-4, -9+shift*4, -9+shift*5, -8+shift*-6, -8+shift*6, -7+shift*-7, -7+shift*7, -6+shift*-8, -6+shift*8, -5+shift*-9, -5+shift*9, -4+shift*-9, -4+shift*9, -3+shift*-10, -3+shift*10, -2+shift*-10, -2+shift*10, -1+shift*-10, -1+shift*10, 0+shift*-10, 0+shift*10, 1+shift*-10, 1+shift*10, 2+shift*-10, 2+shift*10, 3+shift*-10, 3+shift*10, 4+shift*-9, 4+shift*9, 5+shift*-9, 5+shift*9, 6+shift*-8, 6+shift*8, 7+shift*-7, 7+shift*7, 8+shift*-6, 8+shift*6, 9+shift*-5, 9+shift*-4, 9+shift*4, 9+shift*5, 10+shift*-3, 10+shift*-2, 10+shift*-1, 10+shift*0, 10+shift*1, 10+shift*2, 10+shift*3};
	if((tmp[9]=malloc(sizeof(tmp9)))==0)
		perror("malloc tmp9 AreaArray");
	memcpy(tmp[9],tmp9,sizeof(tmp9));
	int tmp10[72]={-11+shift*-3, -11+shift*-2, -11+shift*-1, -11+shift*0, -11+shift*1, -11+shift*2, -11+shift*3, -10+shift*-5, -10+shift*-4, -10+shift*4, -10+shift*5, -9+shift*-7, -9+shift*-6, -9+shift*6, -9+shift*7, -8+shift*-8, -8+shift*-7, -8+shift*7, -8+shift*8, -7+shift*-9, -7+shift*-8, -7+shift*8, -7+shift*9, -6+shift*-9, -6+shift*9, -5+shift*-10, -5+shift*10, -4+shift*-10, -4+shift*10, -3+shift*-11, -3+shift*11, -2+shift*-11, -2+shift*11, -1+shift*-11, -1+shift*11, 0+shift*-11, 0+shift*11, 1+shift*-11, 1+shift*11, 2+shift*-11, 2+shift*11, 3+shift*-11, 3+shift*11, 4+shift*-10, 4+shift*10, 5+shift*-10, 5+shift*10, 6+shift*-9, 6+shift*9, 7+shift*-9, 7+shift*-8, 7+shift*8, 7+shift*9, 8+shift*-8, 8+shift*-7, 8+shift*7, 8+shift*8, 9+shift*-7, 9+shift*-6, 9+shift*6, 9+shift*7, 10+shift*-5, 10+shift*-4, 10+shift*4, 10+shift*5, 11+shift*-3, 11+shift*-2, 11+shift*-1, 11+shift*0, 11+shift*1, 11+shift*2, 11+shift*3};
	if((tmp[10]=malloc(sizeof(tmp10)))==0)
		perror("malloc tmp10 AreaArray");
	memcpy(tmp[10],tmp10,sizeof(tmp10));
	int tmp11[68]={-12+shift*-3, -12+shift*-2, -12+shift*-1, -12+shift*0, -12+shift*1, -12+shift*2, -12+shift*3, -11+shift*-5, -11+shift*-4, -11+shift*4, -11+shift*5, -10+shift*-7, -10+shift*-6, -10+shift*6, -10+shift*7, -9+shift*-8, -9+shift*8, -8+shift*-9, -8+shift*9, -7+shift*-10, -7+shift*10, -6+shift*-10, -6+shift*10, -5+shift*-11, -5+shift*11, -4+shift*-11, -4+shift*11, -3+shift*-12, -3+shift*12, -2+shift*-12, -2+shift*12, -1+shift*-12, -1+shift*12, 0+shift*-12, 0+shift*12, 1+shift*-12, 1+shift*12, 2+shift*-12, 2+shift*12, 3+shift*-12, 3+shift*12, 4+shift*-11, 4+shift*11, 5+shift*-11, 5+shift*11, 6+shift*-10, 6+shift*10, 7+shift*-10, 7+shift*10, 8+shift*-9, 8+shift*9, 9+shift*-8, 9+shift*8, 10+shift*-7, 10+shift*-6, 10+shift*6, 10+shift*7, 11+shift*-5, 11+shift*-4, 11+shift*4, 11+shift*5, 12+shift*-3, 12+shift*-2, 12+shift*-1, 12+shift*0, 12+shift*1, 12+shift*2, 12+shift*3};
	if((tmp[11]=malloc(sizeof(tmp11)))==0)
		perror("malloc tmp11 AreaArray");
	memcpy(tmp[11],tmp11,sizeof(tmp11));
	int tmp12[88]={-13+shift*-3, -13+shift*-2, -13+shift*-1, -13+shift*0, -13+shift*1, -13+shift*2, -13+shift*3, -12+shift*-6, -12+shift*-5, -12+shift*-4, -12+shift*4, -12+shift*5, -12+shift*6, -11+shift*-7, -11+shift*-6, -11+shift*6, -11+shift*7, -10+shift*-9, -10+shift*-8, -10+shift*8, -10+shift*9, -9+shift*-10, -9+shift*-9, -9+shift*9, -9+shift*10, -8+shift*-10, -8+shift*10, -7+shift*-11, -7+shift*11, -6+shift*-12, -6+shift*-11, -6+shift*11, -6+shift*12, -5+shift*-12, -5+shift*12, -4+shift*-12, -4+shift*12, -3+shift*-13, -3+shift*13, -2+shift*-13, -2+shift*13, -1+shift*-13, -1+shift*13, 0+shift*-13, 0+shift*13, 1+shift*-13, 1+shift*13, 2+shift*-13, 2+shift*13, 3+shift*-13, 3+shift*13, 4+shift*-12, 4+shift*12, 5+shift*-12, 5+shift*12, 6+shift*-12, 6+shift*-11, 6+shift*11, 6+shift*12, 7+shift*-11, 7+shift*11, 8+shift*-10, 8+shift*10, 9+shift*-10, 9+shift*-9, 9+shift*9, 9+shift*10, 10+shift*-9, 10+shift*-8, 10+shift*8, 10+shift*9, 11+shift*-7, 11+shift*-6, 11+shift*6, 11+shift*7, 12+shift*-6, 12+shift*-5, 12+shift*-4, 12+shift*4, 12+shift*5, 12+shift*6, 13+shift*-3, 13+shift*-2, 13+shift*-1, 13+shift*0, 13+shift*1, 13+shift*2, 13+shift*3};
	if((tmp[12]=malloc(sizeof(tmp12)))==0)
		perror("malloc tmp12 AreaArray");
	memcpy(tmp[12],tmp12,sizeof(tmp12));
	int tmp13[88]={-14+shift*-3, -14+shift*-2, -14+shift*-1, -14+shift*0, -14+shift*1, -14+shift*2, -14+shift*3, -13+shift*-6, -13+shift*-5, -13+shift*-4, -13+shift*4, -13+shift*5, -13+shift*6, -12+shift*-8, -12+shift*-7, -12+shift*7, -12+shift*8, -11+shift*-9, -11+shift*-8, -11+shift*8, -11+shift*9, -10+shift*-10, -10+shift*10, -9+shift*-11, -9+shift*11, -8+shift*-12, -8+shift*-11, -8+shift*11, -8+shift*12, -7+shift*-12, -7+shift*12, -6+shift*-13, -6+shift*13, -5+shift*-13, -5+shift*13, -4+shift*-13, -4+shift*13, -3+shift*-14, -3+shift*14, -2+shift*-14, -2+shift*14, -1+shift*-14, -1+shift*14, 0+shift*-14, 0+shift*14, 1+shift*-14, 1+shift*14, 2+shift*-14, 2+shift*14, 3+shift*-14, 3+shift*14, 4+shift*-13, 4+shift*13, 5+shift*-13, 5+shift*13, 6+shift*-13, 6+shift*13, 7+shift*-12, 7+shift*12, 8+shift*-12, 8+shift*-11, 8+shift*11, 8+shift*12, 9+shift*-11, 9+shift*11, 10+shift*-10, 10+shift*10, 11+shift*-9, 11+shift*-8, 11+shift*8, 11+shift*9, 12+shift*-8, 12+shift*-7, 12+shift*7, 12+shift*8, 13+shift*-6, 13+shift*-5, 13+shift*-4, 13+shift*4, 13+shift*5, 13+shift*6, 14+shift*-3, 14+shift*-2, 14+shift*-1, 14+shift*0, 14+shift*1, 14+shift*2, 14+shift*3};
	if((tmp[13]=malloc(sizeof(tmp13)))==0)
		perror("malloc tmp13 AreaArray");
	memcpy(tmp[13],tmp13,sizeof(tmp13));
	int tmp14[84]={-15+shift*-3, -15+shift*-2, -15+shift*-1, -15+shift*0, -15+shift*1, -15+shift*2, -15+shift*3, -14+shift*-6, -14+shift*-5, -14+shift*-4, -14+shift*4, -14+shift*5, -14+shift*6, -13+shift*-8, -13+shift*-7, -13+shift*7, -13+shift*8, -12+shift*-9, -12+shift*9, -11+shift*-10, -11+shift*10, -10+shift*-11, -10+shift*11, -9+shift*-12, -9+shift*12, -8+shift*-13, -8+shift*13, -7+shift*-13, -7+shift*13, -6+shift*-14, -6+shift*14, -5+shift*-14, -5+shift*14, -4+shift*-14, -4+shift*14, -3+shift*-15, -3+shift*15, -2+shift*-15, -2+shift*15, -1+shift*-15, -1+shift*15, 0+shift*-15, 0+shift*15, 1+shift*-15, 1+shift*15, 2+shift*-15, 2+shift*15, 3+shift*-15, 3+shift*15, 4+shift*-14, 4+shift*14, 5+shift*-14, 5+shift*14, 6+shift*-14, 6+shift*14, 7+shift*-13, 7+shift*13, 8+shift*-13, 8+shift*13, 9+shift*-12, 9+shift*12, 10+shift*-11, 10+shift*11, 11+shift*-10, 11+shift*10, 12+shift*-9, 12+shift*9, 13+shift*-8, 13+shift*-7, 13+shift*7, 13+shift*8, 14+shift*-6, 14+shift*-5, 14+shift*-4, 14+shift*4, 14+shift*5, 14+shift*6, 15+shift*-3, 15+shift*-2, 15+shift*-1, 15+shift*0, 15+shift*1, 15+shift*2, 15+shift*3};
	if((tmp[14]=malloc(sizeof(tmp14)))==0)
		perror("malloc tmp14 AreaArray");
	memcpy(tmp[14],tmp14,sizeof(tmp14));
	int tmp15[112]={-16+shift*-4, -16+shift*-3, -16+shift*-2, -16+shift*-1, -16+shift*0, -16+shift*1, -16+shift*2, -16+shift*3, -16+shift*4, -15+shift*-6, -15+shift*-5, -15+shift*-4, -15+shift*4, -15+shift*5, -15+shift*6, -14+shift*-8, -14+shift*-7, -14+shift*7, -14+shift*8, -13+shift*-10, -13+shift*-9, -13+shift*9, -13+shift*10, -12+shift*-11, -12+shift*-10, -12+shift*10, -12+shift*11, -11+shift*-12, -11+shift*-11, -11+shift*11, -11+shift*12, -10+shift*-13, -10+shift*-12, -10+shift*12, -10+shift*13, -9+shift*-13, -9+shift*13, -8+shift*-14, -8+shift*14, -7+shift*-14, -7+shift*14, -6+shift*-15, -6+shift*15, -5+shift*-15, -5+shift*15, -4+shift*-16, -4+shift*-15, -4+shift*15, -4+shift*16, -3+shift*-16, -3+shift*16, -2+shift*-16, -2+shift*16, -1+shift*-16, -1+shift*16, 0+shift*-16, 0+shift*16, 1+shift*-16, 1+shift*16, 2+shift*-16, 2+shift*16, 3+shift*-16, 3+shift*16, 4+shift*-16, 4+shift*-15, 4+shift*15, 4+shift*16, 5+shift*-15, 5+shift*15, 6+shift*-15, 6+shift*15, 7+shift*-14, 7+shift*14, 8+shift*-14, 8+shift*14, 9+shift*-13, 9+shift*13, 10+shift*-13, 10+shift*-12, 10+shift*12, 10+shift*13, 11+shift*-12, 11+shift*-11, 11+shift*11, 11+shift*12, 12+shift*-11, 12+shift*-10, 12+shift*10, 12+shift*11, 13+shift*-10, 13+shift*-9, 13+shift*9, 13+shift*10, 14+shift*-8, 14+shift*-7, 14+shift*7, 14+shift*8, 15+shift*-6, 15+shift*-5, 15+shift*-4, 15+shift*4, 15+shift*5, 15+shift*6, 16+shift*-4, 16+shift*-3, 16+shift*-2, 16+shift*-1, 16+shift*0, 16+shift*1, 16+shift*2, 16+shift*3, 16+shift*4};
	if((tmp[15]=malloc(sizeof(tmp15)))==0)
		perror("malloc tmp15 AreaArray");
	memcpy(tmp[15],tmp15,sizeof(tmp15));
	int tmp16[112]={-17+shift*-4, -17+shift*-3, -17+shift*-2, -17+shift*-1, -17+shift*0, -17+shift*1, -17+shift*2, -17+shift*3, -17+shift*4, -16+shift*-7, -16+shift*-6, -16+shift*-5, -16+shift*5, -16+shift*6, -16+shift*7, -15+shift*-9, -15+shift*-8, -15+shift*-7, -15+shift*7, -15+shift*8, -15+shift*9, -14+shift*-10, -14+shift*-9, -14+shift*9, -14+shift*10, -13+shift*-11, -13+shift*11, -12+shift*-12, -12+shift*12, -11+shift*-13, -11+shift*13, -10+shift*-14, -10+shift*14, -9+shift*-15, -9+shift*-14, -9+shift*14, -9+shift*15, -8+shift*-15, -8+shift*15, -7+shift*-16, -7+shift*-15, -7+shift*15, -7+shift*16, -6+shift*-16, -6+shift*16, -5+shift*-16, -5+shift*16, -4+shift*-17, -4+shift*17, -3+shift*-17, -3+shift*17, -2+shift*-17, -2+shift*17, -1+shift*-17, -1+shift*17, 0+shift*-17, 0+shift*17, 1+shift*-17, 1+shift*17, 2+shift*-17, 2+shift*17, 3+shift*-17, 3+shift*17, 4+shift*-17, 4+shift*17, 5+shift*-16, 5+shift*16, 6+shift*-16, 6+shift*16, 7+shift*-16, 7+shift*-15, 7+shift*15, 7+shift*16, 8+shift*-15, 8+shift*15, 9+shift*-15, 9+shift*-14, 9+shift*14, 9+shift*15, 10+shift*-14, 10+shift*14, 11+shift*-13, 11+shift*13, 12+shift*-12, 12+shift*12, 13+shift*-11, 13+shift*11, 14+shift*-10, 14+shift*-9, 14+shift*9, 14+shift*10, 15+shift*-9, 15+shift*-8, 15+shift*-7, 15+shift*7, 15+shift*8, 15+shift*9, 16+shift*-7, 16+shift*-6, 16+shift*-5, 16+shift*5, 16+shift*6, 16+shift*7, 17+shift*-4, 17+shift*-3, 17+shift*-2, 17+shift*-1, 17+shift*0, 17+shift*1, 17+shift*2, 17+shift*3, 17+shift*4};
	if((tmp[16]=malloc(sizeof(tmp16)))==0)
		perror("malloc tmp16 AreaArray");
	memcpy(tmp[16],tmp16,sizeof(tmp16));
	int tmp17[112]={-18+shift*-4, -18+shift*-3, -18+shift*-2, -18+shift*-1, -18+shift*0, -18+shift*1, -18+shift*2, -18+shift*3, -18+shift*4, -17+shift*-7, -17+shift*-6, -17+shift*-5, -17+shift*5, -17+shift*6, -17+shift*7, -16+shift*-9, -16+shift*-8, -16+shift*8, -16+shift*9, -15+shift*-10, -15+shift*10, -14+shift*-12, -14+shift*-11, -14+shift*11, -14+shift*12, -13+shift*-13, -13+shift*-12, -13+shift*12, -13+shift*13, -12+shift*-14, -12+shift*-13, -12+shift*13, -12+shift*14, -11+shift*-14, -11+shift*14, -10+shift*-15, -10+shift*15, -9+shift*-16, -9+shift*16, -8+shift*-16, -8+shift*16, -7+shift*-17, -7+shift*17, -6+shift*-17, -6+shift*17, -5+shift*-17, -5+shift*17, -4+shift*-18, -4+shift*18, -3+shift*-18, -3+shift*18, -2+shift*-18, -2+shift*18, -1+shift*-18, -1+shift*18, 0+shift*-18, 0+shift*18, 1+shift*-18, 1+shift*18, 2+shift*-18, 2+shift*18, 3+shift*-18, 3+shift*18, 4+shift*-18, 4+shift*18, 5+shift*-17, 5+shift*17, 6+shift*-17, 6+shift*17, 7+shift*-17, 7+shift*17, 8+shift*-16, 8+shift*16, 9+shift*-16, 9+shift*16, 10+shift*-15, 10+shift*15, 11+shift*-14, 11+shift*14, 12+shift*-14, 12+shift*-13, 12+shift*13, 12+shift*14, 13+shift*-13, 13+shift*-12, 13+shift*12, 13+shift*13, 14+shift*-12, 14+shift*-11, 14+shift*11, 14+shift*12, 15+shift*-10, 15+shift*10, 16+shift*-9, 16+shift*-8, 16+shift*8, 16+shift*9, 17+shift*-7, 17+shift*-6, 17+shift*-5, 17+shift*5, 17+shift*6, 17+shift*7, 18+shift*-4, 18+shift*-3, 18+shift*-2, 18+shift*-1, 18+shift*0, 18+shift*1, 18+shift*2, 18+shift*3, 18+shift*4};
	if((tmp[17]=malloc(sizeof(tmp17)))==0)
		perror("malloc tmp17 AreaArray");
	memcpy(tmp[17],tmp17,sizeof(tmp17));
	int tmp18[116]={-19+shift*-4, -19+shift*-3, -19+shift*-2, -19+shift*-1, -19+shift*0, -19+shift*1, -19+shift*2, -19+shift*3, -19+shift*4, -18+shift*-7, -18+shift*-6, -18+shift*-5, -18+shift*5, -18+shift*6, -18+shift*7, -17+shift*-9, -17+shift*-8, -17+shift*8, -17+shift*9, -16+shift*-11, -16+shift*-10, -16+shift*10, -16+shift*11, -15+shift*-12, -15+shift*-11, -15+shift*11, -15+shift*12, -14+shift*-13, -14+shift*13, -13+shift*-14, -13+shift*14, -12+shift*-15, -12+shift*15, -11+shift*-16, -11+shift*-15, -11+shift*15, -11+shift*16, -10+shift*-16, -10+shift*16, -9+shift*-17, -9+shift*17, -8+shift*-17, -8+shift*17, -7+shift*-18, -7+shift*18, -6+shift*-18, -6+shift*18, -5+shift*-18, -5+shift*18, -4+shift*-19, -4+shift*19, -3+shift*-19, -3+shift*19, -2+shift*-19, -2+shift*19, -1+shift*-19, -1+shift*19, 0+shift*-19, 0+shift*19, 1+shift*-19, 1+shift*19, 2+shift*-19, 2+shift*19, 3+shift*-19, 3+shift*19, 4+shift*-19, 4+shift*19, 5+shift*-18, 5+shift*18, 6+shift*-18, 6+shift*18, 7+shift*-18, 7+shift*18, 8+shift*-17, 8+shift*17, 9+shift*-17, 9+shift*17, 10+shift*-16, 10+shift*16, 11+shift*-16, 11+shift*-15, 11+shift*15, 11+shift*16, 12+shift*-15, 12+shift*15, 13+shift*-14, 13+shift*14, 14+shift*-13, 14+shift*13, 15+shift*-12, 15+shift*-11, 15+shift*11, 15+shift*12, 16+shift*-11, 16+shift*-10, 16+shift*10, 16+shift*11, 17+shift*-9, 17+shift*-8, 17+shift*8, 17+shift*9, 18+shift*-7, 18+shift*-6, 18+shift*-5, 18+shift*5, 18+shift*6, 18+shift*7, 19+shift*-4, 19+shift*-3, 19+shift*-2, 19+shift*-1, 19+shift*0, 19+shift*1, 19+shift*2, 19+shift*3, 19+shift*4};
	if((tmp[18]=malloc(sizeof(tmp18)))==0)
		perror("malloc tmp18 AreaArray");
	memcpy(tmp[18],tmp18,sizeof(tmp18));
	int tmp19[112]={-20+shift*-4, -20+shift*-3, -20+shift*-2, -20+shift*-1, -20+shift*0, -20+shift*1, -20+shift*2, -20+shift*3, -20+shift*4, -19+shift*-7, -19+shift*-6, -19+shift*-5, -19+shift*5, -19+shift*6, -19+shift*7, -18+shift*-9, -18+shift*-8, -18+shift*8, -18+shift*9, -17+shift*-11, -17+shift*-10, -17+shift*10, -17+shift*11, -16+shift*-12, -16+shift*12, -15+shift*-13, -15+shift*13, -14+shift*-14, -14+shift*14, -13+shift*-15, -13+shift*15, -12+shift*-16, -12+shift*16, -11+shift*-17, -11+shift*17, -10+shift*-17, -10+shift*17, -9+shift*-18, -9+shift*18, -8+shift*-18, -8+shift*18, -7+shift*-19, -7+shift*19, -6+shift*-19, -6+shift*19, -5+shift*-19, -5+shift*19, -4+shift*-20, -4+shift*20, -3+shift*-20, -3+shift*20, -2+shift*-20, -2+shift*20, -1+shift*-20, -1+shift*20, 0+shift*-20, 0+shift*20, 1+shift*-20, 1+shift*20, 2+shift*-20, 2+shift*20, 3+shift*-20, 3+shift*20, 4+shift*-20, 4+shift*20, 5+shift*-19, 5+shift*19, 6+shift*-19, 6+shift*19, 7+shift*-19, 7+shift*19, 8+shift*-18, 8+shift*18, 9+shift*-18, 9+shift*18, 10+shift*-17, 10+shift*17, 11+shift*-17, 11+shift*17, 12+shift*-16, 12+shift*16, 13+shift*-15, 13+shift*15, 14+shift*-14, 14+shift*14, 15+shift*-13, 15+shift*13, 16+shift*-12, 16+shift*12, 17+shift*-11, 17+shift*-10, 17+shift*10, 17+shift*11, 18+shift*-9, 18+shift*-8, 18+shift*8, 18+shift*9, 19+shift*-7, 19+shift*-6, 19+shift*-5, 19+shift*5, 19+shift*6, 19+shift*7, 20+shift*-4, 20+shift*-3, 20+shift*-2, 20+shift*-1, 20+shift*0, 20+shift*1, 20+shift*2, 20+shift*3, 20+shift*4};
	if((tmp[19]=malloc(sizeof(tmp19)))==0)
		perror("malloc tmp19 AreaArray");
	memcpy(tmp[19],tmp19,sizeof(tmp19));
	int tmp20[144]={-21+shift*-4, -21+shift*-3, -21+shift*-2, -21+shift*-1, -21+shift*0, -21+shift*1, -21+shift*2, -21+shift*3, -21+shift*4, -20+shift*-7, -20+shift*-6, -20+shift*-5, -20+shift*5, -20+shift*6, -20+shift*7, -19+shift*-10, -19+shift*-9, -19+shift*-8, -19+shift*8, -19+shift*9, -19+shift*10, -18+shift*-11, -18+shift*-10, -18+shift*10, -18+shift*11, -17+shift*-13, -17+shift*-12, -17+shift*12, -17+shift*13, -16+shift*-14, -16+shift*-13, -16+shift*13, -16+shift*14, -15+shift*-15, -15+shift*-14, -15+shift*14, -15+shift*15, -14+shift*-16, -14+shift*-15, -14+shift*15, -14+shift*16, -13+shift*-17, -13+shift*-16, -13+shift*16, -13+shift*17, -12+shift*-17, -12+shift*17, -11+shift*-18, -11+shift*18, -10+shift*-19, -10+shift*-18, -10+shift*18, -10+shift*19, -9+shift*-19, -9+shift*19, -8+shift*-19, -8+shift*19, -7+shift*-20, -7+shift*20, -6+shift*-20, -6+shift*20, -5+shift*-20, -5+shift*20, -4+shift*-21, -4+shift*21, -3+shift*-21, -3+shift*21, -2+shift*-21, -2+shift*21, -1+shift*-21, -1+shift*21, 0+shift*-21, 0+shift*21, 1+shift*-21, 1+shift*21, 2+shift*-21, 2+shift*21, 3+shift*-21, 3+shift*21, 4+shift*-21, 4+shift*21, 5+shift*-20, 5+shift*20, 6+shift*-20, 6+shift*20, 7+shift*-20, 7+shift*20, 8+shift*-19, 8+shift*19, 9+shift*-19, 9+shift*19, 10+shift*-19, 10+shift*-18, 10+shift*18, 10+shift*19, 11+shift*-18, 11+shift*18, 12+shift*-17, 12+shift*17, 13+shift*-17, 13+shift*-16, 13+shift*16, 13+shift*17, 14+shift*-16, 14+shift*-15, 14+shift*15, 14+shift*16, 15+shift*-15, 15+shift*-14, 15+shift*14, 15+shift*15, 16+shift*-14, 16+shift*-13, 16+shift*13, 16+shift*14, 17+shift*-13, 17+shift*-12, 17+shift*12, 17+shift*13, 18+shift*-11, 18+shift*-10, 18+shift*10, 18+shift*11, 19+shift*-10, 19+shift*-9, 19+shift*-8, 19+shift*8, 19+shift*9, 19+shift*10, 20+shift*-7, 20+shift*-6, 20+shift*-5, 20+shift*5, 20+shift*6, 20+shift*7, 21+shift*-4, 21+shift*-3, 21+shift*-2, 21+shift*-1, 21+shift*0, 21+shift*1, 21+shift*2, 21+shift*3, 21+shift*4};
	if((tmp[20]=malloc(sizeof(tmp20)))==0)
		perror("malloc tmp20 AreaArray");
	memcpy(tmp[20],tmp20,sizeof(tmp20));
	int tmp21[140]={-22+shift*-4, -22+shift*-3, -22+shift*-2, -22+shift*-1, -22+shift*0, -22+shift*1, -22+shift*2, -22+shift*3, -22+shift*4, -21+shift*-8, -21+shift*-7, -21+shift*-6, -21+shift*-5, -21+shift*5, -21+shift*6, -21+shift*7, -21+shift*8, -20+shift*-10, -20+shift*-9, -20+shift*-8, -20+shift*8, -20+shift*9, -20+shift*10, -19+shift*-12, -19+shift*-11, -19+shift*11, -19+shift*12, -18+shift*-13, -18+shift*-12, -18+shift*12, -18+shift*13, -17+shift*-14, -17+shift*14, -16+shift*-15, -16+shift*15, -15+shift*-16, -15+shift*16, -14+shift*-17, -14+shift*17, -13+shift*-18, -13+shift*18, -12+shift*-19, -12+shift*-18, -12+shift*18, -12+shift*19, -11+shift*-19, -11+shift*19, -10+shift*-20, -10+shift*20, -9+shift*-20, -9+shift*20, -8+shift*-21, -8+shift*-20, -8+shift*20, -8+shift*21, -7+shift*-21, -7+shift*21, -6+shift*-21, -6+shift*21, -5+shift*-21, -5+shift*21, -4+shift*-22, -4+shift*22, -3+shift*-22, -3+shift*22, -2+shift*-22, -2+shift*22, -1+shift*-22, -1+shift*22, 0+shift*-22, 0+shift*22, 1+shift*-22, 1+shift*22, 2+shift*-22, 2+shift*22, 3+shift*-22, 3+shift*22, 4+shift*-22, 4+shift*22, 5+shift*-21, 5+shift*21, 6+shift*-21, 6+shift*21, 7+shift*-21, 7+shift*21, 8+shift*-21, 8+shift*-20, 8+shift*20, 8+shift*21, 9+shift*-20, 9+shift*20, 10+shift*-20, 10+shift*20, 11+shift*-19, 11+shift*19, 12+shift*-19, 12+shift*-18, 12+shift*18, 12+shift*19, 13+shift*-18, 13+shift*18, 14+shift*-17, 14+shift*17, 15+shift*-16, 15+shift*16, 16+shift*-15, 16+shift*15, 17+shift*-14, 17+shift*14, 18+shift*-13, 18+shift*-12, 18+shift*12, 18+shift*13, 19+shift*-12, 19+shift*-11, 19+shift*11, 19+shift*12, 20+shift*-10, 20+shift*-9, 20+shift*-8, 20+shift*8, 20+shift*9, 20+shift*10, 21+shift*-8, 21+shift*-7, 21+shift*-6, 21+shift*-5, 21+shift*5, 21+shift*6, 21+shift*7, 21+shift*8, 22+shift*-4, 22+shift*-3, 22+shift*-2, 22+shift*-1, 22+shift*0, 22+shift*1, 22+shift*2, 22+shift*3, 22+shift*4};
	if((tmp[21]=malloc(sizeof(tmp21)))==0)
		perror("malloc tmp21 AreaArray");
	memcpy(tmp[21],tmp21,sizeof(tmp21));
	int tmp22[144]={-23+shift*-4, -23+shift*-3, -23+shift*-2, -23+shift*-1, -23+shift*0, -23+shift*1, -23+shift*2, -23+shift*3, -23+shift*4, -22+shift*-8, -22+shift*-7, -22+shift*-6, -22+shift*-5, -22+shift*5, -22+shift*6, -22+shift*7, -22+shift*8, -21+shift*-10, -21+shift*-9, -21+shift*9, -21+shift*10, -20+shift*-12, -20+shift*-11, -20+shift*11, -20+shift*12, -19+shift*-13, -19+shift*13, -18+shift*-15, -18+shift*-14, -18+shift*14, -18+shift*15, -17+shift*-16, -17+shift*-15, -17+shift*15, -17+shift*16, -16+shift*-17, -16+shift*-16, -16+shift*16, -16+shift*17, -15+shift*-18, -15+shift*-17, -15+shift*17, -15+shift*18, -14+shift*-18, -14+shift*18, -13+shift*-19, -13+shift*19, -12+shift*-20, -12+shift*20, -11+shift*-20, -11+shift*20, -10+shift*-21, -10+shift*21, -9+shift*-21, -9+shift*21, -8+shift*-22, -8+shift*22, -7+shift*-22, -7+shift*22, -6+shift*-22, -6+shift*22, -5+shift*-22, -5+shift*22, -4+shift*-23, -4+shift*23, -3+shift*-23, -3+shift*23, -2+shift*-23, -2+shift*23, -1+shift*-23, -1+shift*23, 0+shift*-23, 0+shift*23, 1+shift*-23, 1+shift*23, 2+shift*-23, 2+shift*23, 3+shift*-23, 3+shift*23, 4+shift*-23, 4+shift*23, 5+shift*-22, 5+shift*22, 6+shift*-22, 6+shift*22, 7+shift*-22, 7+shift*22, 8+shift*-22, 8+shift*22, 9+shift*-21, 9+shift*21, 10+shift*-21, 10+shift*21, 11+shift*-20, 11+shift*20, 12+shift*-20, 12+shift*20, 13+shift*-19, 13+shift*19, 14+shift*-18, 14+shift*18, 15+shift*-18, 15+shift*-17, 15+shift*17, 15+shift*18, 16+shift*-17, 16+shift*-16, 16+shift*16, 16+shift*17, 17+shift*-16, 17+shift*-15, 17+shift*15, 17+shift*16, 18+shift*-15, 18+shift*-14, 18+shift*14, 18+shift*15, 19+shift*-13, 19+shift*13, 20+shift*-12, 20+shift*-11, 20+shift*11, 20+shift*12, 21+shift*-10, 21+shift*-9, 21+shift*9, 21+shift*10, 22+shift*-8, 22+shift*-7, 22+shift*-6, 22+shift*-5, 22+shift*5, 22+shift*6, 22+shift*7, 22+shift*8, 23+shift*-4, 23+shift*-3, 23+shift*-2, 23+shift*-1, 23+shift*0, 23+shift*1, 23+shift*2, 23+shift*3, 23+shift*4};
	if((tmp[22]=malloc(sizeof(tmp22)))==0)
		perror("malloc tmp22 AreaArray");
	memcpy(tmp[22],tmp22,sizeof(tmp22));
	int tmp23[144]={-24+shift*-4, -24+shift*-3, -24+shift*-2, -24+shift*-1, -24+shift*0, -24+shift*1, -24+shift*2, -24+shift*3, -24+shift*4, -23+shift*-8, -23+shift*-7, -23+shift*-6, -23+shift*-5, -23+shift*5, -23+shift*6, -23+shift*7, -23+shift*8, -22+shift*-10, -22+shift*-9, -22+shift*9, -22+shift*10, -21+shift*-12, -21+shift*-11, -21+shift*11, -21+shift*12, -20+shift*-14, -20+shift*-13, -20+shift*13, -20+shift*14, -19+shift*-15, -19+shift*-14, -19+shift*14, -19+shift*15, -18+shift*-16, -18+shift*16, -17+shift*-17, -17+shift*17, -16+shift*-18, -16+shift*18, -15+shift*-19, -15+shift*19, -14+shift*-20, -14+shift*-19, -14+shift*19, -14+shift*20, -13+shift*-20, -13+shift*20, -12+shift*-21, -12+shift*21, -11+shift*-21, -11+shift*21, -10+shift*-22, -10+shift*22, -9+shift*-22, -9+shift*22, -8+shift*-23, -8+shift*23, -7+shift*-23, -7+shift*23, -6+shift*-23, -6+shift*23, -5+shift*-23, -5+shift*23, -4+shift*-24, -4+shift*24, -3+shift*-24, -3+shift*24, -2+shift*-24, -2+shift*24, -1+shift*-24, -1+shift*24, 0+shift*-24, 0+shift*24, 1+shift*-24, 1+shift*24, 2+shift*-24, 2+shift*24, 3+shift*-24, 3+shift*24, 4+shift*-24, 4+shift*24, 5+shift*-23, 5+shift*23, 6+shift*-23, 6+shift*23, 7+shift*-23, 7+shift*23, 8+shift*-23, 8+shift*23, 9+shift*-22, 9+shift*22, 10+shift*-22, 10+shift*22, 11+shift*-21, 11+shift*21, 12+shift*-21, 12+shift*21, 13+shift*-20, 13+shift*20, 14+shift*-20, 14+shift*-19, 14+shift*19, 14+shift*20, 15+shift*-19, 15+shift*19, 16+shift*-18, 16+shift*18, 17+shift*-17, 17+shift*17, 18+shift*-16, 18+shift*16, 19+shift*-15, 19+shift*-14, 19+shift*14, 19+shift*15, 20+shift*-14, 20+shift*-13, 20+shift*13, 20+shift*14, 21+shift*-12, 21+shift*-11, 21+shift*11, 21+shift*12, 22+shift*-10, 22+shift*-9, 22+shift*9, 22+shift*10, 23+shift*-8, 23+shift*-7, 23+shift*-6, 23+shift*-5, 23+shift*5, 23+shift*6, 23+shift*7, 23+shift*8, 24+shift*-4, 24+shift*-3, 24+shift*-2, 24+shift*-1, 24+shift*0, 24+shift*1, 24+shift*2, 24+shift*3, 24+shift*4};
	if((tmp[23]=malloc(sizeof(tmp23)))==0)
		perror("malloc tmp23 AreaArray");
	memcpy(tmp[23],tmp23,sizeof(tmp23));
	int tmp24[168]={-25+shift*-5, -25+shift*-4, -25+shift*-3, -25+shift*-2, -25+shift*-1, -25+shift*0, -25+shift*1, -25+shift*2, -25+shift*3, -25+shift*4, -25+shift*5, -24+shift*-8, -24+shift*-7, -24+shift*-6, -24+shift*-5, -24+shift*5, -24+shift*6, -24+shift*7, -24+shift*8, -23+shift*-11, -23+shift*-10, -23+shift*-9, -23+shift*9, -23+shift*10, -23+shift*11, -22+shift*-12, -22+shift*-11, -22+shift*11, -22+shift*12, -21+shift*-14, -21+shift*-13, -21+shift*13, -21+shift*14, -20+shift*-15, -20+shift*15, -19+shift*-17, -19+shift*-16, -19+shift*16, -19+shift*17, -18+shift*-18, -18+shift*-17, -18+shift*17, -18+shift*18, -17+shift*-19, -17+shift*-18, -17+shift*18, -17+shift*19, -16+shift*-19, -16+shift*19, -15+shift*-20, -15+shift*20, -14+shift*-21, -14+shift*21, -13+shift*-21, -13+shift*21, -12+shift*-22, -12+shift*22, -11+shift*-23, -11+shift*-22, -11+shift*22, -11+shift*23, -10+shift*-23, -10+shift*23, -9+shift*-23, -9+shift*23, -8+shift*-24, -8+shift*24, -7+shift*-24, -7+shift*24, -6+shift*-24, -6+shift*24, -5+shift*-25, -5+shift*-24, -5+shift*24, -5+shift*25, -4+shift*-25, -4+shift*25, -3+shift*-25, -3+shift*25, -2+shift*-25, -2+shift*25, -1+shift*-25, -1+shift*25, 0+shift*-25, 0+shift*25, 1+shift*-25, 1+shift*25, 2+shift*-25, 2+shift*25, 3+shift*-25, 3+shift*25, 4+shift*-25, 4+shift*25, 5+shift*-25, 5+shift*-24, 5+shift*24, 5+shift*25, 6+shift*-24, 6+shift*24, 7+shift*-24, 7+shift*24, 8+shift*-24, 8+shift*24, 9+shift*-23, 9+shift*23, 10+shift*-23, 10+shift*23, 11+shift*-23, 11+shift*-22, 11+shift*22, 11+shift*23, 12+shift*-22, 12+shift*22, 13+shift*-21, 13+shift*21, 14+shift*-21, 14+shift*21, 15+shift*-20, 15+shift*20, 16+shift*-19, 16+shift*19, 17+shift*-19, 17+shift*-18, 17+shift*18, 17+shift*19, 18+shift*-18, 18+shift*-17, 18+shift*17, 18+shift*18, 19+shift*-17, 19+shift*-16, 19+shift*16, 19+shift*17, 20+shift*-15, 20+shift*15, 21+shift*-14, 21+shift*-13, 21+shift*13, 21+shift*14, 22+shift*-12, 22+shift*-11, 22+shift*11, 22+shift*12, 23+shift*-11, 23+shift*-10, 23+shift*-9, 23+shift*9, 23+shift*10, 23+shift*11, 24+shift*-8, 24+shift*-7, 24+shift*-6, 24+shift*-5, 24+shift*5, 24+shift*6, 24+shift*7, 24+shift*8, 25+shift*-5, 25+shift*-4, 25+shift*-3, 25+shift*-2, 25+shift*-1, 25+shift*0, 25+shift*1, 25+shift*2, 25+shift*3, 25+shift*4, 25+shift*5};
	if((tmp[24]=malloc(sizeof(tmp24)))==0)
		perror("malloc tmp24 AreaArray");
	memcpy(tmp[24],tmp24,sizeof(tmp24));
	int tmp25[164]={-26+shift*-5, -26+shift*-4, -26+shift*-3, -26+shift*-2, -26+shift*-1, -26+shift*0, -26+shift*1, -26+shift*2, -26+shift*3, -26+shift*4, -26+shift*5, -25+shift*-8, -25+shift*-7, -25+shift*-6, -25+shift*6, -25+shift*7, -25+shift*8, -24+shift*-11, -24+shift*-10, -24+shift*-9, -24+shift*9, -24+shift*10, -24+shift*11, -23+shift*-13, -23+shift*-12, -23+shift*12, -23+shift*13, -22+shift*-14, -22+shift*-13, -22+shift*13, -22+shift*14, -21+shift*-16, -21+shift*-15, -21+shift*15, -21+shift*16, -20+shift*-17, -20+shift*-16, -20+shift*16, -20+shift*17, -19+shift*-18, -19+shift*18, -18+shift*-19, -18+shift*19, -17+shift*-20, -17+shift*20, -16+shift*-21, -16+shift*-20, -16+shift*20, -16+shift*21, -15+shift*-21, -15+shift*21, -14+shift*-22, -14+shift*22, -13+shift*-23, -13+shift*-22, -13+shift*22, -13+shift*23, -12+shift*-23, -12+shift*23, -11+shift*-24, -11+shift*24, -10+shift*-24, -10+shift*24, -9+shift*-24, -9+shift*24, -8+shift*-25, -8+shift*25, -7+shift*-25, -7+shift*25, -6+shift*-25, -6+shift*25, -5+shift*-26, -5+shift*26, -4+shift*-26, -4+shift*26, -3+shift*-26, -3+shift*26, -2+shift*-26, -2+shift*26, -1+shift*-26, -1+shift*26, 0+shift*-26, 0+shift*26, 1+shift*-26, 1+shift*26, 2+shift*-26, 2+shift*26, 3+shift*-26, 3+shift*26, 4+shift*-26, 4+shift*26, 5+shift*-26, 5+shift*26, 6+shift*-25, 6+shift*25, 7+shift*-25, 7+shift*25, 8+shift*-25, 8+shift*25, 9+shift*-24, 9+shift*24, 10+shift*-24, 10+shift*24, 11+shift*-24, 11+shift*24, 12+shift*-23, 12+shift*23, 13+shift*-23, 13+shift*-22, 13+shift*22, 13+shift*23, 14+shift*-22, 14+shift*22, 15+shift*-21, 15+shift*21, 16+shift*-21, 16+shift*-20, 16+shift*20, 16+shift*21, 17+shift*-20, 17+shift*20, 18+shift*-19, 18+shift*19, 19+shift*-18, 19+shift*18, 20+shift*-17, 20+shift*-16, 20+shift*16, 20+shift*17, 21+shift*-16, 21+shift*-15, 21+shift*15, 21+shift*16, 22+shift*-14, 22+shift*-13, 22+shift*13, 22+shift*14, 23+shift*-13, 23+shift*-12, 23+shift*12, 23+shift*13, 24+shift*-11, 24+shift*-10, 24+shift*-9, 24+shift*9, 24+shift*10, 24+shift*11, 25+shift*-8, 25+shift*-7, 25+shift*-6, 25+shift*6, 25+shift*7, 25+shift*8, 26+shift*-5, 26+shift*-4, 26+shift*-3, 26+shift*-2, 26+shift*-1, 26+shift*0, 26+shift*1, 26+shift*2, 26+shift*3, 26+shift*4, 26+shift*5};
	if((tmp[25]=malloc(sizeof(tmp25)))==0)
		perror("malloc tmp25 AreaArray");
	memcpy(tmp[25],tmp25,sizeof(tmp25));
	int tmp26[160]={-27+shift*-5, -27+shift*-4, -27+shift*-3, -27+shift*-2, -27+shift*-1, -27+shift*0, -27+shift*1, -27+shift*2, -27+shift*3, -27+shift*4, -27+shift*5, -26+shift*-8, -26+shift*-7, -26+shift*-6, -26+shift*6, -26+shift*7, -26+shift*8, -25+shift*-11, -25+shift*-10, -25+shift*-9, -25+shift*9, -25+shift*10, -25+shift*11, -24+shift*-13, -24+shift*-12, -24+shift*12, -24+shift*13, -23+shift*-15, -23+shift*-14, -23+shift*14, -23+shift*15, -22+shift*-16, -22+shift*-15, -22+shift*15, -22+shift*16, -21+shift*-17, -21+shift*17, -20+shift*-18, -20+shift*18, -19+shift*-19, -19+shift*19, -18+shift*-20, -18+shift*20, -17+shift*-21, -17+shift*21, -16+shift*-22, -16+shift*22, -15+shift*-23, -15+shift*-22, -15+shift*22, -15+shift*23, -14+shift*-23, -14+shift*23, -13+shift*-24, -13+shift*24, -12+shift*-24, -12+shift*24, -11+shift*-25, -11+shift*25, -10+shift*-25, -10+shift*25, -9+shift*-25, -9+shift*25, -8+shift*-26, -8+shift*26, -7+shift*-26, -7+shift*26, -6+shift*-26, -6+shift*26, -5+shift*-27, -5+shift*27, -4+shift*-27, -4+shift*27, -3+shift*-27, -3+shift*27, -2+shift*-27, -2+shift*27, -1+shift*-27, -1+shift*27, 0+shift*-27, 0+shift*27, 1+shift*-27, 1+shift*27, 2+shift*-27, 2+shift*27, 3+shift*-27, 3+shift*27, 4+shift*-27, 4+shift*27, 5+shift*-27, 5+shift*27, 6+shift*-26, 6+shift*26, 7+shift*-26, 7+shift*26, 8+shift*-26, 8+shift*26, 9+shift*-25, 9+shift*25, 10+shift*-25, 10+shift*25, 11+shift*-25, 11+shift*25, 12+shift*-24, 12+shift*24, 13+shift*-24, 13+shift*24, 14+shift*-23, 14+shift*23, 15+shift*-23, 15+shift*-22, 15+shift*22, 15+shift*23, 16+shift*-22, 16+shift*22, 17+shift*-21, 17+shift*21, 18+shift*-20, 18+shift*20, 19+shift*-19, 19+shift*19, 20+shift*-18, 20+shift*18, 21+shift*-17, 21+shift*17, 22+shift*-16, 22+shift*-15, 22+shift*15, 22+shift*16, 23+shift*-15, 23+shift*-14, 23+shift*14, 23+shift*15, 24+shift*-13, 24+shift*-12, 24+shift*12, 24+shift*13, 25+shift*-11, 25+shift*-10, 25+shift*-9, 25+shift*9, 25+shift*10, 25+shift*11, 26+shift*-8, 26+shift*-7, 26+shift*-6, 26+shift*6, 26+shift*7, 26+shift*8, 27+shift*-5, 27+shift*-4, 27+shift*-3, 27+shift*-2, 27+shift*-1, 27+shift*0, 27+shift*1, 27+shift*2, 27+shift*3, 27+shift*4, 27+shift*5};
	if((tmp[26]=malloc(sizeof(tmp26)))==0)
		perror("malloc tmp26 AreaArray");
	memcpy(tmp[26],tmp26,sizeof(tmp26));
	int tmp27[184]={-28+shift*-5, -28+shift*-4, -28+shift*-3, -28+shift*-2, -28+shift*-1, -28+shift*0, -28+shift*1, -28+shift*2, -28+shift*3, -28+shift*4, -28+shift*5, -27+shift*-9, -27+shift*-8, -27+shift*-7, -27+shift*-6, -27+shift*6, -27+shift*7, -27+shift*8, -27+shift*9, -26+shift*-11, -26+shift*-10, -26+shift*-9, -26+shift*9, -26+shift*10, -26+shift*11, -25+shift*-13, -25+shift*-12, -25+shift*12, -25+shift*13, -24+shift*-15, -24+shift*-14, -24+shift*14, -24+shift*15, -23+shift*-16, -23+shift*16, -22+shift*-18, -22+shift*-17, -22+shift*17, -22+shift*18, -21+shift*-19, -21+shift*-18, -21+shift*18, -21+shift*19, -20+shift*-20, -20+shift*-19, -20+shift*19, -20+shift*20, -19+shift*-21, -19+shift*-20, -19+shift*20, -19+shift*21, -18+shift*-22, -18+shift*-21, -18+shift*21, -18+shift*22, -17+shift*-22, -17+shift*22, -16+shift*-23, -16+shift*23, -15+shift*-24, -15+shift*24, -14+shift*-24, -14+shift*24, -13+shift*-25, -13+shift*25, -12+shift*-25, -12+shift*25, -11+shift*-26, -11+shift*26, -10+shift*-26, -10+shift*26, -9+shift*-27, -9+shift*-26, -9+shift*26, -9+shift*27, -8+shift*-27, -8+shift*27, -7+shift*-27, -7+shift*27, -6+shift*-27, -6+shift*27, -5+shift*-28, -5+shift*28, -4+shift*-28, -4+shift*28, -3+shift*-28, -3+shift*28, -2+shift*-28, -2+shift*28, -1+shift*-28, -1+shift*28, 0+shift*-28, 0+shift*28, 1+shift*-28, 1+shift*28, 2+shift*-28, 2+shift*28, 3+shift*-28, 3+shift*28, 4+shift*-28, 4+shift*28, 5+shift*-28, 5+shift*28, 6+shift*-27, 6+shift*27, 7+shift*-27, 7+shift*27, 8+shift*-27, 8+shift*27, 9+shift*-27, 9+shift*-26, 9+shift*26, 9+shift*27, 10+shift*-26, 10+shift*26, 11+shift*-26, 11+shift*26, 12+shift*-25, 12+shift*25, 13+shift*-25, 13+shift*25, 14+shift*-24, 14+shift*24, 15+shift*-24, 15+shift*24, 16+shift*-23, 16+shift*23, 17+shift*-22, 17+shift*22, 18+shift*-22, 18+shift*-21, 18+shift*21, 18+shift*22, 19+shift*-21, 19+shift*-20, 19+shift*20, 19+shift*21, 20+shift*-20, 20+shift*-19, 20+shift*19, 20+shift*20, 21+shift*-19, 21+shift*-18, 21+shift*18, 21+shift*19, 22+shift*-18, 22+shift*-17, 22+shift*17, 22+shift*18, 23+shift*-16, 23+shift*16, 24+shift*-15, 24+shift*-14, 24+shift*14, 24+shift*15, 25+shift*-13, 25+shift*-12, 25+shift*12, 25+shift*13, 26+shift*-11, 26+shift*-10, 26+shift*-9, 26+shift*9, 26+shift*10, 26+shift*11, 27+shift*-9, 27+shift*-8, 27+shift*-7, 27+shift*-6, 27+shift*6, 27+shift*7, 27+shift*8, 27+shift*9, 28+shift*-5, 28+shift*-4, 28+shift*-3, 28+shift*-2, 28+shift*-1, 28+shift*0, 28+shift*1, 28+shift*2, 28+shift*3, 28+shift*4, 28+shift*5};
	if((tmp[27]=malloc(sizeof(tmp27)))==0)
		perror("malloc tmp27 AreaArray");
	memcpy(tmp[27],tmp27,sizeof(tmp27));
	int tmp28[172]={-29+shift*-5, -29+shift*-4, -29+shift*-3, -29+shift*-2, -29+shift*-1, -29+shift*0, -29+shift*1, -29+shift*2, -29+shift*3, -29+shift*4, -29+shift*5, -28+shift*-9, -28+shift*-8, -28+shift*-7, -28+shift*-6, -28+shift*6, -28+shift*7, -28+shift*8, -28+shift*9, -27+shift*-11, -27+shift*-10, -27+shift*10, -27+shift*11, -26+shift*-13, -26+shift*-12, -26+shift*12, -26+shift*13, -25+shift*-15, -25+shift*-14, -25+shift*14, -25+shift*15, -24+shift*-17, -24+shift*-16, -24+shift*16, -24+shift*17, -23+shift*-18, -23+shift*-17, -23+shift*17, -23+shift*18, -22+shift*-19, -22+shift*19, -21+shift*-20, -21+shift*20, -20+shift*-21, -20+shift*21, -19+shift*-22, -19+shift*22, -18+shift*-23, -18+shift*23, -17+shift*-24, -17+shift*-23, -17+shift*23, -17+shift*24, -16+shift*-24, -16+shift*24, -15+shift*-25, -15+shift*25, -14+shift*-25, -14+shift*25, -13+shift*-26, -13+shift*26, -12+shift*-26, -12+shift*26, -11+shift*-27, -11+shift*27, -10+shift*-27, -10+shift*27, -9+shift*-28, -9+shift*28, -8+shift*-28, -8+shift*28, -7+shift*-28, -7+shift*28, -6+shift*-28, -6+shift*28, -5+shift*-29, -5+shift*29, -4+shift*-29, -4+shift*29, -3+shift*-29, -3+shift*29, -2+shift*-29, -2+shift*29, -1+shift*-29, -1+shift*29, 0+shift*-29, 0+shift*29, 1+shift*-29, 1+shift*29, 2+shift*-29, 2+shift*29, 3+shift*-29, 3+shift*29, 4+shift*-29, 4+shift*29, 5+shift*-29, 5+shift*29, 6+shift*-28, 6+shift*28, 7+shift*-28, 7+shift*28, 8+shift*-28, 8+shift*28, 9+shift*-28, 9+shift*28, 10+shift*-27, 10+shift*27, 11+shift*-27, 11+shift*27, 12+shift*-26, 12+shift*26, 13+shift*-26, 13+shift*26, 14+shift*-25, 14+shift*25, 15+shift*-25, 15+shift*25, 16+shift*-24, 16+shift*24, 17+shift*-24, 17+shift*-23, 17+shift*23, 17+shift*24, 18+shift*-23, 18+shift*23, 19+shift*-22, 19+shift*22, 20+shift*-21, 20+shift*21, 21+shift*-20, 21+shift*20, 22+shift*-19, 22+shift*19, 23+shift*-18, 23+shift*-17, 23+shift*17, 23+shift*18, 24+shift*-17, 24+shift*-16, 24+shift*16, 24+shift*17, 25+shift*-15, 25+shift*-14, 25+shift*14, 25+shift*15, 26+shift*-13, 26+shift*-12, 26+shift*12, 26+shift*13, 27+shift*-11, 27+shift*-10, 27+shift*10, 27+shift*11, 28+shift*-9, 28+shift*-8, 28+shift*-7, 28+shift*-6, 28+shift*6, 28+shift*7, 28+shift*8, 28+shift*9, 29+shift*-5, 29+shift*-4, 29+shift*-3, 29+shift*-2, 29+shift*-1, 29+shift*0, 29+shift*1, 29+shift*2, 29+shift*3, 29+shift*4, 29+shift*5};
	if((tmp[28]=malloc(sizeof(tmp28)))==0)
		perror("malloc tmp28 AreaArray");
	memcpy(tmp[28],tmp28,sizeof(tmp28));
}

void realizeAreaArray(){
	int i;
	for(i=0;i<30;i++)
		free(tmp[i]);
}

#undef shift
#undef tmp
