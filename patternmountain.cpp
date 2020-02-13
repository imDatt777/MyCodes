#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<j<<"\t";
		}
		j=2*(n-i)-1;
		for(j=i;j<n;j++){
			cout<<" \t";
		}
		j=2*(n-i)-1;
		for(j=i+1;j<n;j++){
			cout<<" \t";
		}
		if(i==n){
			j=i-1;
		}
		else{
			j=i;
		}
	
     		for(;j>0;j--){
     		
			cout<<j<<"\t";
			
		}
	cout<<endl;
	}
	
	return 0;
}
