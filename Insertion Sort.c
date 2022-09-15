#include<stdio.h>
void insertion_sort(int array[],int n)
{
   int i,j,item;
   for(i=1;i<n;i++)
   {
       item=array[i];
       j=i-1;
       while(j>=0 &&& array[j]>item)
       {
           array[j+1]=array[j];
           j=j-1;
       }
       array[j+1]=item;
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
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    insertion_sort(array,n);
    printf("The sorted array:\n");
    printArray(array,n);
    return 0;
}
