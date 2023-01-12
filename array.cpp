//Array In c++
#include<iostream>
using namespace std;

int main(){
/* Here we intialize the array by ourself.
 int array[4]={10,20,30,40};
cout<<array[3]<<endl;
*/
int n;
cin>>n;
int array[n];

for(int i=0;i<n;i++){
 cin>>array[i];
}
//Array inputs
for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
}
//Array output.
/*For user input of the array*/
    return 0;
}