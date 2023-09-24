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
    Node *next;
};

class Stack {
private:
    Node *top;

public:
    int count;
    Stack() {
        this->top = nullptr;
        this->count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void push(int element) {
        Node *new_node = new Node();
        new_node->next = nullptr;

        if (this->isEmpty()) {
            this->top = new_node;
        }

        new_node->next = top;
        this->top = new_node;

        this->count++;
    };

    void pop() {
        if (this->isEmpty()) {
            cout << "A pilha está vazia, impossível remover.";
            exit(EXIT_FAILURE);
        }

        Node *tmp;

        tmp = this->top;
        this->top = this->top->next;

        this->count--;
        delete(tmp);
    };
};



#endif //STACK_CHALLENGES_STACK_H
