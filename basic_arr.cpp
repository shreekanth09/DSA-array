#include<iostream>
using namespace std;


void finding(int arr[],int sz){
    for(int i=0; i<sz; i++){
        cout<< arr[i]<<" ";
    }
    cout<<"printing done";
}
int main(){
    int arr[10]={10,2};
    int size=10;
    // for(int i=0; i<size; i++){
    //     cout<< arr[i]<<" ";
    // }
    // int arr[10];
    // cout<< arr[5];
    finding(arr,size);
                                   //USING FUNCITON


    return 0;
}