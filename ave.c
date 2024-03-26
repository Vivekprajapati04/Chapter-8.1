#include<stdio.h>
main()
{
	int n,i;
	printf("size of Array Elements=");
	scanf("%d",&n);
	int a[n],sum = 0,ave;
	
	printf("Enter A Array Element=\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}	
	printf("Sum of Array = %d\n",sum);
	ave = sum/n;
	printf("Average of An Array = %d",ave);
	
	
}