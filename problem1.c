#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);

    if(a==b)
    {
        printf("Both numbers are equal.\n");
    }
    else if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }

    return 0;
}