#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[]={4,2,6,1,7};
    int* ptr=arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr=arr;
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;
    for(int i=0;i<=4;i++) cout<<ptr[i]<<endl;
    return 0;
}