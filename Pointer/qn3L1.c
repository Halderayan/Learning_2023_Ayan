//Write a program to sum every alternate elements of a given array starting for element 0
//For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

#include<stdio.h>


void findAltSum(int *arr,int n){

    int sum=0;
    int i=0;
    while(i<n){

        if(i%2==0){
            sum=sum+*(arr+i);
        }
        i++;    

    }
    printf("ans: %d",sum);

}

int main(){
    
    int n;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    int arr[n];

    
    printf("Enter  array element\n:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int *ptr=arr;
    findAltSum(ptr,n);

    return 0;


}