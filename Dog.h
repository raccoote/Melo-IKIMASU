#ifndef Dog_h
#define Dog_h
#include <iostream>
using namespace std;

class Dog
{
  private:
    char *name = new char[20];
    int age;
    char *breed = new char[20];
    int trainability;
    int affectionate;
    int playful;
    int relationship;
    int fat;

    char tricks[10][20]; //up to 10 tricks
  public:
    //constructors
    Dog();
    Dog(char*, int, char*, int, int, int, int, int);

    //getters
    char *getName() const;
    int getRelationship() const;
    void happyRelationship(int);
    //misc
    static void randomizeSeed();
    void woof();
    void pprint();
    void printPortrait(int);
};
//operators
ostream &operator<<(ostream &o, const Dog &e);

//other
char * toChar(int num);
void systemPause();



#endif
