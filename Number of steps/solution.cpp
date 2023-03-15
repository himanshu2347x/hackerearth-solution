#include <iostream>
using namespace std;
int main()
{
    int count = 0, n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int i = 0;
    while (i < n)

    {

        while (a[i] > min)

        {

            a[i] = a[i] - b[i];

            count++;
        }

        if (a[i] < min)

        {

            min = a[i];

            i = 0;
        }

        else

            if (a[i] < 0)

        {

            count = -1;

            break;
        }

        else

            i++;
    }

    cout << count << endl;
}