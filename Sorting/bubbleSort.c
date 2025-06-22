#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
            // Swap arr[j] and arr[j + 1]
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            swapped = 1;
            }
        }
        if(!swapped)
            break;
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