#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    float **a;

    printf("Nhap so hang: ");
    scanf("%d", &m);

    printf("Nhap so cot: ");
    scanf("%d", &n);
    a = (float**)malloc(m * sizeof(float*));

    if (a == NULL) {
        printf("Khong cap phat duoc bo nho!");
        return 0;
    }

    for (i = 0; i < m; i++) {
        a[i] = (float*)malloc(n * sizeof(float));

        if (a[i] == NULL) {
            printf("Khong cap phat duoc bo nho!");
            for (int k = 0; k < i; k++)
                free(a[k]);
            free(a);
            return 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%f", *(a + i) + j);
        }
    }

    printf("Mang hai chieu:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2f ", *(*(a + i) + j));
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
