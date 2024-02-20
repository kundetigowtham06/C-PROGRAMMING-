#include<stdio.h>
int main() {
int i,n,mul;
printf("n=");
scanf("%d",&n);
i=1;
mul=1;
while (i<=n)
{
mul=mul*i;
i++;
}
printf("Factorial=%d\n",mul);
printf("i=%d",i);
return 0;
}