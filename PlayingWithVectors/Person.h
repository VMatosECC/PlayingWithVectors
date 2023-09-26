#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Person
{
private:
    string name;
public:
    void setName(string nameVal) {
        name = nameVal; //TODO use title-caps
    }

    string getName() { return name; }

    Person(string nameVal = "na") {
        setName(nameVal);
    }

    ~Person() {
        cout << "+++ Deleting Person " << getName() << endl;
    }

    string toString() {
        return " Person [Name: " + getName() + "]";
    }

};


