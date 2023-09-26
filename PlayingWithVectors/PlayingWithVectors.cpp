// PlayingWithVectors.cpp 

#include "Person.h"
void experiment01();
void experiment02();
void experiment03();
void showVector1(vector<Person>& v);
void showVector2(vector<Person*> v);

//-------------------------------------------
int main()
{
    //experiment01();
    experiment02();
}
//-------------------------------------------
void experiment01() {
    Person p1("Homer");
    Person p2("Bart");
    Person p3("Lisa");
    Person p4("Marge");

    vector<Person> v{ p1, p2, p3, p4 };
    showVector1(v);
    cout << "Bye- experiment01 over! \n";
}

void showVector1(vector<Person>& v) {
    cout << endl;
    for (Person p : v) {
        cout << p.toString() << endl;
    }
}

//-------------------------------------------
void experiment02() {
    Person* p1 = new Person("Homer");
    Person* p2 = new Person("Bart");
    Person* p3 = new Person("Lisa");
    Person* p4 = new Person("Marge");

    vector<Person*> v{ p1, p2, p3, p4 };
    showVector2(v);
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout << "Bye- experiment02 over! \n";

}

void showVector2(vector<Person*> v) {
    cout << endl;
    for (Person* p : v) {
        cout << p->toString() << endl;
    }
}