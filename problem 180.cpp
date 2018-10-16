#include <iostream>
using namespace std;
int main () {
	int n;
	cout << "enter an odd positive number";
	cin >> n;
	while (n%2==0||n<=0){
		cout << "try again!";
		cin >> n;
	}
	
	
	for (int r=1; r<=n; r++){
		for (int c=1; c<=n; c++){
			if (r==1||c==(n+1)/2)
			cout << "*";
			else cout << " ";}
		cout << endl;
		}
		
	
	return 0;
}
