#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, a, b = 0, i = 0;
    scanf("%d", &n);
    a = n;
    while(a > 0) {
        i *= 10;
        i += a % 10;
        a /= 10;
    }
    printf("%d", i);

    return 0;
}