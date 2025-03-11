#include <iostream>
using namespace std;

void testCase(int number) {
    cout << "Testing with number: " << number << endl;
    if (number <= 0) {
        cerr << "Error: Invalid number!" << endl;
        exit(1); // Exit with failure
    }
    cout << "Valid number: " << number << endl;
}

int main() {
    testCase(5);   // ✅ Valid case
    testCase(-3);  // ❌ Invalid case
    testCase(0);   // ❌ Invalid case
    testCase(10);  // ✅ Valid case
    return 0;
}
