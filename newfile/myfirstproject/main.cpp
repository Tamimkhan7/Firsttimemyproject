#include <iostream>
#include "myfirstproject.h"

using namespace std;

int main()
{
    myfirstproject obj;
    //obj.display();
    myfirstproject *p = &obj;
    p -> display();

    return 0;
}
