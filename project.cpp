#include <iostream>
using namespace std;

int main()
{
    int wynik = 0;
    char odpowiedź1;
    char odpowiedź2;
    char odpowiedź3;

    cout << "*** Quiz z matematyki ***\n\n";

    // pytanie 1

    cout << "Pytanie 1. Ile to 2 + 2?\n";
    cout << "a) 3\nb) 4\nc) 5\n";

    cout << "Twoja odpowiedź: ";
    cin >> odpowiedź1;
    if (odpowiedź1 == 'b' || odpowiedź1 == 'B')
    {
        cout << "Dobrze!\n";
        wynik++;
    }
    else
    {
        cout << "źle!\n";
    }
    cout << "\n";

    // pytanie 2

    cout << "Pytanie 2. Która z tych liczb to liczba pierwsza?\n";
    cout << "a) 12\nb) 17\nc) 22\n";

    cout << "Twoja odpowiedź: ";
    cin >> odpowiedź2;
    if (odpowiedź2 == 'b' || odpowiedź2 == 'B')
    {
        cout << "Dobrze!\n";
        wynik++;
    }
    else
    {
        cout << "źle!\n";
    }
    cout << "\n";

    // pytanie 3

    cout << "Pytanie 3. Jaki jest pierwiastek z 81?\n";
    cout << "a) 9\nb) 8\nc) 10\n";

    cout << "Twoja odpowiedź: ";
    cin >> odpowiedź3;
    if (odpowiedź3 == 'a' || odpowiedź3 == 'A')
    {
        cout << "Dobrze!\n";
        wynik++;
    }
    else
    {
        cout << "źle!\n";
    }
    cout << "\n";

    // pytanie 4

    cout << "Pytanie 4. Ile to 45 - 37?\n";
    cout << "a) 18\nb) 9\nc) 8\n";

    cout << "Twoja odpowiedź: ";
    cin >> odpowiedź3;
    if (odpowiedź3 == 'c' || odpowiedź3 == 'C')
    {
        cout << "Dobrze!\n";
        wynik++;
    }
    else
    {
        cout << "źle!\n";
    }
    cout << "\n";

    // pytanie 5

    cout << "Pytanie 5. Ile to 5 do kwadratu?\n";
    cout << "a) 15\nb) 125\nc) 25\n";

    cout << "Twoja odpowiedź: ";
    cin >> odpowiedź3;
    if (odpowiedź3 == 'c' || odpowiedź3 == 'C')
    {
        cout << "Dobrze!\n";
        wynik++;
    }
    else
    {
        cout << "źle!\n";
    }
    cout << "\n";

        cout << "Twój wynik to: " << wynik << "/5 \n";

    return 0;
}