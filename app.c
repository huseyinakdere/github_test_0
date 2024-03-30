#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int h,r;
    float pi,hacim;
    pi=3.1419;

	printf("koninin yukseklini giriniz cm ");
	scanf("%d",&h);
	printf("koninin yaricapini giriniz cm ");
	scanf("%d",&r);
    
    hacim=(pi*r*r*h)/3.0;
	printf("hacim = %f cm kuptur",hacim);
	
	//kodda yapilan degisim satiri
	
	return 0;
}

