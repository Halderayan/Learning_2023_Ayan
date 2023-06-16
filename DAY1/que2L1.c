/*
Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"
*/


#include<stdio.h>

void find_grade(int num){

    if(num>= 90 && num <=100){
        printf("Grade A");

    }
    else if(num >= 75 && num <= 89)
    {
        printf("Grade B");

    }
    else if(num >= 60 && num <= 74){
        printf("Grade C");
    }
    else if(num >= 50 && num <= 59){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }

}

int main(){
    int num;
    printf("Please Enter your mark : ");
    scanf("%d",&num);                       // Marks input from user

    find_grade(num);                        //function call 

}