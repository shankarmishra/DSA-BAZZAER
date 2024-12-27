#include <iostream>

using namespace std;

    void countDigits(int  &num, int &count)
    {
    
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

int main()
{
    int count = 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    countDigits(num, count);
    cout << "Number of digits in the number: " << count;


    return 0;
}