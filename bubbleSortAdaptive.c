#include <stdio.h>

void printArray(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSortAdaptive(int *array,int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working on pass number: %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
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
    bubbleSortAdaptive(A, n);
    printArray(A, n);
}