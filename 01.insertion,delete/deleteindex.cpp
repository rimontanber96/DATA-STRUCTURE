#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,pos;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];

    }
    cout<<"enter the index number:";
    cin>>pos;
    for(int i=pos;i<size-1;i++){
       array[i]=array[i+1];
    }
    for(int i=0;i<size-1;i++){
      cout<<array[i]<<endl;
    }
} 