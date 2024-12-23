#include <stdio.h>

int is_prime(int n)
{
    for(int i = 3; i < n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

void primes(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(is_prime(i) == 1 && n % i == 0)
        {
            printf("%d ", i);
            primes(n / i);
            return;
        }
    }
    printf("%d", n);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    primes(a);

    return 0;
}