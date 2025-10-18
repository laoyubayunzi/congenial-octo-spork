#include <stdio.h>
#include<stdlib.h>
void fun(int a[], int n) {
    int min = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[min]) {
            min = i;
        }
    }
    int t = a[min];
    a[min] = a[n - 1];
    a[n - 1] = t;
}

int main() {
    int a[5] = {34, 1, 2, 56, 4};
    int n = 5;
    fun(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}