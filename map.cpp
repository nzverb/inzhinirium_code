#include <iostream>
#include <map>
using namespace std;

int main() {
    //Чтобы сделать наш мап, сначала нужно его проинициализировать , мап имееет вид {ключ, значение}
    map<int, string> mp = {
        {1, "Privet,"},
        {2, "eto"},
        {3, "primer"},
        {4, "samogo"},
        {5, "prostogo"},
        {6, "mapa"},
    };
    //Чтобы вывести мап нам нужен простейший итератор ( можно также вместо map<int, string>::iterator it = mp.begin() 
    // писать просто auto it = mp.begin()
    for (map<int, string>::iterator it = mp.begin(); it != mp.end(); it++) {
       //Тут мы используем cout , чтобы вывести наши значения без ключей благодаря методу ->second после итератора
        //Чтобы вывести именно ключи вместо метода ->second надо писать ->first
        cout << it->second << " "; // Чтобы вывод был красивее после метода секонд я разместил пробел как строку , т.е. " "
    }
    return(0);
}
