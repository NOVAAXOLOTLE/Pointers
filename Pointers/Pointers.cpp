// Clase de punteros. Samuel Antonio Dominguez Meza 2O

#include <iostream>
#include <stdlib.h>
#include <memory>

using namespace std;

//class Person {
//private:
//    string name;
//    int age;
//public:
//    Person(string, int);
//    ~Person();
//};
//
//Person::Person(string _name, int _age) {
//    name = _name;
//    age = _age;
//    cout << "Inscribiendo al alumno " << name << endl;
//}
//
//Person::~Person() {
//    cout << "Destruyendo al alumno " << name << endl;
//}

class SmartPointer {
private:
    int* Ptr;
public:
    SmartPointer(int* _ptr = NULL) { Ptr = _ptr; };
    ~SmartPointer() { delete(Ptr); cout << "Eliminando punteros..." };
    // No compila bien, aunque investigando un poco, habla
    // Sobre una palabra clave "operator" pero no estoy
    // Seguro de como implementarlo ._.
};


int main()
{
    SmartPointer Ptr1(new int());
    *Ptr1 = 18;
    cout << *Ptr1 << endl;

    /*Person* alumno = new Person("Samuel Dominguez", 18);

    delete(alumno);*/

    system("pause");
}
