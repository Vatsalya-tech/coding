#include <iostream>
using namespace std;

int main()
{
    float first_number, second_number, Subtract;

    cout << "enter two operands:";

    cin >> first_number >> second_number;

    Subtract = first_number-second_number;

    cout << first_number << " - " << second_number << "=" << Subtract;
    return 0;

}
