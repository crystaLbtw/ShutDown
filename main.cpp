#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

int main() {
    time_t currentTime = time(0);
    stringstream command;
    int unit, time;
    string q;
    cout<<"Let's go shutdown PC !!!"<<endl<<endl;
    a1:
    cout << "Time unit:" << endl << "1)seconds" << endl << "2)minutes" << endl << "3)hours" << endl<<endl;
    cout << "Option:";
    cin >> unit;
    system("CLS");

        if (cin.fail() || (unit != 1 && unit != 2 && unit != 3)) {
        cout << "Error!!" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto a1;
    }

    switch (unit) {
        case 1:
            a2:
            cout << "Set time in seconds:";
            cin >> time;
            if (cin.fail() || time <= 0) {
        cout << "Error!!" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto a2;
    }
            command.str("");
            command << "shutdown /s /t " << time; // Seconds
            break;
        case 2:
            a3:
            cout << "Set time in minutes:";
            cin >> time;
            if (cin.fail() || time <= 0) {
        cout << "Error!!" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto a3;
    }
            command.str("");
            command << "shutdown /s /t " << time * 60; // Convert to minutes
            break;
        case 3:
            a4:
            cout << "Set time in hours:";
            cin >> time;
            if (cin.fail() || time <= 0) {
        cout << "Error!!" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto a4;
    }
            command.str("");
            command << "shutdown /s /t " << time * 3600; // Convert to hours
            break;
        default:
            return 0;
    }
    system(command.str().c_str());

    cout<<endl<<"Do you want cancel it!?"<<endl<<endl;
    a5:
    cout << "Yes/No:";
    cin >> q;
    if (cin.fail() || q != "Yes" && q != "yes" && q != "No" && q != "no" && q != "Y" && q != "y"&& q != "N" && q != "n") {
        cout << "Error!!" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto a5;
    }
    if (q == "Yes" || q =="yes"|| q =="Y"|| q =="y"){
        system("C:\\windows\\system32\\shutdown /a");
    }
    system("CLS");
    cout<<"Thanks for using this programs <3"<<endl<<"Powered by crystaL"<<endl;

    return 0;
}
