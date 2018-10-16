#include <iostream>
using namespace std;
int main(){
	int h;
	cout << "enter the height";
	cin>>h;
	for (int r=1; r<=h; r++){ 
		for(int c=1; c<=h;c++){
			if (r==c||c+r==h+1)
			cout<< " ";
			else cout << "*";
		} cout << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	return 0;
}

