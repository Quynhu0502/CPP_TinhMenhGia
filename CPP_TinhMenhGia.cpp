// CPP_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int tong;
    int so;
    int to500;
    int to200;
    int to100;
    int to50;
    int to20;
    int to10;
    int to5;
    int to2;
    int to1;
    cout << "Nhap so tien: ";
    cin >> so;
    to500 = so / 500;
    so %= 500;
    to200 = so /200;
    so %= 200;
    to100 = so / 100;
    so %= 100;
    to50 = so / 50;
    so %= 50;
    to20 = so / 20;
    so %= 20;
    to10 = so / 10;
    so %= 10;
    to5 = so / 5;
    so %= 5;

    to2 = so / 2;
    so %= 2;
    to1 = so /1;
   

    cout << "to 500: " << to500 << endl;
    cout << "to 200: " << to200 << endl;
    cout << "to 100: " << to100 << endl;
    cout << "to 50: " << to50 << endl;
    cout << "to 10: " << to10 << endl;
    cout << "to 5: " << to5 << endl;
    cout << "to 2: " << to2 << endl;
    cout << "to 1: " << to1 << endl;



    return 0;
}


