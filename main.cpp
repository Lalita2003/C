#include <iostream>

using namespace std; // if not std ??

class Animal {
private: 
    char* name;
public:
    // Constructor
    Animal() {
        cout << "Create animal" << endl;
    }
    
    // Destructor
    ~Animal() {
        cout << "Delete animal" << endl;
    }
    
    // Method sound
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Constructor
    Dog() {
        cout << "Dog" << endl;
    }
    
    // Destructor
    ~Dog(){
        cout << "Delete dog" << endl;
    }
    
    // Override method sound
    void sound() override {
        cout << "Dogs barks" << endl;
    }
};

class Cat : public Animal {
public:
    // Constructor
    Cat() {
        cout << "Cat" << endl;
    }
    
    // Destructor
    ~Cat() {
        cout << "Delete cat" << endl;
    }
    
    // Override method sound
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal a;
    Dog d;
    Cat c;

    a.sound();
    d.sound();
    c.sound();

    return 0;
}
 