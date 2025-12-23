#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos,value;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter array position:";
    cin>>pos;
    cout<<" enter the value:";
    cin>>value;
    for(int i=n;i>pos;i--){
        array[i]=array[i-1];
    }
    array[pos]=value;

    cout<<" array after insertion:";
    for(int i=0;i<n+1;i++){
        cout<<array[i]<<" ";
    }


}