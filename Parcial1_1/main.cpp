#include <iostream>
#include <fstream>


using namespace std;

char courseArray[3][10] = {"aaa", "bbb", "ccc"};
int creditsArray[3] = {5, 4, 2};



int main()
{
    //char letra;
    //int n=1;
    //char array[n],code[n],name[n],credits[n],days[n],schedule[n];
    //cout<<code<<endl;


    return 0;
}

void createSchedule(){

    cout<<"creating schedule"<< endl;
}

void createCoursesAndCredits(){

    cout<<"creating courses and credits"<<endl;
}

void readSchedule()
{
    fstream fin;
    fin.open("schedule.csv", ios::in);

    char h[10], l[10], m[10], w[10], j[10], v[10], s[10];

    cout << "Your schedule is:\n"
         << endl;

    while (!fin.eof())
    {
        fin.getline(h, 10, ',');
        fin.getline(l, 10, ',');
        fin.getline(m, 10, ',');
        fin.getline(w, 10, ',');
        fin.getline(j, 10, ',');
        fin.getline(v, 10, ',');
        fin.getline(s, 10, '\n');

        cout << h << "\t" << l << "\t" << m << "\t" << w << "\t" << j << "\t" << v << "\t" << s << endl;
    }

    fin.close();
}
