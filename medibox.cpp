#include <bits/stdc++.h>;
using namespace std;
map<string, int> mp;

void add_medicine()
{
    string s;
    int y;
    cout << "Medicine Name: ";
    cin >> s;

    cout << "Number of Tablets/pieces to be added: ";
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        mp[s]++;
    }
}

void delete_medicine()
{
    string s;
    int y;
    cout << " Medicine Name: ";
    cin >> s;

    cout << " Number of tablets/pieces to be deleted: ";
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        mp[s]--;
    }
}

void check_medicine()
{
    string s;
    int y;
    cout << "Medicine Name: ";
    cin >> s;
    cout << "No. of tablets/pieces: ";
    cin >> y;

    if (mp.find(s) != mp.end() && mp[s] >= y)
    {
        cout << "Yes Medicine is Availbale" << endl;
    }
    else
    {
        cout << "Only"
             << " " << mp[s] << " "
             << "available" << endl;
    }
}

signed main()
{

    cout << "MedicineList" << endl
         << endl
         << endl;

    int choice;
    cout << "1.Add Medicine" << endl;
    cout << "2.Delete Medicine" << endl;
    cout << "3.Check Availability of Medicine" << endl;
    cout << "4.Exit" << endl
         << endl
         << endl
         << endl;
p:
    cout << "Enter you choice: ";
    cin >> choice;
    if (choice == 1)
    {
        char x;
        do
        {
            add_medicine();
            cout << "Do wou want to add more medicine (y/n): ";
            cin >> x;
        } while (x == 'y');
        goto p;
    }
    else if (choice == 2)
    {
        char x;
        do
        {
            delete_medicine();
            cout << "Do wou want to delete more medicines (y/n): ";
            cin >> x;
        } while (x == 'y');
        goto p;
    }
    else if (choice == 3)
    {
        char x;
        do
        {
            check_medicine();
            cout << "Do wou want to check for more medicines (y/n): ";
            cin >> x;
        } while (x == 'y');
        goto p;
    }
    else if (choice == 4)
    {
        cout << "You are exited from the dashboard" << endl;
    }
}