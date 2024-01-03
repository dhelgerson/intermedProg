#include <iostream>
using namespace std;

void oddNumOut(int n){
    if (n < 1) cout << "Sorry, a number less than 1 is out of range.\n";
    else {
        cout << "The first n positive integers are: ";
        for (int i = 0;i < n;i++){
            cout << 2 * i + 1 << " ";
        }
        cout << endl;
    }
}

// int main(){
//     int n;
//     cin >> n;

//     oddNumOut(n);

//     return 0;
// }