#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i||(j+i==n-1)){
                cout<<arr[i][j]<<" ";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}