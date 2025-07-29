#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //1 2 3 4 5 6
    //1 3 6 10 15 21
    b[0]=a[0];
    for(int i=1;i<n;i++){
        b[i]=a[i]+b[i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}