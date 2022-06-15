#include<stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d", &x,&z);
    y=++x-z--;
    printf("%d",y);
return 0;
}

