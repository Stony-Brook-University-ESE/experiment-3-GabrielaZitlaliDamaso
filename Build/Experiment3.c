#include <stdio.h>

int main() {
    int n = 1000000;
    int matrix[n];

    for (int i = 0; i < n; i++) {
            matrix[i] = i + 1;
    }

    for (int i = n - 1; i >= 0; i--) {
            printf("%4d ", matrix[i]);
    }

    return 0;
}
