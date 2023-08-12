#include <stdio.h>

void merge(int array[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int i, j, k;
    int L[n1], M[n2];

    for (i = 0; i < n1; i++)
        L[i] = array[p + i];

    for (j = 0; j < n2; j++)
        M[j] = array[q + 1 + j];

    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
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
    mergeSort(data, 0, size - 1);
    printArray(data, size);

    return 0;
}

