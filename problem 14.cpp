#include <iostream>
using namespace std;
int main(){
int n; 
cout << "enter an integer: ";
cin >> n;
while (n>9||n<1){
	return 0;}
for (int r=1; r<=n; r++){
	for (int c=1; c<=r; c++)
	cout<<c;
	cout << endl;
}
return 0;
}
