#include<stdio.h>

int main()
{
    int n, i, max, min;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=1; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    for(i=1; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("The maximum and minimum of these elements is %d and %d respectively.", max, min);
    return 0;
}
