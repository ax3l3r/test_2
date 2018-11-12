#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b,c;
    printf("x=");
    scanf("%d",&x);
    a=x/10;
    b=x%10+x/100*10;
    c=x%100;
    if (a>b)
        if (a>c)
            printf("%d",a);
        else
            printf("%d",c);
    else
        if (b>c)
            printf("%d",b);
        else
            printf("%d",c);
    return 0;
}
