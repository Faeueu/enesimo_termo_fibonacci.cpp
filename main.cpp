#include <iostream>
using namespace std;

int fibonacci(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        int a = 1, b = 1;
        for (int i = 2; i < num; ++i) {
            int temp = b;
            b = a + b;
            a = temp;
        }
        return b;
    }
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    int enesimoTermo = fibonacci(num);
    cout << "O " << num << " no termo da serie de Fibonacci e: " << enesimoTermo << endl;

    return 0;
}
