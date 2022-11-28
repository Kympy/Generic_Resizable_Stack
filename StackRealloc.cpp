#include <iostream>
#include "Stack.h"
using namespace std;
#define endl "\n"

void Print(Stack<int>* myStack, int* logCount);

int main(){
    int logCount = 1;
    Stack<int>* myStack = new Stack<int>;
    // Push 10 elements
    for(int i = 0; i < myStack->Size(); i++){
        myStack->Push(i + 1);
    }
    // Print result
    Print(myStack, &logCount);
    // Push new three elements over size
    for(int i = 1; i < 3; i++){
        myStack->Push(i + 10);
    }
    Print(myStack, &logCount);
    // Pop element
    cout << "Popped element : " << myStack->Pop() << endl;
    Print(myStack, &logCount);

    delete myStack;
}

void Print(Stack<int>* myStack, int* logCount){
    cout << "Try " << *logCount << endl;

    cout << "Size : " << myStack->Size() << endl;
    cout << "Count : " << myStack->Count() << endl;
    cout << "Top element : " << myStack->Peek() << endl;
    cout << "-----------------------" << endl;
    *logCount += 1;
}