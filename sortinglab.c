#include <stdio.h>

void bubbleSort(int arr[], int n, int swapTotal){
    int minIdx = -1;
    int i;
    int j;
    
    for(int i=0; i < n-1; i++){
        for (j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
        if (minIdx != i){
            int tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
            swapTotal++;
        }
        
    }
};

void selectionSort(int arr[], int n, int swapTotal){
    int minIdx = -1;
    int min = 100;
    
    for(int i=0; i < n; i++){
        if(arr[i] < min){
            min = arr[1];
            minIdx = i;
            
        }
        if (minIdx != i){
            int tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
            swapTotal++;
        }
    }   
};

void numSwaps(int arr[], int n, int swapTotal){
    for (int i = 0; i < n; i++){
        int swaps = 0;
        for(int j = i+1; j < n; j++){
            if (arr[j] < arr[i]){
                swaps++;
            }
        }
        printf("%d: # of times %d is swapped \n", swaps, arr[i]);
    }
    printf("Total # of swaps: %d\n", swapTotal);
};

int main(){
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int n1 = 9;
    int n2 = 9;

    int swapTotal1 = 0;
    int swapTotal2 = 0;

    printf("array1: \n");
    selectionSort(array1, n1, &swapTotal1);
    numSwaps(array1, n1, &swapTotal1);

    printf("\n");

    printf("array2: \n");
    selectionSort(array2, n2, &swapTotal2);
    numSwaps(array2, n2, swapTotal2);

    return 0;
}