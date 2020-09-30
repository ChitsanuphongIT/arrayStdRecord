#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void head(), menu();


int main() { 

    int numCount, select;
    int *quiz = NULL;
    int *mid = NULL;
    int *fnal = NULL;

    head();

    do {

        if (select == 3) break;

        menu();
        cin >> select;

        switch(select) {
            case 1 :
                
                cout << "Input Number of Student : ";
                cin >> numCount;

                quiz = new int[numCount];
                mid = new int[numCount];
                fnal = new int[numCount];

                for (int i = 0; i < numCount; i++) {
                    cout << endl;
                    cout << "Number" << i+1 << endl;
                    cout << " Input Quiz : ";
                    cin >> quiz[i];
                    cout << " Input Midterm : ";
                    cin >> mid[i];
                    cout << " Input Final : ";
                    cin >> fnal[i];
                }
                
                break;

            case 2 :

                cout << setw(31) << setfill('-') << "" << endl;
                cout << "StdID" << setw(8) << setfill(' ') << "Quiz" << setw(10) << setfill(' ') << "Midterm" << setw(8) << setfill(' ') << "Final" << endl;
                cout << setw(31) << setfill('-') << "" << endl;
        
                for (int i = 0; i < numCount; i++) {
                    cout << i+1 << setw(8) << setfill(' ') << quiz[i] << setw(10) << setfill(' ') << mid[i] << setw(10) << setfill(' ') << fnal[i] << endl;
                }

                cout << setw(31) << setfill('-') << "" << endl;

                break;
        }
        cout << endl;

    } while(numCount != 3);
        
    cout << "Exit program." << endl;

    return 0;
}


void head() {
    cout << setw(30) << setfill('=') << "" << endl;
    cout << "" << setw(16) << setfill(' ') << "MENU" << setw(15) << setfill(' ') << "" << endl;
    cout << setw(30) << setfill('=') << "" << endl;
}


void menu() {
    cout << "1.Input student records" << endl;
    cout << "2.View all student recoreds" << endl;
    cout << "3.Exit" << endl;
    cout << "\tSelect menu : ";
}
