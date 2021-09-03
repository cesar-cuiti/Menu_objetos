#ifndef FUNCIONESARTICULO_H_INCLUDED
#define FUNCIONESARTICULO_H_INCLUDED

bool cargarArticulo(Articulo *v, int pos){
    Articulo aux;
    aux.Cargar();
    if(buscarArticuloCodigo(v, pos, aux.getCodigo())>=0){
        cout<<"EL CODIGO INGRESADO YA EXISTE"<<endl;
        system("pause>nul");
        return false;
    }
    if(aux.getPrecio()<=0){
        cout<<"EL PRECIO DEBE SER MAYOR A CERO";
        system("pause>nul");
        return false;
    }
    v[pos]=aux;
    return true;
}

void cargarArticulos(Articulo *v, int tam){
    for(int i=0; i<tam; i++){
        system("cls");
        v[i].Cargar();
    }
}

void listarArticulos(Articulo *v, int tam){
    for(int i=0; i<tam; i++){
        system("cls");
        v[i].Mostrar();
        system("pause>nul");
    }
}

void listarARticulosMayorPrecio(Articulo *v, int tam){
    float p;
    cout<<"INGRESE UN PRECIO: ";
    cin>>p;
    for(int i=0;i<tam;i++){
        system("cls");
        if(v[i].getPrecio()>p){
            v[i].Mostrar();
            system("pause>nul");
        }
    }
}

int buscarArticuloCodigo(Articulo *v, int tam, const char *c){
    for(int i=0; i<tam; i++){
        if(strcmp(c, v[i].getCodigo())==0){
            return i;
        }
    }
    return -1;
}

int cantidadArticulosMayorStock(Articulo *v, int tam, int s){
    int cant=0;
    for(int i=0; i<tam; i++){
        if(v[i].getStock()>s) cant++;
    }
    return cant;
}

void incrementarPrecioPorcentaje(Articulo *v, int tam, float porc){
    for(int i=0; i<tam; i++){
        v[i].incrementarPrecio(porc);
    }
}

void modificarPU(Articulo *v, int tam){
    int pos;
    float pu;
    char cod[5];
    cout<<"INGRESE EL CODIGO DEL ARTICULO A MODIFICAR: ";
    cin>>cod;
    system("cls");
    pos=buscarArticuloCodigo(v, tam, cod);
    if(pos<0){
        cout<<"EL CODIGO INGRESADO NO EXISTE"<<endl;
        system("pause>nul");
        return;
    }
    cout<<"ESTE ES EL ARTICULO A MODIFICAR:"<<endl<<endl;
    v[pos].Mostrar();
    cout<<endl;
    cout<<"INGRESE EL NUEVO PRECIO UNITARIO: ";
    cin>>pu;
    v[pos].setPrecio(pu);
    system("cls");
    cout<<"EL PRECIO FUE ACTUALIZADO CORRECTAMENTE!!!"<<endl;
    system("pause>nul");
}

#endif // FUNCIONESARTICULO_H_INCLUDED
