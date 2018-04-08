#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,s=0;
    printf("Enter value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       s=s+i;
    printf("sum=%d",s);
    getch();
}
