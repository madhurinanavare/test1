#include<stdio.h>
#include<conio.h>
void bubblesort();
void main()
{
	int a[10],n,i;
	printf("Size of array is:");
	scanf("%d",&n);
	printf("Array is:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubblesort(n,a);
	printf("Sorted array is:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void bubblesort(int n,int a[10])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
