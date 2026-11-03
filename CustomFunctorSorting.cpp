#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
class HealthSorter
{
public:
    bool operator()(int a, int b)
    {
        if (a < b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int enemyHealth[] = {85, 10, 100, 40, 20, 65};

    sort(enemyHealth, enemyHealth + 6, HealthSorter());
    for (int i = 0; i < 6; i++)
    {
        cout << enemyHealth[i] << "     ";
    }

    cout << endl;

    sort(enemyHealth, enemyHealth + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << enemyHealth[i] << "     ";
    }
    return 0;
}