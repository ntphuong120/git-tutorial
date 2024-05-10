#include <iostream>

using namespace std;

void print(const string &msg, const float &res) {
    cout << msg << ": " << res << '\n';
}

float phepchia(const float &a, const float &b) {
    return a/b;
}

int main() {
    float a = 10, b = 4;

    print("Phep Chia", phepchia(a, b));

    cout << "The Phuong Dang Hoc Vat Ly";
}
