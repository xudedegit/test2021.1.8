#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

    int A = 0;
    int B = 0;
    int C = 0;
    int Tot = 0;
    int n = 0;
    int sum = 0;
        while(scanf("%d", &n), n != -1)
        {
            sum++;
            switch (n)
            {
            case 1:
                A++;
                break;
            case 2:
                B++;
                break;
            case 3:
                C++;
                break;
            default:
                break;
            };
        }

    printf("A=%d\nB=%d\nC=%d\nTot=%d\n", A, B, C, A + B + C);

    if (A >((sum) / 2)+1)
    {
        printf("A-yes\n");
    }
    else if (B >((sum) / 2)+1)
    {
        printf("B-yes\n");
    }
    else if (C >((sum) / 2)+1)
    {
        printf("C-yes\n");
    }
    else
    {
        printf("all-NO\n");
    }

    return 0;
}