#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    int r = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >>temp;
        r += temp;
    }

    if (r > 0)
    {
        cout << "HARD";
    }
    else cout << "EASY";

    return 0;
}
