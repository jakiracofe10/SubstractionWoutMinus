#include <iostream>

using namespace std;

//recursive
int add(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    int carry = (num1&num2) << 1;
    int diff = num1^num2;
    return add(diff,carry);
}

int findComplement(int n) {
    n = -n;
    return n;
}

int sub(int num1, int num2) {
    num2 = findComplement(num2);
    return add(num1, num2);
}

int main() {
    int a = 1;
    int b = 3;
    int result = sub(a, b);
    cout << result;
    return 0;
}
