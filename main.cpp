#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter User Input Number : ";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum of first "<<num<<"numbers is ": " << sum;

    return 0;
}
