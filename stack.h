//
// Created by Vitor on 9/19/23.
//

#ifndef STACK_CHALLENGES_STACK_H
#define STACK_CHALLENGES_STACK_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class Stack {
private:
    Node *top;
    int count;

public:
    Stack() {
        top = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void push(int element) {
        Node *new_node = new Node();
        new_node->next = nullptr;
        new_node->data = element;

        if (isEmpty()) {
            top = new_node;
        } else {
           new_node->next = top;
            top = new_node;
        }

        count++;
    };

    void pop() {
        if (isEmpty()) {
            cout << "A pilha está vazia, impossível remover.";
            exit(1);
        } else {
            Node *temp;

            temp = this->top;
            top = this->top->next;
            count--;
            delete(temp);
        }
    };

    void display() {
        Node *temp = top;

        while (temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};



#endif //STACK_CHALLENGES_STACK_H
