#ifndef _SORT_
#define _SORT_
void InsertionSort(int *Arr, int N);
//bubblesort
void BubbleSort(int *Arr, int N);
//shakesort
void ShakerSort(int A[], int N);
//ShellSort
void ShellSort(int Arr[], int n);
//Qicksort
void QickSort(int Arr[], int left, int right);
//MergeSort
void Merge(int Arr[], int left, int mid, int right);
void MergeSort(int Arr[], int left, int right);
// RadixSort
void RarrdixSort(int *Arr, int n);
// heap short
void heapify(int arr[], int n, int i);
void HeapSort(int arr[], int n);

#endif