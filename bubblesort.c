#include<stdio.h>
 
int main()
{
	int sort[50],n,i,j,temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	
	for(i=0;i<n;++i)
		scanf("%d",&sort[i]);
		
	for(i=1;i<n;++i)
		for(j=0;j<(n-i);++j)
			if(sort[j]>sort[j+1])
			{
				temp=sort[j];
				sort[j]=sort[j+1];
				sort[j+1]=temp;
			}
			
	printf("\nArray after sorting: ");
	for(i=0;i<n;++i)
		printf("%d\n",sort[i]);
 
	return 0;
}
