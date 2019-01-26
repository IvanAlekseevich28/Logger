#include <iostream>
#include "log.h"
using namespace std;

int main()
{
    cout << "" << endl;
    class log log1(log::file);
    log1 << "HI World!";
    class log lg2(log::file);
    lg2 << "Nice! \r Good";


    return 0;
}
