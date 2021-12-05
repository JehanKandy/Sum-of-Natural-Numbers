#include <iostream>

using namespace std;

int num, sum = 0;


int main()
{
    cout << "Enter User Input Number : ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum of all Numbers that user input : " << sum;

    return 0;
}
