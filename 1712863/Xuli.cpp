#include"Xuli.h"
#include"Sort.h"
#include <windows.h>

// struct
struct Dem
{
	__int64 gan = 0;
	__int64 sosanh = 0;
	double total;
};
// Tinh
clock_t start_t, end_t;
Dem Insert, Bubble, Shake, Shell, Qick, Mergetion, Radix, Heap;
void Swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//khoi tao va xuat
void GhiMang(char *Filemane, int *Arr, int N, double value, int gan, int sosanh)
{
	ofstream doc(Filemane);
	doc << "Thoi gian chay thuat toan " << Filemane << " la: " << value << endl;
	doc << "So phep gan la: " << gan << endl;
	doc << "So phep so sanh la: " << sosanh << endl;
	for (int i = 0; i < N; i++)
		doc << Arr[i] << "  ";
	doc.close();
}
void KhoiTaoList(int *Arr, int N)
{
	int a;
	time_t t;
	ofstream doc("mang ban dau.txt");
	/* Khoi tao bo sinh so ngau nhien */
	srand((unsigned)time(&t));
	for (int i = 0; i < N; i++)
	{
		*(Arr + i) = (rand()*(RAND_MAX + 1) + rand());
	}
	// ghi mang vao file.
	for (int i = 0; i < N; i++)
		doc << Arr[i] << "  ";
	doc.close();
}
void XuatList(int *Arr, int N)
{
	for (int i = 0; i < N; i++)
		cout << *(Arr + i) << "  ";
}
// caculution
void gan(int *a, int *b, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = b[i];
}
void run(int *Arr, int N, int value)
{
	char *name;
	if (value == 1)
	{
		name = "InserttionSort.txt";
		start_t = clock();;
		InsertionSort(Arr, N);
		end_t = clock();
		(double)Insert.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nInsertionSort \n Thoi gian chay:  " << Insert.total << endl << "So phep so sanh: " << Insert.sosanh << endl << "So phep gan: " << Insert.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Insert.total, Insert.gan, Insert.sosanh);
	}
	if (value == 2)
	{
		name = "BubbleSort.txt";
		start_t = clock();;
		BubbleSort(Arr, N);
		end_t = clock();
		Bubble.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nBubbleSort \nThoi gian chay: " << Bubble.total << endl << "So phep so sanh: " << Bubble.sosanh << endl << "So phep gan: " << Bubble.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Bubble.total, Bubble.gan, Bubble.sosanh);
	}
	if (value == 3)
	{
		name = "ShakeSort.txt";
		start_t = clock();;
		ShakerSort(Arr, N);
		end_t = clock();
		Shake.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nShakerSort \nThoi gian chay: " << Shake.total << endl << "So phep so sanh : " << Shake.sosanh << endl << "So phep gan : " << Shake.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Shake.total, Shake.gan, Shake.sosanh);
	}
	if (value == 4)
	{
		name = "ShellSort.txt";
		start_t = clock();;
		ShellSort(Arr, N);
		end_t = clock();
		Shell.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nShellSort \nThoi gian chay: " << Shell.total << endl << "So phep so sanh: " << Shell.sosanh << endl << "So phep gan: " << Shell.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Shell.total, Shell.gan, Shell.sosanh);
	}
	if (value == 5)
	{
		name = "QickSort.txt";
		start_t = clock();;
		QickSort(Arr, 0, N - 1);
		end_t = clock();
		Qick.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nQickSort \nThoi gian chay: " << Qick.total << endl << "So phep so sanh: " << Qick.sosanh << endl << " So phep gan: " << Qick.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Qick.total, Qick.gan, Qick.sosanh);
	}
	if (value == 6)
	{
		name = "MergeSort.txt";
		start_t = clock();;
		MergeSort(Arr, 0, N - 1);
		end_t = clock();
		Mergetion.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nMergeSort \n Thoi gian chay: " << Mergetion.total << endl << "So phep so sanh: " << Mergetion.sosanh << endl << "So phep gan: " << Mergetion.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Mergetion.total, Mergetion.gan, Mergetion.sosanh);
	}
	if (value == 7)
	{
		name = "RarrdixSort.txt";
		start_t = clock();;
		RarrdixSort(Arr, N);
		end_t = clock();
		Radix.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nRadixSort \nThoi gian chay: " << Radix.total << endl << "So phep so sanh: " << Radix.sosanh << endl << "So phep gan: " << Radix.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Radix.total, Radix.gan, Radix.sosanh);
	}
	if (value == 8)
	{
		name = "HeapSort.txt";
		start_t = clock();;
		HeapSort(Arr, N);
		end_t = clock();
		Heap.total = double(end_t - start_t) / CLOCKS_PER_SEC;
		cout << "\nHeapSort \nThoi gian chay: " << Heap.total << endl << "So phep so sanh: " << Heap.sosanh << endl << "So phep gan: " << Heap.gan;
		cout << "\n-------------------------------------------\n";
		GhiMang(name, Arr, N, Heap.total, Heap.gan, Heap.sosanh);
	}
}
void runall(int *Arr, int N)
{
	int *Brr = new int[N];
	gan(Brr, Arr, N);
	for (int i = 0; i < 9; i++)
	{
		gan(Arr, Brr, N);
		run(Arr, N, i);
	}
	delete Brr;
}
// main
void optionlevel(int &N)
{
	int i = 1;
	clrscr();
	cout << "\n\tMoi ban chon do dai cua mang";
	cout << "\n1. 100 phan tu";
	cout << "\n2. 1000 phan tu";
	cout << "\n3. 10000 phan tu";
	cout << "\n4. 100000 phan tu";
	cout << "\n5. 1000000 phan tu";
	cout << "\n6. 10000000 phan tu";
	cout << "\n7. 100000000 phan tu";
	while (i == 1)
	{
		if (kbhit())
		{
			int key = _getch();
			if (key == '1')
			{
				N = 100;
				i = -1;
			}
			if (key == '2')
			{
				N = 1000;
				i = -1;
			}
			if (key == '3')
			{
				N = 10000;
				i = -1;
			}
			if (key == '4')
			{
				N = 100000;
				i = -1;
			}
			if (key == '5')
			{
				N = 1000000;
				i = -1;
			}
			if (key == '6')
			{
				N = 10000000;
				i = -1;
			}
			if (key == '7')
			{
				N = 100000000;
				i = -1;
			}
		}
	}

}
void optionSort(int *Arr, int &N)
{
	int i = 1;
	clrscr();
	cout << "\n\tMoi ban chon thuat toan";
	cout << "\n1.InsertiongSort";
	cout << "\n2.BubblSort";
	cout << "\n3.ShakeSort";
	cout << "\n4.ShellSort";
	cout << "\n5.QickSort";
	cout << "\n6.MergeSort";
	cout << "\n7.RarrdixSort";
	cout << "\n8.HeapSort";
	cout << "\n9. Chay tat ca cac thuat toan tren";
	while (i == 1)
	{
		if (kbhit())
		{
			int k = _getch();

			if (k == '1')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 1);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '2')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 2);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '3')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 3);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '4')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 4);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '5')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 5);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '6')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 6);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '7')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 7);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '8')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				run(Arr, N, 8);
				cout << "\nChay xong roi nhe\n";
				i = -1;
			}
			if (k == '9')
			{
				cout << "\nDung out nhe thuat toan dang chay ban cho nhe\n";
				runall(Arr, N);
				cout << "\nChay xong roi nhe\n";
				i = -1;

			}
		}
	}
}
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = { 0, 0 };
	DWORD	dummy;
	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}