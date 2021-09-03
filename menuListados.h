#ifndef MENULISTADOS_H_INCLUDED
#define MENULISTADOS_H_INCLUDED

void menuListados(Articulo *v, int tam){
    int opc, s, pos;
    char cod[5];
    while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"--------------"<<endl;
        cout<<"1 - LISTAR TODOS LOS ARTICULOS"<<endl;
        cout<<"2 - LISTAR ARTICULO POR CODIGO"<<endl;
        cout<<"3 - LISTAR ARTICULOS CON MAYOR PRECIO"<<endl;
        cout<<"4 - CANTIDAD DE ARTICULOS CON MAYOR STOCK"<<endl;
        cout<<"0 - VOLVER AL MENU PRINCIPAL"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                listarArticulos(v, tam);
                break;
            case 2:
                cout<<"INGRESE EL CODIGO: ";
                cargarCadena(cod,4);
                system("cls");
                pos=buscarArticuloCodigo(v, tam, cod);
                if(pos>=0){
                    cout<<"ARTICULO DEL CODIGO INGRESADO: "<<endl;
                    v[pos].Mostrar();
                }else{
                    cout<<"NO EXISTE ESE CODIGO.";
                }
                system("pause>nul");
                break;
            case 3:
                listarARticulosMayorPrecio(v, tam);
                break;
            case 4:
                cout<<"INGRESE UN VALOR DE STOCK: ";
                cin>>s;
                cout<<"HAY "<<cantidadArticulosMayorStock(v, tam, s)<<" PRODUCTOS CON MAYOR STOCK AL INGRESADO.";
                system("pause>nul");
                break;
            case 0:
                return;
        }
    }
}

#endif // MENULISTADOS_H_INCLUDED
