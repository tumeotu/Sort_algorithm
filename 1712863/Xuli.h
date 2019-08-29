#ifndef _XULI_
#define _XULI_
#include<iostream>
#include<time.h>
#include<string>
#include<fstream>
#include <ctime>
#include <conio.h> 
#include"Header.h"

using namespace std;
void Swap(int *a, int *b);
void GhiMang(char *Filemane, int *Arr, int N, double value, int gan, int sosanh);
void KhoiTaoList(int *Arr, int N);
void XuatList(int *Arr, int N);
void gan(int *a, int *b, int n);
void run(int *Arr, int N, int value);
void runall(int *Arr, int N);
void optionlevel(int &N);
void optionSort(int *Arr, int &N);
void clrscr();
#endif