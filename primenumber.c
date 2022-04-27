#include <stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            flag++;
    }
    if(flag==2)
        printf("%d number is a prime number",n);
    else
        printf("%d number is not a prime number",n);
    return 0;
}
