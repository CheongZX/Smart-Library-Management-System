#ifndef GUEST_H_INCLUDED
#define GUEST_H_INCLUDED

using namespace std;

class Guest: public Person
{
public:
    void viewBook();
    void search();
    void redo();
private:
};

#endif // GUEST_H_INCLUDED
