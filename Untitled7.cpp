#include<iostream>
using namespace std;
int main()
{
    int m = 100;
    int *g = &m;
    cout << *(g + 1);
    return 0;
}
