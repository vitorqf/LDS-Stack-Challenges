#include "stack.h"

using namespace std;

/************************************************************
 *                                                          *
 * É necessário que insira uma cadeira de parenteses valida *
 * para prosseguir para a proxima questao                   *
 *                                                          *
 * ***********************************************************/


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

    cout << "A string está válida." << endl;

    cout << endl;

    Stack odd_stack;
    Stack even_stack;

    cout << "Quantos elementos deseja inserir? ";

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int element;
        cout << "Insira o elemento " << i + 1 << ": ";
        cin >> element;

        if (element % 2 == 0) {
            even_stack.push(element);
        } else {
            odd_stack.push(element);
        }
    }

    cout << "Pilha de números pares: " << endl;
    even_stack.display();

    cout << endl;

    cout << "Pilha de números ímpares: " << endl;
    odd_stack.display();

    return 0;
}
