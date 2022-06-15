#include<stdio.h>
int main()
{
    float x,y,multiplication;
    printf("x         y         x*y=?\n");
    printf("-         -           -\n");
    scanf("%f%f",&x,&y);
    multiplication=x*y;
    printf("x         y         x*y\n");
    printf("-         -           -\n");
    printf("\n%.4f    %.4f    %.4f",x,y,multiplication);
    return 0;
}
