#include<stdio.h>
int main(){
    int num1, num2, rem;
    char chooseOperator;
    float sum, sub, mult, div;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("\nwhich arithmetic operation you want perform: ");
    fflush(stdin);
    scanf("%C",&chooseOperator);
    switch (chooseOperator)
    {
    case '+':{
        sum = num1 + num2;
        printf("sum is : %f",sum);
        break;
    }
    case '-':{
        sub = num1 - num2;
        printf("Substraction is : %f",sub);
        break;
    }
    case '*':{
        mult = num1*num2;
        printf("Multiplication is : %f",mult);
        break;
    }
    case '/':{
        div = num1/num2;
        printf("Divison is : %f",div);
        break;
    }
    case '%':{
        rem = num1%num2;
        printf("Remender is : %f",rem);
        break;
    }
        
    
    default: {
        printf("Invalid input.");
        break;
    }
    }

}