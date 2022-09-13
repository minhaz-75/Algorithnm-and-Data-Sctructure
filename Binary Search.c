#include<stdio.h>
int binaray_search(int array[],int n,int value)
{
    int min,max,mid;
    min=0;
    max=n-1;

    while(min<=max)
    {
        mid=(min+max)/2;
        if(array[mid]==value)
        {
            return mid;
        }
        else if(array[mid]<value)
        {
            min=mid+1;
        }
        else
        {
            max=mid-1;
        }

    }
    return -1;
}
int main()
{
    int n;
    printf("How many elements:\n");
    scanf("%d",&n);

    int array[n],value;
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the target value:\n");
    scanf("%d",&value);

    int result=binaray_search(array,n,value);
    (result==-1)
    ? printf("The element is not found in array")
    : printf("The target index is %d",result);
    return 0;
}
