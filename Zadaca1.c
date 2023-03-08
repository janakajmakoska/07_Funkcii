#include <stdio.h>

int paren(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    for (int i = 0; i < 10; i++) {
        printf("Внесете цел број: ");
        scanf("%d", &n);
        if (paren(n)) {
            printf("%d е парен број\n", n);
        } else {
            printf("%d не е парен број\n", n);
        }
    }
    return 0;
}
