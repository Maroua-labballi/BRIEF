#include <stdio.h>
int fact(int n)
{
    int i,f=1;
   
    for(i=1;i<=n;i++)
    {f=f*i;}
    return f;
}
int main()
{
    int fact(int);
    int no,factorial;
   
    printf("Enter The Number:\n");
    scanf("%d",&no);
    factorial=fact(no);
    
    printf("Factorial Number is = %d\n",factorial);
}