#include<iostream>
using namespace std;
int main (void)
{
	int n;
	cout << "Ingrese numero: ";
	cin >> n;
	
	int cifras[10];
	int i =0;
	while(n>0){
		cifras[i]=n%10;
		n=n/10;
		i++;
	}
	for(int s =i-1;s>=0; s--){
		cout<<cifras[s]<<endl;
	}
}
