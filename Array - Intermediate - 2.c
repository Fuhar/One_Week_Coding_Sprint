#include <stdio.h>

int main() {
	int t, x, y, n, i, a[1000], c[1000];
	scanf("%d", &t);
	for(x = 0; x < t; x++)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        c[0] = a[n-1];
        for(i = 1; i < n; i++)
        {
            c[i] = a[i-1];
        }
        for(i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
	return 0;
}
