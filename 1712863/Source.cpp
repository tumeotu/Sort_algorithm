#include<iostream>
#include<time.h>
#include<string>
#include<fstream>
#include <ctime>
#include <conio.h> 
#include"Header.h"
#include"Sort.h"
#include"Xuli.h"
using namespace std;
void main()
{
	int *Arr;
	int N;
	optionlevel(N);
	Arr = new int[N];
	KhoiTaoList(Arr, N);
	optionSort(Arr, N);
	delete Arr;
}