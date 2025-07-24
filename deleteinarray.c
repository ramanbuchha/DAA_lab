#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements to add :\n");
    scanf("%d",&n);
    int capacity=50;
    int arr[capacity];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to delete :\n");
    int pos;
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}