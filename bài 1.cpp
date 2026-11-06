#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *a;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    a = (float*)malloc(n * sizeof(float));

    if (a == NULL) {
        printf("Khong cap phat duoc bo nho!");
        return 0;
    }

    // Nhap mang
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%f", a + i);
    }

    // In mang
    printf("Mang vua nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(a + i));
    }

    free(a);
    return 0;
}
