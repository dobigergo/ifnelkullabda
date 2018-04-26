#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define szelesseg 50
#define magassag 20
int x=25, y=10;
int n=1,m=1;
int ablakx[szelesseg];
int ablaky[magassag];

void kirajzol(){

system("clear");

for(int i=0;i<szelesseg+2;i++)
	printf("#");
	printf("\n");
for(int i=0;i<y;i++){
	printf("#");
	 for(int j=1;j<szelesseg+1;j++)
	 	printf(" ");

	 printf("#");
	 printf("\n");
}

printf("#");
for(int i=0;i<x;i++)
	printf(" ");
printf("O");
for(int i=x+1;i<szelesseg;i++)
	printf(" ");
printf("#\n");


for(int i=y+1;i<magassag+1;i++){
	printf("#");
	 for(int j=1;j<szelesseg+1;j++)
	 	printf(" ");

	 printf("#");
	 printf("\n");
}

for(int i=0;i<szelesseg+2;i++)
	printf("#");
	printf("\n");
}

void mozgatas(){
	x=x+n;
	y=y+m;
	n=n*ablakx[x];
	m=m*ablaky[y];
}




int main(){

for (int i=0; i<szelesseg; i++) 
	ablakx[i]=1;  
for (int i=0; i<magassag; i++) 
	ablaky[i]=1;

ablakx[0]=-1;
ablakx[szelesseg-1]=-1;
ablaky[0]=-1;
ablaky[magassag]=-1;

for(;;){
kirajzol();
mozgatas();
usleep(80000);
}

}

