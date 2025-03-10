# include <stdio.h>
printf("h");
 int fact(int n)
 {
    if (n<=1)
    {
        return 1;
    }
    else
    return n*fact(n-1);
    
 }
void main()
{
    int n,a;
    printf("enter element");
    scanf("%d",&n);
    a=fact(n);
    printf("factorial is %d",a);  
}