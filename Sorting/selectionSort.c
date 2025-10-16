#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j; 
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main ()
{   
    int n;
    scanf("%d ", &n);
    int *arr;
    arr = (int*) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int key;
    scanf("%d", &key);
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}
