#include<stdio.h>
int main()
{
	int n,i;
	int f=0;
	scanf("%d",&n);
	int a[n+1];
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}	

	for(i=0;i<n;i++)
	{
	if(a[i]==i)
	{
	f=1;
	printf("%d ",i);
	}
	}
	if(f==0)
	printf("-1");
return 0;	
}
