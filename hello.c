#include <stdio.h>
void main() 
{
    int age;
    printf(" enter your age: ");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("you are valid to vote");
    } 
    else
    {
        printf("you are under 18 and do not have the right to vote");
    }
    return 0;
}