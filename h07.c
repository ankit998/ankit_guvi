#include<stdio.h>
int main()
{
	int n,i;
	
	scanf("%d",&n);
	int a[n+1];
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}	

	for(i=0;i<n;i++)
	{
	if(i%2==0)
	{
	if(a[i]%2!=0)
	printf("%d ",a[i]);
	}
	else
	{
	if(a[i]%2==0)
	printf("%d ",a[i]);
	}
	}
return 0;	
}
