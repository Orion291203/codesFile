#include <iostream>
using namespace std;



int main(){
	int n,x=0,sum=0;;
	cin>>n;
	int array[n];
	if(n>=1 && n<= 200000){
	
	
	for(int i=0;i<n;i++){
		cin>>array[i];
		}
		 
		for(int i=0;i<n-1;i++){
			
			if(array[i]>array[i+1] && 1<=array[i]<=10^9  && 1<=array[i+1]<=10^9){
				x=(array[i]-array[i+1])+1;
				array[i+1]=array[i+1]+x;
				cout<<x<<endl;
				
				}
				
				sum=sum+x;
			
				
				}
				cout<<sum;
				}
				return 0;
				
			}
				
		
		
		
	
	
