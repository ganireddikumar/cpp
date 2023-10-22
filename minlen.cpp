#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
void minLengthWord(char input[], char output[])
{
    int min = INT_MAX;
    int count = 0;
    int start = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ')
        {
            count++;
        }
        else
        {
            if (min > count)
            {
                min = count;
                start = i - count;
            }
            count = 0;
        }
    }
    if (min > count)
    {
        start = strlen(input) - count;
    }
    for (int i = start, j = 0; i < start + min; i++, j++)
    {
        output[j] = input[i];
    }
    output[min] = '\0';
}
int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}
