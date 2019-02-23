#include <iostream>
#include <set>
#include <fstream>
using namespace std;
int main()
{
    int a;
    set<int> mySet;
    ifstream file;
    file.open("D:\\Studying\\UrFU\\Semestr  (6)\\OS\\lab_0\\cpp\\lab_0.txt", ios::in);
    if (file)
    {
    while(!file.eof())
    {
        file >> a;
        mySet.insert(a);
        cout <<"Packets " << *(mySet.begin()) << "-" << *(mySet.end())-1 << ", there aren't packets: ";
        for (int j = *(mySet.begin()); j!=*(mySet.rbegin()); ++j)
             if (mySet.find(j) == mySet.end())
                 cout <<" " << j;
        cout << endl;
    }
    file.close();
    }
    else cout << "File don't exist "<< endl;
    return 0;
}

