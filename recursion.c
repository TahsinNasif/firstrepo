#include <stdio.h>

int sum(int a) {
    if (a <= 0) {
        return 0;          // base case
    }
    return a + sum(a - 1); // recursive case
}

int main() {
    int x = 5;
    printf("%d", sum(x));  // prints 15 (5+4+3+2+1)
    return 0;
}
