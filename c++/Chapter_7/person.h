#ifndef _PERSON_H
#define _PERSON_H
#include <string>
#include <iostream>

struct person {
    std::string name;
    std::string addr;
    std::string isName() const {return name;};
    std::string isAddr() const {return addr;};

    person() = default;
};

std::istream &read(std::istream &is, struct person &per);
std::ostream &print(std::ostream &os, const struct person &per);

#endif
