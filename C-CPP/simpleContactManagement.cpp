/*
COPYRIGHT
    AUTHOR: Henrique Cardoso de Santana
    BACHELOR'S DEGREE IN COMPUTER SCIENCE
    2022 @ ALL RIGHTS RESERVED

⠄⠠⢀⠐⡀⢐⠐⠐⠄⠂⠐⠄⠂⠐⠄⠐⠄⠂⠐⠈⠠⠑⠨⠢⡊⠔⡐⠄
⠄⠂⠠⠐⠄⠄⡀⠄⠂⠄⠄⠄⠄⠄⠄⠄⠂⠄⠄⠄⢀⠄⡀⠄⠈⠨⠠⡁
⠄⠈⠄⠄⡀⢂⠠⠐⢀⠂⠠⠈⠄⠂⠄⠄⠄⠄⠄⠈⠄⠠⠄⠂⡀⠄⠈⠐
⠄⠄⠄⡂⡐⠠⡂⠅⡂⠌⡐⠈⠄⠨⢀⠂⡁⠌⠠⡁⡂⠅⠌⠄⢂⠠⠄⠄
⠄⠄⢂⠢⢨⣶⡾⢷⣦⡅⡂⠅⡡⢁⠂⡂⡂⢅⢑⣴⣾⠾⣮⣌⢐⠠⠄⠄
⠄⠄⢂⢊⢿⡏⠡⠂⢽⡗⢌⢂⠢⡁⠪⡐⠄⢕⢸⣿⠑⠡⢸⡿⢐⠨⠄⠄
⠄⠄⠅⡢⡙⠿⣾⢼⠟⡕⡑⢔⠡⡊⢌⠢⡑⡑⡌⡻⢷⢷⠟⢍⠢⡁⠂⠄
⠄⠄⠌⡂⡪⡑⡆⣇⣣⣱⣸⣰⣱⣜⣬⣪⣬⣦⣣⣎⣖⣔⣕⢅⢕⠨⠄⠄
⠄⠄⡑⣬⣺⡾⣿⣿⣻⣯⣿⣟⣿⣽⣿⣻⣿⣾⢿⣻⣿⣻⣯⣿⣲⢅⠄⠄
⠄⠄⢪⢗⣯⡏⠙⣯⣿⣯⣷⣿⣿⣽⣾⣿⢷⣿⡿⣿⣻⠝⢓⡷⡯⡣⠄⠁
⠄⠄⠈⢝⢞⡿⣦⡀⠙⠯⢿⢷⣿⣽⢿⣾⢿⡯⡟⠏⢁⢤⡿⡝⡕⠁⠄⡀
⠄⠄⠄⠄⠑⠝⣗⣟⡷⣤⣀⣁⠈⠈⠉⠊⣁⡠⣤⢶⣻⢽⠱⠑⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠐⠸⠹⠽⡽⣽⣻⣻⣟⣟⣷⣻⢽⢫⠣⠃⠄⠄⠄⠄⠄⠁
⠄⠄⠄⠄⠄⠄⠄⠄⠈⠁⠣⢣⢓⢗⢳⢹⢸⠸⠈⡀⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄I CAN SEE YOU⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/



#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

/* Oh yeah, I remember this one quite fondly. It was when I learned how to better use functions. The Hotel Management has a lot of raw instructions. Maybe I'll try to redo that one using functions later.*/

//Global variables for names and phone numbers.
string fname, lname, phoneNum;

// Mad functionsssssss
void addContact();
void searchContact();
void help();
void selfExit();
bool checkDigits(string);
bool checkNumbers(string);

int main()
{

    short int choice;
    system("cls");
    system("color 0A"); //Using colors :D
    
    menu:
    cout << "\n\n\n\t\t\tContact Management.";
    cout << "\n\n\t1. Add Contact\n\t2. Search Contact\n\t3. Help\n\t4. Exit\n\t> ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            addContact();
            goto menu;
        case 2:
            searchContact();
            goto menu;
        case 3:
            help();
            goto menu;
        case 4:
            selfExit();
            break;
        default:
            cout << "\n\n\tInvalid Input !";
            cout << "\n\tPress Any Key To Continue..";
            getch();
            main();
    }
    return 0;
}

void selfExit()
{
    system("cls");
    cout << "\n\n\n\t\tThank You For Using !";
    exit(1);
}

void help()
{
    cout << "Do you really?"; 
}

void addContact()
{
    ofstream phone("number.txt", ios::app); //Create a .txt file and add data on it.
    system("cls");
    cout << "\n\n\tEnter First Name : ";
    cin >> fname;
    cout << "\n\tEnter Last Name : ";
    cin >> lname;
    cout << "\n\tEnter 10-Digit Phone Number : ";
    cin >> phoneNum;

    if(checkDigits(phoneNum) == true)
    {
        if(checkNumbers(phoneNum) == true)
        {
            if(phone.is_open())
            {
                phone << fname << " " << lname << " " << phoneNum << endl;
                cout << "\n\tContact Saved Successfully !";
            }
            else
            {
                cout << "\n\tError! Cannot open file!";
            }
        }
        else
        {
            cout << "\n\tA PHONE NUMBER MUST CONTAIN NUMBERS ONLY !";
        }
    }
    else
    {
        cout << "\n\tA PHONE NUMBER MUST CONTAIN 11 DIGITS."; //I will address this later.
    }
    phone.close();
}

void searchContact()
{
    bool found = false;
    ifstream myfile("number.txt"); //Search data in the forementioned file.
    string keyword;
    cout << "\n\tEnter Name To Search : ";
    cin >> keyword;
    while(myfile >> fname >> lname >> phoneNum)
    {
        if(keyword == fname || keyword == lname)
        {
            system("cls");
            cout << "\n\n\n\t\tContact details..";
            cout << "\n\n\tFirst Name : " << fname;
            cout << "\n\tLast Name : " << lname;
            cout << "\n\tPhone Number : " << phoneNum;
            found = true;
            break;
        }
    }
    if(found == false)
    cout << "\n\tNo Such Contact Found";
}

bool checkDigits(string x)
{
    if(x.length() == 11) //So, telephone numbers in Brazil have 11 digits: 2 for your Long-distance Direct Dial code, a special number 9, and your actual 8-digits number.
    return true;
    else
    return false;
}

bool checkNumbers(string x)
{
    bool check = true;

    for(int i=0; i < x.length(); i++)
    {
        if(!(int(x[i]) >= 48 && int(x[i]) <= 57))
        {
            check = false;
            break;
        }
    }

    if(check == true)
    return true;
    if(check == false)
    return false;
}

