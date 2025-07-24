#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements to add :\n");
    scanf("%d",&n);
    int capacity=50;
    int arr[capacity];
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element and position :\n");
    int e,p;
    scanf("%d",&e);
    scanf("%d",&p);
    for(int i=n-1;i>p;i--){
        arr[i+1]=arr[i];
    }
    arr[p-1]=e;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}