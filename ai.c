#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    // iとjが50以下という制限を忘れているバグ版
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        int j = n - i;
        if (i != j)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}