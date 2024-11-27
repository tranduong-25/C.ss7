#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int do_dai = sizeof(mang) / sizeof(mang[0]);

    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < do_dai; i++) {
        printf("%d\n", mang[i]);
    }

    printf("Do dai cua mang: %d\n", do_dai);

    return 0;
}
