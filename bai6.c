#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int *arr1 = NULL, *arr2 = NULL;

    do {
        printf("Nhap so phan tu cua mang 1 (0 < n <= 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 1000);

    arr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    do {
        printf("Nhap so phan tu cua mang 2 (0 < m <= 1000): ");
        scanf("%d", &m);
    } while (m <= 0 || m > 1000);

    arr2 = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    arr1 = (int *)realloc(arr1, (n + m) * sizeof(int)); 
    for (int i = 0; i < m; i++) {
        arr1[n + i] = arr2[i];
    }

    printf("\nMang sau khi gop:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d = %d\n", i, arr1[i]);
    }

    free(arr1);
    free(arr2);

    return 0;
}

