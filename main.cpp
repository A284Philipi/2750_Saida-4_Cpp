#include <iostream>

using namespace std;

int main()
{
    int cont = 0, cont2 = 0, cont3 = 0, cont4 = 1, cont5 = 10, cont6 = 12, cont8 = 0;
    char a = 65;
    while (cont < 39){
        cout << "-";
        cont++;
    }
    cout <<endl<< "|  decimal  |  octal  |  Hexadecimal  |" <<endl;
    while (cont2 < 39){
        cout << "-";
        cont2++;
    }
    cout <<endl;
    while (cont3 < 8){
        cout << "|      " << cont3 << "    |    " << cont3 << "    |       "  << cont3 << "       |" <<endl;
        cont3++;
    }
    cout << "|      " << 8 << "    |   " << 10 << "    |       "  << 8 << "       |" <<endl;
    cout << "|      " << 9 << "    |   " << 11 << "    |       "  << 9 << "       |" <<endl;
    while (cont4 <= 6){
        cout << "|     " << cont5 << "    |   " << cont6 << "    |       "  << a << "       |" <<endl;
        cont5++;
        cont6++;
        a++;
        cont4++;
    }
    while (cont8 < 39){
        cout << "-";
        cont8++;
    }
    cout <<endl;
    return 0;
}
