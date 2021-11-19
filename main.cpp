//Дано число n, не превосходящее 10, и массив размером n × n. 
//Проверьте, является ли этот массив симметричным относительно главной диагонали. 
//Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool temp = true;
    for (int i = 0; i < n; i++) {
        {
            for (int j = 0; j < n; j ++){
                if (a[i][j] == a[j][i]){temp=true;}
                else{temp = false;
                    break;}

            }
        }
    }
    if (temp){
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
