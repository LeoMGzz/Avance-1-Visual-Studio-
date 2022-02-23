#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Opcion;
    int Decision;
    int Numero_de_cita = 0;
    int Salida = 0;
    string Nombre_del_paciente;
    char Hora[100];
    string Nombre_del_tratamiento;
    string Descripcion;
    float Precio_unitario_del_tratamiento;
    float Cantidad_del_tratamiento;
    float Precio_unitario;
    float Total;

    do
    {
        cout << "-------MENU PRINCIPAL-------" << endl;
        cout << "Ingrese la opción deseada: " << endl;
        cout << "1. Agendar cita" << endl;
        cout << "2. Modificar cita" << endl;
        cout << "3. Eliminar cita" << endl;
        cout << "4. Lista de citas vigentes" << endl;
        cout << "5. Limpiar pantalla" << endl;
        cout << "6. Salir" << endl;
        cout << "----------------------------" << endl;
        cin >> Opcion;

        switch (Opcion)
        {
        case 1:
            do
            {
                Numero_de_cita = Numero_de_cita + 1;
                cout << "Ingrese nombre del paciente:" << endl; 
                cin.ignore();
                getline(cin, Nombre_del_paciente);
                cout << "Ingrese hora del tratamiento:" << endl; 
                cin >> Hora;
                cout << "Ingrese nombre del tratamiento:" << endl; 
                cin.ignore();
                getline(cin, Nombre_del_tratamiento);
                cout << "Ingrese descripción del tratamiento:" << endl; 
                cin.ignore();
                getline(cin, Descripcion);
                cout << "Ingrese precio unitario del tratamiento:" << endl;
                cin >> Precio_unitario_del_tratamiento;
                cout << "Ingrese la cantidad del tratamiento:" << endl;
                cin >> Cantidad_del_tratamiento;
                cout << "Ingrese el precio unitario:" << endl;
                cin >> Precio_unitario;
                Total = (Cantidad_del_tratamiento * Precio_unitario_del_tratamiento) + Precio_unitario;

                cout << "---------CITA---------" << endl;
                cout << "Numero de cita: " << Numero_de_cita << endl;
                cout << "Nombre: " << Nombre_del_paciente << endl;
                cout << "Hora: " << Hora << endl;
                cout << "Tratamiento: " << Nombre_del_tratamiento << endl;
                cout << "Descripcion: " << Descripcion << endl;
                cout << "Precio unitario del tratamiento: $" << Precio_unitario_del_tratamiento << endl;
                cout << "Cantidad del tratamiento: " << Cantidad_del_tratamiento << endl;
                cout << "Precio unitario: $" << Precio_unitario << endl;
                cout << "Total: $" << Total << endl;
                cout << "-----------------------" << endl;
                cout << "¿Desea agendar otra cita?" << endl;
                cout << "1.Si    2.No" << endl;
                cin >> Decision;
            } while (Decision == 1);

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            //system("cls"); ???? 
            break;
        case 6:
            cout << "Saliendo del programa..." << endl;
            Salida = Salida + 1;
            break;
        default:
            cout << "No se ingreso una opción valida." << endl;
            break;
        }
        if (Salida == 0)
        {
            cout << "¿Desea regresar al menu?" << endl;
            cout << "1.Si    2.No" << endl;
            cin >> Decision;
        }
        else
        {
            Decision = 2;
        }
    } while (Decision == 1);

    return 0;
}
