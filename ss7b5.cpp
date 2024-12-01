#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 4, 6, 8};
    int a;
    int Max = arr[0];
    int Min = arr[0];
    for (a = 1; a < 5; a++) {
        if (arr[a] > Max) {
            Max = arr[a];
        }
		if (arr[a] < Min) {
                Min = arr[a];
            }
        }
        printf("so lon nhat trong mang là: %d\n", Max);
        printf("so nho nhat trong mang là: %d\n", Min);
        return 0;
    }
