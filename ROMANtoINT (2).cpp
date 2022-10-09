#include <iostream>
#include<string>
using namespace std;

int value(char x){
        if (x=='I')return 1;
    	if (x=='V')return 5;
    	if (x=='X')return 10;
	    if (x=='L')return 50;
	    if (x=='C')return 100;
	    if (x=='D')return 500;
	    if (x=='M')return 1000;
	    
	    return -1;
}
int romanToInt(string s){
	int sum,n;
n=s.length();
	for(int i=0;i<n;i++){
		if(value(s[i])>=value(s[i+1])){
			sum=sum+value(s[i]);
		}
		else{
		 sum=sum+ value(s[i+1])-value(s[i]);
		i++;
		}
	}
	return sum;
	
}


int main(){
	std:: string input;
	cin>>input;
cout<<romanToInt(input );
return 0;
}

	
	
	

	


