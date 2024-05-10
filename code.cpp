#include <iostream>
#include <string>

using namespace std;

void print(const string &msg, const float &res) {
    cout << msg << ": " << res;
}

int phepCong(const int &a, const int &b) {
    return a + b;
}

int phepNhan(const int &a, const int &b) {
    return a * b;
}

int main() {
    int a = 2, b = 5;
    print("Phep Cong", phepCong(a, b));

    // Phep Nhan
    print("Phep Nhan", phepNhan(a, b));
}
