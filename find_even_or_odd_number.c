#include<stdio.h>

int main()
{
    int no;

    printf("Enter any number: ");
    scanf("%d", &no);

    // Check if the number is even
    if(no % 2 == 0)
    {
        // If the condition is true, print that the number is even
        printf("%d is even number", no);
    }
    else  // If the number is not even, it must be odd
    {
        // Print that the number is odd
        printf("%d is odd number", no);
    }

    return 0;
}
