#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of IDs: ";
    int n;
    cin >> n;

    int array[n];

    cout << "Enter IDs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                cout << "Repeated ID: " << array[i] << endl;
                break;
            }
        }
    }

    return 0;
}