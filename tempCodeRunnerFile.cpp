#include <iostream>
using namespace std;
int main() {
    setlocale(0, "RUS");
    int a, b, result;
    cout << " a= ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    result = a + b;
    cout << "result = ";
    cout << result << endl;
    return 0;
}