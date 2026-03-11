#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int day = 1;
    cin >> a >> b >> c >> d;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(true){
        if(a==c&&b==d) break;
        day++;
        b++;
        if(b > month[a]){
            a++;
            b = 1;
        }
    }
    cout << day;
    // Please write your code here.
    return 0;
}