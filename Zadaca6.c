#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Внесете два цели броја: ");
    scanf("%d %d", &a, &b);
    printf("Најголем заеднички делител на %d и %d е %d.\n", a, b, gcd(a, b));
    return 0;
}
