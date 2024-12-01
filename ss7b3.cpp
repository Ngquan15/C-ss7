#include <stdio.h>

int main() {
    int A[5]={10,12,13,15,18};
    int sum = 0;
    for(int i=0;i<5;i++){
        if(A[i]%2==0){
            printf("%d\n",A[i]);
            sum++;
        }
    }
    if (sum==0){
        printf("ko co so chan\n");
    }
    return 0;
}
