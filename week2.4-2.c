#include <stdio.h>

int main() {
    int a, i, j;

    for(i = 1; i < 10; i++) {
        for(j = 1; j < 10; j++) {
            a = i * j;
            printf("%d * %d = %d\n", i, j, a);
        }
    }
    return 0;
}