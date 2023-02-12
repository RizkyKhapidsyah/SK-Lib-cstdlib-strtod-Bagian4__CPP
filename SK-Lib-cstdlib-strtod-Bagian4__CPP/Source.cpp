#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char str[] = "4.06";
    char* end;
    double number;

    number = strtod(str, &end);
    cout << "number= " << str << endl;
    cout << "double= " << number << endl;

    if (*end) {
        cout << end;
    } else {
        cout << "null";
    }

    _getch();
    return 0;
}