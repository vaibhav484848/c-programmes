#include<stdio.h>
int main(){

    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    int max=0;
    
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
            
        }
        if(max<sum){
            max=sum;
            count=i;
        }
    }
    printf("%d %d",max,count);
    return 0;
}