#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

#define szelesseg 50
#define magassag 20
int x=25, y=10;
int n=1,m=1;
vector<int> ablakx;
vector<int> ablaky;

void kirajzol(){

system("clear");

for(int i=0;i<szelesseg+2;i++)
	cout << "#";
	cout << endl;
for(int i=0;i<y;i++){
	cout << "#";
	 for(int j=1;j<szelesseg+1;j++)
	 	cout <<" ";

	 cout << "#";
	 cout << endl;
}

cout << "#";
for(int i=0;i<x;i++)
	cout <<" ";
cout<<"O";
for(int i=x+1;i<szelesseg;i++)
	cout <<" ";
cout << "#\n";


for(int i=y+1;i<magassag+1;i++){
	cout << "#";
	 for(int j=1;j<szelesseg+1;j++)
	 	cout<<" ";

	 cout << "#\n";
	 
}

for(int i=0;i<szelesseg+2;i++)
	cout << "#";
cout << endl;
}

void mozgatas(){
	x=x+n;
	y=y+m;
	n=n*ablakx[x];
	m=m*ablaky[y];
}




int main(){

for (int i=0; i<szelesseg; i++) 
	ablakx.push_back(1);  
for (int i=0; i<magassag; i++) 
	ablaky.push_back(1);

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

