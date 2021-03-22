#include <iostream>
using namespace std;

//Formula for xp "4.5 × level2 – 162.5 × level + 2220 (at levels 32+)"
int level;
int levelsquared;
int calculatedxp;

int main()
{
    cout << "Enter an XP level" << endl;
    cin >> level;
    levelsquared = level * level;
    calculatedxp = 4.5 * levelsquared - 162.5 * level + 2220;
    cout << calculatedxp << " xp is needed to get to level " << level << endl;
    system("pause");
}
