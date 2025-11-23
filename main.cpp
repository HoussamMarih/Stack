#include <iostream>
#include "Stack.h"

int main()
{
    Stack<int> pileEntier(5);
    Stack<string> pileChaine(5);

    int x;
    for (int i = 0; i < 5; i++) {
        cout << "Entrer la valeur " << i + 1 << " : ";
        cin >> x;
        pileEntier.push(x);
    }
    pileEntier.afficher();
    cout << "Le sommet est : " << pileEntier.top() << endl;

    string s;
    for (int i = 0; i < 5; i++) {
        cout << "Entrer la valeur " << i + 1 << " : ";
        cin >> s;
        pileChaine.push(s);
    }
    pileChaine.afficher();
    cout << "Le sommet est : " << pileChaine.top() << endl;
}

