#include <iostream>

using namespace std;

class baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "Base class variable Var_base " << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "Base class variable Var_base " << var_base << endl;
        cout << "Base class variable Var_derived " << var_derived << endl;
    }
};

int main()
{
    baseclass *base_class_ptr;
    derivedclass obj_derived;
    base_class_ptr = &obj_derived; // Pointing class pointer to derived class
    base_class_ptr->var_base = 34;
    // base_class_ptr->var_derived=34; // Will throw error
    base_class_ptr->display();

    derivedclass *derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr->var_derived = 456;
    derived_class_ptr->display();

    return 0;
}