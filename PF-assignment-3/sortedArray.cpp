#include<iostream>
using namespace std;
// Global variables
const int n=10;
int arr[n];
void sortedArray();
void show();
 // Functio to display array
void show(){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
// Functio to sort array
void sortedArray(){
	int temp;
	for(int i=0;i<n-1;i++){
	  for(int j=0;j<n-i-1;j++){
	   if(arr[j]>arr[j+1]){
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
 	     }
      }
    }
cout<<endl;	
}
int main(){
	cout<<"Enter values in array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
cout<<"The Original array:"<<endl;
show();
sortedArray();
cout<<"Sorted   array:"<<endl;
show();
return 0;
}



