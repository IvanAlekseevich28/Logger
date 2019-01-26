#ifndef LOG_H
#define LOG_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>

using namespace std;


class log
{
    static unsigned idCounter;
    unsigned id;
    string output_path;
public:
    enum output {none, console, file};
    log(output = none);
    string static num_to_string(unsigned);
    void operator <<(string);
private:
     output out;
};

#endif // LOG_H
