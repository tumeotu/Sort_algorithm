#include"Xuli.h"
// Insertiong sort
void InsertionSort(int *Arr, int N)
{
	int l, r, m, x;
	for (int i = 1; i < N; i++)
	{
		l = 0;
		r = i - 1;
		x = Arr[i];
		while (l <= r)
		{
			m = (l + r) / 2;
			if (Arr[m] > x)
			{
				r = m - 1;
			}
			else
			{
				l = m + 1;
			}
		}
		for (int j = i; j > l; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[l] = x;
	}
}
//bubblesort
void BubbleSort(int *Arr, int N)
{
	int i, j;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - i - 1; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				Swap(&Arr[j], &Arr[j + 1]);
			}
		}
	}
}
//shakesort
void ShakerSort(int A[], int N)
{
	bool swapped = true;
	int start = 0;
	int end = N - 1;
	while (swapped) {
		swapped = false;
		for (int i = start; i < end; ++i)
		{
			if (A[i] > A[i + 1])
			{
				swap(A[i], A[i + 1]);
				swapped = true;
			}
		}
		if (!swapped)
			break;
		swapped = false;
		--end;
		for (int i = end - 1; i >= start; --i)
		{
			if (A[i] > A[i + 1])
			{
				swap(A[i], A[i + 1]);
				swapped = true;
			}
		}
		++start;
	}
}
//ShellSort
void ShellSort(int Arr[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i += 1)
		{
			int temp = Arr[i];
			int j;
			for (j = i; j >= gap && Arr[j - gap] > temp; j -= gap)
			{
				Arr[j] = Arr[j - gap];
			}
			Arr[j] = temp;
		}
	}
}
//Qicksort
void QickSort(int Arr[], int left, int right)
{
	int i, j, x, y;
	i = left; j = right;
	x = Arr[(left + right) / 2];
	do
	{
		while (Arr[i]<x && i<right)
		{
			i++;
		}
		while (Arr[j]>x && j>left)
		{
			j--;
		}
		if (i <= j)
		{
			y = Arr[i];
			Arr[i] = Arr[j];
			Arr[j] = y;
			i++;
			j--;
		}
	} while (i <= j);
	if (left < j)
	{
		QickSort(Arr, left, j);
	}
	if (i < right)
	{
		QickSort(Arr, i, right);
	}
}
//MergeSort
void Merge(int Arr[], int left, int mid, int right)
{
	int *temp;
	int i = left;
	int j = mid + 1;
	temp = new int[right - left + 1];
	for (int k = 0; k <= right - left; k++)
	{
		if (Arr[i] < Arr[j])
		{
			temp[k] = Arr[i];
			i++;
		}
		else
		{
			temp[k] = Arr[j];
			j++;
		}
		if (i == mid + 1)
		{
			while (j <= right)
			{
				k++;
				temp[k] = Arr[j];
				j++;
			}
			break;
		}
		if (j == right + 1)
		{
			while (i <= mid)
			{
				k++;
				temp[k] = Arr[i];
				i++;
			}
			break;
		}
	}
	for (int k = 0; k <= right - left; k++)
	{
		Arr[left + k] = temp[k];
	}
	delete temp;
}
void MergeSort(int Arr[], int left, int right)
{
	if (right > left)
	{
		int mid;
		mid = (left + right) / 2;
		MergeSort(Arr, left, mid);
		MergeSort(Arr, mid + 1, right);
		Merge(Arr, left, mid, right);
	}
}
// RadixSort
void RarrdixSort(int *Arr, int n)
{
	int i, m = Arr[0], exp = 1;
	int *b = new int[n];
	for (i = 0; i < n; i++)
	{
		if (Arr[i] > m)
		{
			m = Arr[i];
		}
	}
	while (m / exp > 0)
	{
		int bucket[10] = { 0 };
		for (i = 0; i < n; i++)
		{
			bucket[Arr[i] / exp % 10]++;
		}
		for (i = 1; i < 10; i++)
			bucket[i] += bucket[i - 1];
		for (i = n - 1; i >= 0; i--)
		{
			b[--bucket[Arr[i] / exp % 10]] = Arr[i];
		}
		for (i = 0; i < n; i++)
		{
			Arr[i] = b[i];
		}
		exp *= 10;
	}
}
// heap short
void heapify(int arr[], int n, int i)
{
	int largest = i;  // Initialize largest as root
	int l = 2 * i + 1;  // left = 2*i + 1
	int r = 2 * i + 2;  // right = 2*i + 2
	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
	{
		largest = l;
	}

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
	{
		largest = r;
	}
	// If largest is not root
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
	}
}
// main of heapsort
void HeapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--)
	{
		// Move current root to end
		swap(arr[0], arr[i]);
		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}