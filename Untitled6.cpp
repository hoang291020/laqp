#include<iostream>
using namespace std;
int main()
{
 int m = 10;
 int& nref = m;
 cout << &m << endl;
 cout << &nref << endl;
 cout << nref << endl;


 return 0;
}
