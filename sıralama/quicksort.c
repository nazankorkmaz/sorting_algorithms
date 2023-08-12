#include<stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int array[],int low, int high)
{
    int pivot=array[high];
    int i=low-1;
    int j;
    for(j=low; j<high; j++)
    {
        if(array[j]<= pivot)
        {
            i++;
            swap(&array[i],&array[j]);

        }
            
    }
    swap(&array[i+1],&array[high]);
    return(i+1);

}

void quickSort(int array[], int low,int high)
{
    if(low<high)
    {
        int pi=partition(array,low,high);  //3 olacak ve 6 ,3.indekse gitmi olacak
        quickSort(array,low,pi-1);
        quickSort(array,pi+1,high);

    }
}

void printArray(int array[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d",array[i]);
    printf("\n");
}

int main()
{
    int data[]={8,7,2,1,0,9,6};
    int size=sizeof(data)/sizeof(data[0]);
    quickSort(data,0,size-1);
    printArray(data,size);
}

kağıtta da yapppp