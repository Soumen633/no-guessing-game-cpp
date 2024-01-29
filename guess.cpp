#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
    int guess_num;
    srand(time(0));
    int number = rand() % 100 + 1;

    cout << "******************Welcome*****************" << endl;

    while (guess_num != number)
    {
        cout << "Guess your number: ";
        cin >> guess_num;
        if (guess_num > number)
        {
            cout << "actual number is smaller!! TRY again...." << endl;
            continue;
            ;
        }
        else if (guess_num < number)
        {
            cout << "actual number is greater!! TRY again...." << endl;
            continue;
        }
        else
        {
            cout << "congra";
        }
    }

    return 0;
}