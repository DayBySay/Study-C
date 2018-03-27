#include <stdio.h>

void fib(int f, int t, int n) {
    if (t >= n) {
        return;
    }

    printf("%d\n", f);

    fib(t, f+t, n);
}

int main(void)
{
    fib(0, 1, 100);

    return 0;
}
