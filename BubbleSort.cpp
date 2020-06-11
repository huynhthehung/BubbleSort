// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void BubbleSort(int M[], int n);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int M[50];
    NhapMang(M, n);
    cout << "\nMang sau khi nhap: \n";
    XuatMang(M, n);
    BubbleSort(M, n);
    cout << "\nMang sau khi sap xep: \n";
    XuatMang(M, n);
    return 0;
}





void NhapMang(int M[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        M[i] = rand() % 100;
    }
}

void XuatMang(int M[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << M[i] << "\t";
    }
}

void BubbleSort(int M[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (M[j] < M[j - 1]) {
                int temp = M[j - 1];
                M[j - 1] = M[j];
                M[j] = temp;
            }
        }
    }
}
