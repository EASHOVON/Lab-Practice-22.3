#include <stdio.h>

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int *array, int n){
    int indexOfMin, temp;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n;j++){
            if(array[j]<array[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = array[i];
        array[i] = array[indexOfMin];
        array[indexOfMin] = temp;
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
}