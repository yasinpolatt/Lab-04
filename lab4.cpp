#include <iostream>
#include <new>
using namespace std;

class Node {
public:
    int data;
    Node* next;
      Node(int data, Node* next = nullptr) { 
        this->data = data;
        this->next = next;
    }
};

class Stack {
private:
    Node* head;     // Points to top element of stack.
    int num;        // Number of elements (index-style tracking).
    int capacity;   // Fixed size limit (resized when full).

public:
    Stack(int initialCapacity) {  // You can set any initial size.
        head = nullptr;
        num = -1;
        capacity = initialCapacity;
    }
    void push(int x) {
        Node *newNode = new Node(x,nullptr);
        if(capacity - 1 == num){
            increaseCapacity();
        }
        
        if(isEmpty()){
            head = newNode;
            num++;
            return;
        }
        
        
        Node*temp = head;
        head = newNode;
        head->next = temp;
        num++;
        
    }

    int pop() {
        if(isEmpty()){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        
        Node*temp = head;
        head = head->next;
        num--;
        return temp->data;
    }
    int peek() {
        if(isEmpty()){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return num < 0;
    }

    void increaseCapacity() {
        capacity*=2;
    }

    bool deleteElement(int val) {
        
        if(isEmpty()){
            cout<<"Empty Stack"<<endl;
            return false;
        }
        
        Node*pre = head;
        Node*after = head->next;
        if(head->data == val){
            pop();
            return true;
            }
        
        while(pre->next != nullptr){
            
            if(after->data == val){
                pre->next = after->next;
                num--;
                return true;
            }
            
            pre = pre->next;
            after = pre->next;
            
        }
        return false;
    }
};

int main() {
    
    Stack stack(5);
    
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(0);
    
    
    stack.deleteElement(2);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
  
    
    

   
    
    Node*temp = stack.head;
    
    
    
    while(temp != nullptr) {
        cout << temp->data << endl;  
        temp = temp->next;  
    }
    
    
    
    
    
    cout<<"**************"<<endl;
    cout<<stack.capacity<<endl;
    cout<<stack.peek()<<endl;
    cout<<stack.isEmpty()<<endl;
    
    
    
    

    return 0;
}#include <iostream>
#include <new>
using namespace std;

class Node {
public:
    int data;
    Node* next;
      Node(int data, Node* next = nullptr) { 
        this->data = data;
        this->next = next;
    }
};

class Stack {
public:
    Node* head;     // Points to top element of stack.
    int num;        // Number of elements (index-style tracking).
    int capacity;   // Fixed size limit (resized when full).

public:
    Stack(int initialCapacity) {  // You can set any initial size.
        head = nullptr;
        num = -1;
        capacity = initialCapacity;
    }
    void push(int x) {
        Node *newNode = new Node(x,nullptr);
        if(capacity - 1 == num){
            increaseCapacity();
        }
        
        if(isEmpty()){
            head = newNode;
            num++;
            return;
        }
        
        
        Node*temp = head;
        head = newNode;
        head->next = temp;
        num++;
        
    }

    int pop() {
        if(isEmpty()){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        
        Node*temp = head;
        head = head->next;
        num--;
        return temp->data;
    }
    int peek() {
        if(isEmpty()){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return num < 0;
    }

    void increaseCapacity() {
        capacity*=2;
    }

    bool deleteElement(int val) {
        
        if(isEmpty()){
            cout<<"Empty Stack"<<endl;
            return false;
        }
        
        Node*pre = head;
        Node*after = head->next;
        if(head->data == val){
            pop();
            return true;
            }
        
        while(pre->next != nullptr){
            
            if(after->data == val){
                pre->next = after->next;
                num--;
                return true;
            }
            
            pre = pre->next;
            after = pre->next;
            
        }
        return false;
    }
};

int main() {
  

    return 0;
}
