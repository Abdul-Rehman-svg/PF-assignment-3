#include<iostream>
using namespace std;
int main(){
	int i,n,min,max,sum =0;
	min=9;
	max=0;
	for(i=1;i<=10;i++){
		cout<<"Enter number:";
		cin>>n;
		sum= sum+n;
		if(max<n)
		max=n;
		if(min>n)
		min=n;
	}
cout<<"Sum = "<<sum<<endl;
cout<<"Maximum = "<<max<<endl;
cout<<"Minimum = "<<min<<endl;
return 0;
}


