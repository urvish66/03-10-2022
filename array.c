#include<stdio.h>
void main()
{
	int arr[5],ar[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);
	}

        printf("\n");
	for(i=0;i<5;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&ar[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
		printf("\t");		
		printf("%d",ar[i]);
		
	}


}