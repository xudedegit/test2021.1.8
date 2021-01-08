#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//打印出n元货币换成1、2、5元共有多少种换法
int main()
{
    int n;
    int i, j, k;
    int idea = 0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {

        for (j = 0; j <= n; j++)
        {
            for (k = 0; k <= n; k++)
            {
                if (n == i * 1 + j * 2 + k * 5)
                {
                    idea++;
                }
            }
        }

    }
    printf("%d\n", idea);
    return 0;
}