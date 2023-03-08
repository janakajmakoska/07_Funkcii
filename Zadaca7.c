#include <stdio.h>

void dzvezdi(int n) {
    if (n == 0)
        return;
    else {
        for (int i = 0; i < n; i++)
            printf("* ");
        printf("\n");
        dzvezdi(n - 1);
    }
}

int main() {
    int n;
    printf("Внесете број на ѕвезди (n): ");
    scanf("%d", &n);
    printf("Се добива:\n");
    dzvezdi(n);
    return 0;
}
