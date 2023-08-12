#include <stdio.h>

void insertionSort(int array[], int size)
{
    int step;
    for(step=1;step<size; step++)
    {
        int key=array[step];
        int j=step-1;
        while(key<array[j] && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}
void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int data[] = {6, 5, 12, 10, -9, 1};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    printArray(data, size);

    return 0;
}
