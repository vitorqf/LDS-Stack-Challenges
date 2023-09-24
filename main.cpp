#include "stack.h"

using namespace std;

int main() {
    Stack stack;

    string input;
    cout << "Insira a cadeia de parenteses: ";
    cin >> input;
    int placeholder = 1;

    for(char element : input) {
        if (element == '(') {
            stack.push(placeholder);
        } else {
            stack.pop();
        }
    }

    cout << "A string está válida. A pilha está vazia." << endl;

    return 0;
}
