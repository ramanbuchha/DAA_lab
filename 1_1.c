#include<stdio.h>
#include<limits.h>
int main(){
    FILE *file;
    int n,i;
    int arr[100];
    int first_max=arr[99], second_max=arr[98];
    int first_min=arr[0], second_min=arr[1];

    file=fopen("input.txt","r");
    if(file==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("reading %d elements from filr:\n",n);
    for(i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n");
    fclose(file);

    for(int i=0;i<n;i++){
        if(arr[i]>first_max){
            second_max=first_max;
            first_max=arr[i];
        } else if(arr[i]>second_max && arr[i]!=first_max){
            second_max=arr[i];
        }
        if(arr[i]<first_min){
            second_min=first_min;
            first_min=arr[i];
        } else if(arr[i]<second_min && arr[i]!=first_min){
            second_min=arr[i];
        }

    }
    printf("second smallest : %d\n",second_min);
    printf("second largest : %d\n",second_max);

    return 0;
}