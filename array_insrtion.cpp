#include<iostream>
using namespace std;
int main(){

char arr[11],x;
int i,pos,n=11;
while(1){


//array passing
cout<<"enter the element of array:";
cout<<endl;
for(i=0;i<11;i++){
    cin>>arr[i];
}

//print array
cout<<"original array:- ";
for(i=0;i<11;i++){
    cout<<arr[i]<<" , ";
}
//enter the value
cout<<endl;
cout<<"enter the value which is going to insert: ";
cin>>x;
n++;
//enter the position
cout<<"enter the position  where we will be insert the value: ";
cin>>pos;
if(0<pos<11){
//shifting an array
for(i=n-1; i>=pos;i-- ){
    arr[i]=arr[i-1];
}
//insert
arr[pos-1]=x;
//inserted array
cout<<"inserted array are:";
for(i=0;i<n;i++){
    cout<<arr[i]<<",";
}
}
else{
    cout<<"postion which is entered is *out of the array*";
}



return 0;
}
}

