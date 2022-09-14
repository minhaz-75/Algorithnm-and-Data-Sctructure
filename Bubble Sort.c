#include<stdio.h>
void bubble_sort(int array[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }

}
void printArray(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}

int main()
{
    int n;
    printf("How many elements:\n");
    scanf("%d",&n);

    int array[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    bubble_sort(array,n);
    printf("The buble sorted array:\n");
    printArray(array,n);
    return 0;
}

