#include<iostream>
using namespace std;
//S=3!/5!+4!/6!
float N,a=1,b=1,x,y,r,i,j;
float Z,S;
main(){
	
	cout << "Ingrese N: ";
	cin >> N;
	
	for(i=1;i<=N;i++){
	    r=i;
		for(x=r;x<=r+2;x++){
			a*=x;
		}
		
		for(y=r;y<=r+4;y++){
			b*=y;
		}
	
		Z=a/b;
		
		S += Z;
	
		a=1;
		b=1;
	}
	cout << "La sumatoria S = " << S << endl;
	
	
}
