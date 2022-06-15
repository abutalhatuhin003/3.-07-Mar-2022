#include<stdio.h>

int main()
{
    int m,n,division,modulus;
    scanf("%d %d", &m, &n);
    division=m/n;
    modulus=m%n;
    printf("m n m/n m%%n");
    printf("\n%d %d %d %d", m, n, division, modulus);
return 0;
}
