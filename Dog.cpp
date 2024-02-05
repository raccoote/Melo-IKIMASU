#include "Dog.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string.h>
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

Dog::Dog(char * name, int age, char * breed, int trainability, int affectionate, int playful, int relationship, int fat)
{
    strcpy(this->name, name);
    this->age = age;
    strcpy(this->breed, breed);
    this->trainability = trainability;
    this->affectionate = affectionate;
    this->playful = playful;
    this->relationship = relationship;
    this->fat = fat;
}

char *Dog::getName() const
{
    return name;
}

void Dog::woof()
{
    //cout << bark << endl;
}
int Dog::getRelationship() const
{
    return relationship;
}
void Dog::happyRelationship(int num)
{
    relationship += num;
}
void Dog::randomizeSeed()
{
    srand(time(NULL));
}
ostream &operator<<(ostream &o, const Dog &d)
{
    o<< d.getName();
    return o;
}

void Dog::printPortrait(int num)
{
    if(num!=0)
        systemPause();
    ifstream f("portrait.txt");
    string line;
    bool print = false;
    while(true)
    {
        getline(f, line);
        if(print == false && line == to_string(num))
        {
            print = true;
            continue;
        }
        if(line == to_string(num + 1))
            break;
        if(print)
        {
            cout << line << endl;
        }
    }
}
void systemPause()
{
    cout << "PRESS ANY BUTTON TO VIEW MEMORY" << endl;
    getch();
}
