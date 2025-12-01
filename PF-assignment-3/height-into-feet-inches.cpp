#include<iostream>
using namespace std;
int main(){
	int height, inches, feet;
	cout<<"Enter height in inches";
	cin>>height;
	feet=height/12;
	inches=height%12;
	cout<<"Height in feet = "<<feet<<endl;
	cout<<"Height in inches= "<<inches<<endl;
	return 0;
}
