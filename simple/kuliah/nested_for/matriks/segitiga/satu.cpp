#include <iostream>
using namespace std;

int main() {
    int i;
    int j;

    for (i = 0; i < 10; i++) {
        for (j = i; j < 10; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}