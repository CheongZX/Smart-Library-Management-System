#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

using namespace std;

class Member: public Person
{
public:
    void borrow();
    void returnBook();
    void viewBorrow();
    void search();
private:
};

#endif // MEMBER_H_INCLUDED
