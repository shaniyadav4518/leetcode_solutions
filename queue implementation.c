#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;
int count10 = 0; 

void push(int x) {
    if(top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }

    stack[++top] = x;

    if(x == 10)
        count10++;

    printf("%d pushed into stack\n", x);
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow!\n");
        return;
    }

    
    if(stack[top] == 10 && count10 < 5) {
        printf("10 ko tab tak POP nahi kar sakte jab tak 5 baar 10 na ho.\n");
        return;
    }

    int removed = stack[top--];

    if(removed == 10)
        count10--;

    printf("%d popped from stack\n", removed);
}

void display() {
    if(top == -1) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements: ");
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(10);
    push(30);
    push(10);
    push(40);
    push(10);
    push(50);
    push(10);

    display();

    pop(); 
    display();

    push(10); 
    display();

    pop(); 
    display();

    return 0;
}
