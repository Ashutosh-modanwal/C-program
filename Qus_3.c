#include <stdio.h>
#include <math.h>
int main()
{
    int choice, armStrong = 0;
    int num, rem, number, orig;
    printf("Enter choice(1 & 2): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        
        break;
    }
    case 2:
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        orig = number;
        while (number > 0)
        {
            rem = number % 10;
            armStrong = armStrong + rem*rem*rem;
            number = number / 10;
        }
        if (orig == armStrong)
        {
            printf("the number is armStrong number.");
        }
        else
        {
            printf("the number is not armStrong number.");
        }
        break;
    }
    default:
    {
        printf("Invalid input");

        break;
    }
    }
}