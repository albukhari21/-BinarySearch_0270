#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;
        
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi." << endl;
        }
    }

    cout << "=============================" << endl;
    cout << "Masukkan elemen-elemen array:" << endl;
    cout << "=============================" << endl;
    
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do