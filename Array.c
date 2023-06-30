#include <stdio.h>
//
int main()
{
    int a[5], b[5], c[5], i;
    printf("5 elements of first array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("5 elements of second array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("sum of two arrays is %d\n", c[i]);
    }
    return 0;
}