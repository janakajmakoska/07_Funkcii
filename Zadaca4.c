#include <stdio.h>

int nzd(int broj1, int broj2) {
    while (broj2 != 0) {
        int temp = broj2;
        broj2 = broj1 % broj2;
        broj1 = temp;
    }
    return broj1;
}

int main() {
    int broj1, broj2;
    printf("Внесете два цели броја: ");
    scanf("%d %d", &broj1, &broj2);
    int gcd = nzd(broj1, broj2);
    printf("Најголемиот заеднички делител на %d и %d е %d\n", broj1, broj2, gcd);
    return 0;
}
