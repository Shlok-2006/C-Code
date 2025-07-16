#include<stdio.h>

int main(){

    int age;
    printf("enter age:");
    scanf("%d",&age);

    if(age>18){
        printf("Adult\n");
        printf("Can VOTE\n");
        printf("Can DRIVE\n");
    }else{
        printf("Not Adult\n");
    }

    // Terenary Operator:
    int num;
    printf("enter number:");
    scanf("%d",&num);

    num >=9 ? printf("2 DIGIT/More\n"):printf("1 DIGIT/Negative\n");

    // SWITCH:
    int day;
    printf("Enter Day(1-7): "); //1-mon; 2-tue; 3-wed;
    scanf("%d",&day);

    switch(day){
        case 1: printf("Monday\n");
                break;
        case 2: printf("Tuesday\n");
                break;
        case 3: printf("Monday\n");
                break;
        case 4: printf("Monday\n");
                break;
        case 5: printf("Monday\n");
                 break;
        case 6: printf("Monday\n");
                 break;
        case 7: printf("Monday\n");
                 break;
        default: printf("Not a Day\n");
    }

}