#include <stdio.h>
 
int main() {
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    int k = (A+B+abs(A-B))/2;
    int maior = (C+k+abs(C-k))/2;
    printf("%d eh o maior\n",maior);
    return 0;
}
