#include <bits/stdc++.h>

using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 10;
    strcpy(dhoni->country, "India");
    Cricketer *kohli = new Cricketer;
    // kohli = dhoni;

    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    delete dhoni;
    cout << kohli->country << " " << kohli->jersey_no;

    return 0;
}