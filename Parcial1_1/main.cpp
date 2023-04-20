#include <iostream>
#include <fstream>


using namespace std;

char courseArray[3][10] = {"aaa", "bbb", "ccc"};
int creditsArray[3] = {5, 4, 2};



void createSchedule(){

    cout<<"Creando Programa"<< endl;
}

void createCoursesAndCredits(){

    cout<<"Creando Materias y Creditos"<<endl;
}

void readSchedule()
{
    fstream fin;
    fin.open("schedule.csv", ios::in);

    char h[10], l[10], m[10], w[10], j[10], v[10], s[10];

    cout << "Su programa es:\n"
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

void readCourseAndCredits()
{
    cout << "Sus materias y creditos son:\n"
         << endl;

    cout << "materia"
         << "\t"
         << "creditos" << endl;

    int arraySize = sizeof(creditsArray) / sizeof(int);
    ;

    for (int i = 0; i < arraySize; i++)
    {
        cout << courseArray[i] << "\t" << creditsArray[i] << endl;
    }
}

void createSummary()
{
    int arraySize = sizeof(creditsArray) / sizeof(int);
    int hoursPerWeek;

    fstream fout;
    fout.open("summary.csv", ios::out | ios::trunc);

    cout << "Summary:\n"
         << endl;

    for (int i = 0; i < arraySize; i++)
    {
        if (creditsArray[i] == 5)
        {
            hoursPerWeek = ((5 * 48) - (7 * 16)) / 16;
        }
        else if (creditsArray[i] == 4)
        {
            hoursPerWeek = ((4 * 48) - (4 * 16)) / 16;
        }
        else if (creditsArray[i] == 2)
        {
            hoursPerWeek = ((2 * 48) - (2 * 16)) / 16;
        }
        else if (creditsArray[i] == 0)
        {
            hoursPerWeek = ((4 * 48) - (4 * 16)) / 16;
        }
        else
        {
            hoursPerWeek = 0;
        }

        cout << "Para " << courseArray[i] << " ud necesita " << hoursPerWeek << " horas por semana" << endl;
        fout << "Para " << courseArray[i] << " ud necesita " << hoursPerWeek << " horas por semana"
             << "\n";
    }
}

int main()
{
    //char letra;
    //int n=1;
    //char array[n],code[n],name[n],credits[n],days[n],schedule[n];
    //cout<<code<<endl;

        int option;

        do {
            cout << "Registro de programa" << endl;
            cout << "1. Crear Programa" << endl;
            cout << "2. Crear materias y creditos" << endl;
            cout << "3. Registrar HTD" << endl;
            cout << "4. Registrar HTP" << endl;
            cout << "5. Mostrar horario" << endl;
            cout << "6. Mostrar materias y creditos" << endl;
            cout << "7. Crear y mostrar datos" << endl;
            cout << "0. Salir" << endl;

            cin >> option;

            switch(option) {
                case 1:
                    createSchedule();
                    break;
                case 2:
                    createCoursesAndCredits();
                    break;
                case 5:
                    readSchedule();
                    break;
                case 6:
                    readCourseAndCredits();
                    break;
                case 7:
                    createSummary();
                    break;
                case 0:
                    cout << "Salir" << endl;
                    break;
                default:
                    cout << "Opción invalida." << endl;
            }
        } while (option != 0);





    cout << "**************************************************" << endl;
    createSchedule();
    cout << "**************************************************" << endl;
    createCoursesAndCredits();
    cout << "**************************************************" << endl;
    readSchedule();
    cout << "**************************************************" << endl;
    readCourseAndCredits();
    cout << "**************************************************" << endl;
    createSummary();
    cout << "**************************************************" << endl;

    return 0;
}
