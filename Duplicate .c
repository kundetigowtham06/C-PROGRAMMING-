#include<stdio.h>
int main() 
{
 int n;
 printf("n=");
 scanf("%d",&n);
 int i,j,k,t,a[n];
 for(i=0;i<n;i++) 
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++) 
 {
  for(j=i+1;j<5;j++) 
  {
   if(a[i]==a[j]) 
   {
     for(k=j;k<n;k++) 
     {
      t=a[k];
      a[k]=a[k+1];
      a[k+1]=t;
     }
    }
  }
 }
printf("original numbers only\n");
for(i=0;i<n-1;i++) 
{
  printf("a[%d]=%d\n",i,a[i]);
}
return 0;
}
