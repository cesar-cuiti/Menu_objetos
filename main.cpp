#include <iostream>
#include <cstring>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

#include "funciones.h"
#include "clsArticulo.h"
#include "prototipos.h"
#include "funcionesArticulo.h"
#include "menuListados.h"

int main()
{
    const int tam=10;
    int opc, pos=0;
    Articulo vArt[tam];
    while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"--------------"<<endl;
        cout<<"1 - CARGAR ARTICULO"<<endl;
        cout<<"2 - LISTADOS"<<endl;
        cout<<"3 - MODIFICAR PRECIO UNITARIO"<<endl;
        cout<<"0 - SALIR DEL PROGRAMA"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                if(pos<tam){
                    if(cargarArticulo(vArt, pos)){
                        pos++;
                    }else{
                        cout<<"NO SE PUDO AGREGAR EL ARTICULO"<<endl;
                        system("pause>nul");
                    }
                }else{
                    cout<<"NO SE PUEDE AGREGAR MAS ARTICULOS"<<endl;
                    system("pause>nul");
                }
                break;
            case 2:
                menuListados(vArt, pos); ///pos en vez de tam para saber cuantos registros tenemos cargados.
                break;
            case 3:
                modificarPU(vArt, pos);
                break;
            case 0:
                return 0;
        }
    }
    return 0;
}
