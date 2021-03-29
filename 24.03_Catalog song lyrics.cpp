// 24.03_Catalog song lyrics.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string.h>
#include<string>
#include<Windows.h>
#include <fstream>
using namespace std;
struct catalog_song        //создание структуры Каталога
{
    string name_song;
    string author_song;
    string text_song;
    int year_song;
};
catalog_song* Catalog;     // объявляю указатель на массив для Каталога
void create_catalog(catalog_song A[]) {
    int a, y;  // а - первоначальное количество песен в каталоге; y -  переменная для окончания ввода
    string x;   // х - переменная для ввода информации  
    cout << " How many songs do you want to add to the catalog ?  Enter nomber \n";
    cin >> a;
    ofstream in("Catalog.txt", ios::app);
    catalog_song* temp= new catalog_song [a];  // создаем массив с нужным количеством элементов
    for (int i = 0;i < a;i++) {
        
        {
            do {
                cout << "Enter NAME Song. At the end, put the symbol '>'. For END Enter 'q'.";
                getline(cin, x);
                in << x;
                y = getchar();
            } while (y != 113);

            ///* cout << endl;
            // cout << "Enter AUTHOR Song. For END Enter '>'. ";
            // cin >> A[i].author_song;
            // cout << endl;
            // cout << "Enter  YEAR of Song Writing : ";
            // cin >> A[i].year_song;    

        }
    }
}
    
    


int main()
{
    
    ofstream in("Catalog.txt", ios::app); // поток для записи
    if (in.is_open()) {
        int z = 0;
        do {
            cout << "Menu for working with the catalog:  \n";
            cout << " '0' - Create Catalog of Songs;  \n";
            cout << " '1' - Add Song lyrics;  \n";
            cout << " '2' - Delete Song lyrics;  \n";
            cout << " '3' - Edit Song lyrics;  \n";
            cout << " '4' - Show Song lyrics;  \n";
            cout << " '5' - Save Song Lyrics for File;  \n";
            cout << " '6' - Search for all songs by the author;  \n";
            cout << " '6' - Search for all songs by word;  \n";
            cout << " 'q' - EXIT the Catalog;  \n";
            z = getchar();
            if (z == 48) {
                 create_catalog(Catalog);
            }
        } while (z != 113);
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
