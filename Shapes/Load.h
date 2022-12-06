#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>

int setColor(string c)
{
    int red, green, blue;
    int start, end;
    start = find('(', c) + 1;
    end = find(',', c);
    red = stoi(getString(start, end, c));
    start = end + 1;
    end = find(',', c, 1);
    green = stoi(getString(start, end, c));
    start = end + 1;
    end = find(')', c);
    blue = stoi(getString(start, end, c));
}

int find(char f, string sentence, int num = 0)
{ // Will return number corresonding to the wanted charcter
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == f && num == 0)
        {
            return i;
        }
        else if (sentence[i] == f)
        {
            num--;
        }
    }
    return 0;
}

string getString(int s, int e, string sentence)
{
    string thing;
    for (int i = s; i <= e; i++)
    {
        thing += sentence[i];
    }
    return thing; // Will return wanted string
}