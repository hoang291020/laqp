#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
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
   return 3;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

