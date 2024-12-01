#include <stdio.h>

int main() {
    int number;
    int A[number];
    printf("nhap do dai mang ");
    scanf("%d",&number);
    for(int i =0;i<number;i++){
        printf("nhap phan tu thu %d cho mang ", i);
        scanf("%d",&A[i]);
    }
    for(int i =0;i<number;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}
