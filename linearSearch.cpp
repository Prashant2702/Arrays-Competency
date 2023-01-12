/*Linear searching in array
We  have to print out the indice of the
given element which we have to  find in the array*/
#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
//Here we used an for loop for traversing and finding the 
//the element is key or not.
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}    
return -1;
}
//Here the time complexity for linear serach is O(n).
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int key;
cin>>key;

cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}