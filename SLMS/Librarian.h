#ifndef LIBRARIAN_H_INCLUDED
#define LIBRARIAN_H_INCLUDED

using namespace std;

class Librarian: public Person
{
public:
    void addBook();
    void viewBook();
    void removeBook();
    void registerMember();
    void removeMember();
private:
};

#endif // LIBRARIAN_H_INCLUDED
