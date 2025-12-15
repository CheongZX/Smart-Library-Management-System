#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

using namespace std;

class Person
{
public:
    Person(string,int,string);
protected:
    string name;
    int ID;
    string email;
};

#endif // PERSON_H_INCLUDED
