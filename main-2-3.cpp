#include <iostream>
using namespace std;

extern int sum_if_palindrome(int intergers[], int length);
int main() {
    int length;
    std::cout << "Enter a number for length: ";
    std::cin >> length;
    int intergers[length];
    for (int i = 0; i < length; i++) {
        std::cout << "Enter a number: ";
        std::cin >> intergers[i];
    }
    std::cout << sum_if_palindrome(intergers, length) << endl;
    return 0;


}
