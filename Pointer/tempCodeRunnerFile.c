#include<stdio.h>

void swap(void* x,void* y){
    void* temp=x;
    x=y;
    y=temp;
}


int main(){

    int x,y;
    printf("Please Enter The Integer Number ");
    scanf("%d %d",&x,&y);swap(&x,&y);

    int x1,y1;
    printf("Please Enter Character ");
    scanf("%c %c",&x1,&y1);swap(&x1,&y1);

    int x2,y2;
    printf("Please Enter Float Number ");
    scanf("%f %f",&x2,&y2);
    swap(&x2,&y2);

    
}