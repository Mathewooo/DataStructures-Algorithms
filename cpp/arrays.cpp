#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int arr[5] = {12, 24, 48, 96};
    cout << sizeof arr << endl;
    cout << arr[0] << endl;
    printf("%d\n", arr[1]);

    cout << "Displaying values of an array:" << endl;

    for (int i = 0; i < sizeof arr / sizeof *arr; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}