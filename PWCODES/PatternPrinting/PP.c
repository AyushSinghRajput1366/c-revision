#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the rows you want tp print");
    scanf("%d", &n);

    printf("Enter the rows you want tp print");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}