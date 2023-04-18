nclude <stdio.h>

void InsertionSort(int arr[], int array_size);

int main() {
    int arr[5] = {4, 23, 56, 7, 8};
    int array_size = 5;
    int i;
    InsertionSort(arr, array_size);
    for (i = 0; i < array_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void InsertionSort(int arr[], int array_size) {
    int i, j, small;
    for (i = 0; i < array_size; i++) {
        small = arr[i];
        for (j = i - 1; j >= 0 && small < arr[j]; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = small;
    }
}
