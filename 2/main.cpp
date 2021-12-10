#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    pattern(4);
}

/*
    Output:
    0 0 0 0 
    1 1 1 1
    2 2 2 2
    3 3 3 3
*/