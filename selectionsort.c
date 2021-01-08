#include<stdio.h>
 
int main()
{
    int i,j,n,loc,temp,min,sort[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&sort[i]);
    }
 
    for(i=0;i<n-1;i++)
    {
        min=sort[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>sort[j])
            {
                min=sort[j];
                loc=j;
            }
        }
 
        temp=sort[i];
        sort[i]=sort[loc];
        sort[loc]=temp;
    }
 
    printf("\nSorted list is as follows\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",sort[i]);
    }
 
    return 0;
}
