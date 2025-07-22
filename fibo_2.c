#include<stdio.h>
int main(){
    printf("Enter the number of elements to print in fibonacci\n");
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    printf("0 ");
    printf("1 ");
    for(int i=0;i<((n-2)/2);i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}