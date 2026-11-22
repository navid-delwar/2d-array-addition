#include <stdio.h>

int main()
{
    int n = 4, i, j;

    for (i = n; i >= 1; i--)
    {
        // 1. print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // 2. print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
