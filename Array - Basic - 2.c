#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The reversed array is\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
