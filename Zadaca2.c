#include <stdio.h>

int vreme(int chas, int minuti, int sekundi) {
    int vkupno_sekundi = chas * 3600 + minuti * 60 + sekundi;
    int do_12_chasot = (12 * 3600 - vkupno_sekundi) % (12 * 3600);
    return do_12_chasot;
}

int main() {
    int chas, minuti, sekundi;
    printf("Внесете час, минути и секунди: ");
    scanf("%d %d %d", &chas, &minuti, &sekundi);
    int do_12_chasot = vreme(chas, minuti, sekundi);
    printf("Остануваат %d секунди до 12 часот.\n", do_12_chasot);
    return 0;
}
