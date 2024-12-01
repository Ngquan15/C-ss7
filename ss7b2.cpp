#include <stdio.h>
int main() {
    int number,A[5];
    for(int i=0;i<5;i++){
        printf("nhap so mang : ");
        scanf("%d", &A[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}
