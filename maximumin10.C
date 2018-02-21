#include<stdio.h>
int main()
{
int n=10,a[10],maximum,i;
printf("enter the element:",n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
maximum=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>maximum)
{
maximum=a[i];
}
}
printf("the maximum element is %d",maximum);
return 0;
}
