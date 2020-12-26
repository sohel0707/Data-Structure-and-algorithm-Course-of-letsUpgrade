#include<iostream>
using namespace std;
void deleteFromStart(int arr[],int &n){
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
void deleteFromEnd(int arr[],int &n){
	n--;
}
// 1 based index
void deleteFromIndex(int arr[],int &n,int ind){
	for(int i=ind-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
int main(){
	int arr[]= { 10,2,24,34,25};
	int n=5;
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;
	// deleteFromStart(arr,n);
	// deleteFromEnd(arr,n);
	deleteFromIndex(arr,n,2);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	return 0;
}