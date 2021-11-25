#include<stdio.h>
int main()
{
	int i,n,a[50];
	printf("\n\n\n To read and display elements of an array\n");
	printf("\nEnter the size of an array:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements of an array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return(0);
}
