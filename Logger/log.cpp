#include "log.h"

unsigned log::idCounter = 0;

log::log(output mod_out)
{
    id = idCounter++;
    out = mod_out;
    if (out == file)
    {
        output_path = "C:\\Users\\Ivan\\Documents\\logs\\log";
        output_path += num_to_string(id);
        output_path += ".txt";
        cout << "Output path " << output_path << endl;
    }
}

void log::operator<<(string words)
{
    if (out == console)
    {
        cout << words;
    }
    if (out == file)
    {
        ofstream fout;
        fout.open(output_path/*, fstream::in*/);
        fout << words;
        fout.close();
    }
}

string log::num_to_string(unsigned num)
{
    //cout << "num_to_string" << endl;
    string str = "";
    for (int i = 7; i > -1; i--)
    {
        //cout << "i = " << i ;
        if (static_cast<bool>(num / pow(i,10)))
        {
            unsigned digit = num % static_cast<unsigned>(pow(10, i+1));
            digit /= static_cast<unsigned>(pow(10, i));
           // cout << "\tdigit = " << digit;
            char letter = static_cast<char>(digit) + 48;
            str += letter;
        }
        else
            str += "0";
       // cout << endl;
    }
   // cout << "str: " << str << endl;
    return str;
}
