#include<iostream>
#include<vector>
using namespace std;
int valley(int n, vector<char>s){
    int dem = 0;
    int dem1 = 0;
    for(int i = 0;i < n;i++){
       if(s[i] == 'U'){
           dem1++;
       }
       if(s[i] == 'D'){
           dem1--;
       }
       if(dem1 < 0){
           if(s[i] == 'U' and s[i + 1] == 'D'){
               dem++;
           }
       }
    }
    return dem1;
}
int main()
{
    int n;
    cin >> n;
    vector<char> s;
    char a;
    for(int i = 0;i < n;i++){
        cin >> a;
        s.push_back(a);
    }
    cout << valley(n,s);
    return 0;
}
