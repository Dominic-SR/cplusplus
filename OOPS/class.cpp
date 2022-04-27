#include <iostream>
using namespace std;

class Program{
    public:

    string name;

    void myFunction(){
        cout<<"Hello "<<name;
    }

    int main(){
        Program obj;
        obj.name="Dominic";
        obj.myFunction();
        return 0;
    }
};