#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    vector<string> words_v = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i =  a; i <= b; i++) {
        if (i <= 9) {
            cout << words_v[i-1] << endl;
        }
        else{
            cout << ((i%2 == 0) ? "even" : "odd") << endl;
        }
    }
    return 0;
}