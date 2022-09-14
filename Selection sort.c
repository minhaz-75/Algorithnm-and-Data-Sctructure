#include<stdio.h>

void selection_sort(int array[],int n)
{
    int i,j,temp,index_min;

    for(i=0;i<n-1;i++)
    {
        index_min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[index_min])
            {
                index_min=j;
            }
        }
        if(index_min!=i)
        {
            temp=array[i];
            array[i]=array[index_min];
            array[index_min]=temp;
        }
    }
}
void printArray(int array[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(void)
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
    selection_sort(array,n);
    printf("Sorted array:\n");
    printArray(array,n);
    return 0;
}
