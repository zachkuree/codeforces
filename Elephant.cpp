#include <iostream>
using namespace std;

int main()
{
    int house;
    int steps = 1;

    cin >> house;

    if (house < 6)
    {
        cout << steps;
    }
    else
    {
        if (house % 5 == 0)
        {
            steps += (house / 5) - 1;
        }
        else
        {
            steps += (house / 5);
        }
        cout << steps;
    }

    return 0;
}
