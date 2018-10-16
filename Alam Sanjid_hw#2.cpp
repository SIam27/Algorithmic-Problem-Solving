#include <iostream>
using namespace std;
int main(){
	int x,y ,largest=0; //set the largest=0 in order to get the largest
	cout << "enter a number: ";
	cin >> x;
	if(x<0){
		return 0;
	}
	while(x>0){
		y=x%10;
		if (y>largest)
			largest=y; 
			x=x/10;
	}
	cout << "the largest digit is : "<< largest << endl;
	int n,i,count=0;
	cout << "Enter a 2-digit number :";
	cin >> n;
	while((n<10) || (n>99)){
		cout << "Enter a 2-digit number";
		cin >> n;
	}	
	cout << "Factors: "<< endl;  
	for(i = 1;  i<= n; i++){
        if(n % i == 0){
        		count=count+1;
				cout << i << endl;
		}
	}
	cout << n << " has " << count  << " factors";
	return 0;
}
		
		
		
		
		
		
		
		






