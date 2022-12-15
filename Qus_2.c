#include <stdio.h>
#include <math.h>
int main()
{
    int choice, fact = 1, num, power, x, y;
    int digitSum = 0, number, rem;
    printf("Enter choice number(1 to 3): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter number for factorial: ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("Factorial of number is: %d", fact);
        break;
    }
    case 2:
    {
        printf("Enter first number: ");
        scanf("%d", &x);
        printf("Enter second number: ");
        scanf("%d", &y);
        power = pow(x, y);
        printf("%d to the power %d is: %d", x, y, power);
        break;
    }
    case 3:
    {
        printf("Enter the number: ");
        scanf("%d", &number);
        while (number > 0)
        {
            rem = number % 10;
            digitSum = digitSum + rem;
            number = number / 10;
        }
        printf("Sum of digits is %d",digitSum);
        break;
    }

    default:
    {
        printf("Invalid input.");
        break;
    }
    }
}