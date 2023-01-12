//Printing the maximum and the minimum element in the array
#include<iostream>
#include<climits>
using namespace std;

int main(){
 int n;
 cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int maxNo=INT_MIN;//Minimum integer in c++.
int minNo=INT_MAX;//For both int max and int min we use a new 
//header file named as climits.
//Here we have to intialize the  values of both as if
//we does not do that then the compiler gives them an 
//garbage value.
for(int i=0;i<n;i++){
    /*if(arr[i]>maxNo){
       maxNo=arr[i]; */
     maxNo=max(maxNo,arr[i]);
     //Above is the built in function
     //which gives the maximum of two numbers.
   /* if(arr[i]<minNo){
        minNo=arr[i];
    }*/
    minNo=min(minNo,arr[i]);
}
cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}