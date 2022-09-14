#include<stdio.h>
int linear_search(int array[],int n,int value)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==value)
        {
            return i;
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

    int result=linear_search(array,n,value);
    (value==-1)
    ? printf("The index element is not found in this array")
    : printf("The index is %d of the target element",result);
    return 0;
}
