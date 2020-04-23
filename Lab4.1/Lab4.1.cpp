#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <string.h>
using namespace std;
int main()
{
    int Words = 0;
    int WordA = 0;
    string text;
    setlocale(LC_ALL, "RUS");

    cout << " Введите текст: ";
    getline(cin, text);

    stringstream s(text);
    string temp;
   
    while (s >> temp)
    {
        ++Words;
        for (int i = 0; i < temp.size(); ++i)
        {
            if (temp[i] == 'a')
                WordA++;
        }

    }  
    cout <<"Кол-во A в предложениях: " << WordA << endl;
    return 0;
}