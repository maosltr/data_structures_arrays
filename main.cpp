#include <iostream>
using namespace std;

int main()
{
    float monthsArray[6] = {100, 200, 300, 0, 200, 250};

    float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5];

    cout << "total = " << total << endl;

    float monthsArray2[6];
    monthsArray2[0] = 100;
    monthsArray2[1] = 200;
    monthsArray2[2] = 300;
    monthsArray2[3] = 0;
    monthsArray2[4] = 200;
    monthsArray2[5] = 250;

    float total2 = monthsArray2[0] + monthsArray2[1] + monthsArray2[2] + monthsArray2[3] + monthsArray2[4] + monthsArray2[5];

    cout << "total2 = " << total2 << endl;

    return 0;
}