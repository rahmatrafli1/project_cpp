#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j, k;
    printf("segitiga persegi\n");
    printf("input:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("");
        }
        for (k = 1; k <= i + (i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}