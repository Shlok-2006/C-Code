#include<stdio.h>
#include<math.h>

int main(){

    int a=22;
    int b=a; 
    int c=b+1;
    int d=1,e;

    // Arithmetic Instructions:

    int x=1,y=4,z=2;
    x=y+z;               // y+z=x is not a valid statement
    printf("%d\n",x);
    x=y*z;               // x=yz is not a valid statement
    printf("%d\n",x);
    int power = pow(x,y);   // here x is 8 beacuse of the 16th line of code...
    printf("%d\n", power);
    printf("%d\n",y%z);      // Modular operator: % is the symbol

    // Type Coversion:

    printf("%f\n", 2.0*2);   // Will give float as an answer.
    printf("%f\n", 4.4*5.7);

    // Operator Precedence: (BODMAS) (Arithmetic Operator)

    printf("%d\n", 4+9*10); // first mutiplication and then addition.

    //Relational Operators: 
    printf("%d\n",4==3); // 1 is TRUE and 0 is FALSE
    printf("%d\n",4!=5);

    // Logical Operators:

    printf("%d", (4>5)&&(5>4)); // && AND operator is True when all statements is TRUE.
    printf("%d",(4<5)||(5>6)); // || OR operator is True when atleast one of the statements is TRUE.
    printf("%d", !(3>4)); // ! NOT operator gives Opposite result of the actual one.
    
    // Assigement Operators:
    






    return 0;

}