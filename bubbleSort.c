#include <stdio.h>

void printArray(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int *array,int n){
    int temp;
    for (int i = 0; i < n - 1; i++) //For number of pass
    {
        for (int j = 0; j < n - 1 - i; j++){
            if(array[j]>array[j+1]){
                temp = array[i];
                array[i] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);
}