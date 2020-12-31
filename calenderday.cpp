#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int dd, mm, yyyy, x;
    cout << "Enter the day";
    cin >> dd;
    cout << "\n Enter the month ";
    cin >> mm;
    cout << "\n Enter the year:";
    cin >> yyyy;
    dd+=mm<3?yyyy--:yyyy-2;
    x=floor((23*mm/9+dd+4+yyyy/4-yyyy/100+yyyy/400)%7);
    switch (x)
    {
    case 0:
        cout << "\n Sunday";
        break;
    case 1:
        cout << "\n Monday";
        break;
    case 2:
        cout << "\n Tuesday";
        break;
    case 3:
        cout << "\n Wednesday";
        break;
    case 4:
        cout << "\n Thrusday";
        break;
    case 5:
        cout << "\n Freiday";
        break;
    case 6:
        cout << "\n Saturday";
        break;
    }
}