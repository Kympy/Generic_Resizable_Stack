#include <iostream>
using namespace std;

template <class T>
class Stack {
private :
    T* stack;
    // Currnet top element index
    int top;
    // Stack size
    int size;
    void Created(){
        cout << "\n\n**Stack Created**\n\n";
    }
    void Deleted(){
        cout <<"\n\n**Stack Deleted**\n\n";
    }
public :
    Stack(){
        top = 0;
        size = 10;
        stack = new T[size];
        Created();
    }
    Stack(int size){
        top = 0;
        this->size = size;
        stack = new T[size];
        Created();
    }
    ~Stack(){
        delete[] stack;
        Deleted();
    }
    void Push(T data){
        CheckSize();
        stack[top] = data;
        top++;
    }
    T Pop(){
        //T temp = stack[top - 1];
        //stack[top - 1] = 0;
        //top--;
        //return temp;
        return stack[top-- - 1];
    }
    T Peek(){
        return stack[top - 1];
    }
    void CheckSize(){
        if(this->size == this->Count()){
            size = size * 2;
            T* temp = new T[size];
            for(int i = 0; i < this->size; i++){
                temp[i] = stack[i];
            }
            delete[] stack;
            stack = temp;
        }
    }
    int Count(){
        return top;
    }
    int Size(){
        return size;
    }
};
