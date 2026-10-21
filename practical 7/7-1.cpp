#include <iostream>
using namespace std;

class Queue {
    int *q;
    int n;
    int front, rear;

public:
    Queue(int size) {
        n = size;
        q = new int[n];
        front = 0;
        rear = 0;
    }

    void join(int token) {
        if ((rear + 1) % n == front) {
            cout << "Error: Queue is FULL\n";
            return;
        }

        q[rear] = token;
        rear = (rear + 1) % n;

        printFront();
    }
}