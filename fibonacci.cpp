#include<iostream>
using namespace std;
int main(){
	int n,a=-1,b=1,c;
	
	cin>>n;
	while(n>0){
		
		
		c=a+b;
		a=b;
		b=c;
		
	cout<<c<<"\n";
	n--;
	}
	cout<<endl;
	
	return 0;
	}

