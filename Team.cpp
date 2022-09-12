#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, p1, p2, p3; //num problems % each team member val
    int s = 0; //num solutions

    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        scanf("%i %i %i", &p1, &p2, &p3);


        if ((p1 + p2 + p3) > 1)
        {
            s++;
        }
    }
    cout << s;

    return 0;
}
