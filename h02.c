#include<stdio.h>
int main()
{
	unsigned int n,i,j,max=999,temp;
	int a[n];
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		
	scanf("%u",&a[i]);
	if(a[i]<0)
	{
	
	return 0;
}
}
	for(i=0;i<n;i++)
	{
	max=i;
	for(j=i;j<n;j++)
	{
		if(a[j]>a[max])
		{
			max=j;
		}
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=	temp;
	}
	if(a[0]!=0)
	{
	
	for(i=0;i<n;i++)
	printf("%u",a[i]);
}
else
printf("0");
return 0;	
}
