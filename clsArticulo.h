#ifndef CLSARTICULO_H_INCLUDED
#define CLSARTICULO_H_INCLUDED

class Articulo{
    private:
        char codigo[5];
        char descripcion[30];
        float precio;
        int stock;
        bool estado;
    public:
        Articulo(float pu =0, const char *cod="NADA", const char *des="VACIO", int s=0){
            strcpy(codigo,cod);
            strcpy(descripcion,des);
            precio=pu;
            stock=0;
            estado=true;
        }
        Articulo(const char *des){strcpy(descripcion,des);}
        void setCodigo(const char *cod){strcpy(codigo,cod);}
        void setDescripcion(const char *des){strcpy(descripcion,des);}
        void setPrecio(float pu){precio=pu;}
        void setStock(int s){stock=s;}
        void setEstado(bool e){estado=e;}
        const char *getCodigo(){return codigo;}
        const char *getDescripcion(){return descripcion;}
        float getPrecio(){return precio;}
        int getStock(){return stock;}
        bool getEstado(){return estado;}
        void incrementarPrecio(float porc);
        void Cargar();
        void Mostrar();
};

void Articulo::incrementarPrecio(float porc){
    precio+=precio*porc/100;
}

void Articulo::Cargar(){
    cout<<"INGRESE LOS DATOS DEL ARTICULO:"<<endl;
    cout<<"CODIGO: ";
    cargarCadena(codigo,4);
    cout<<"DESCRIPCION: ";
    cargarCadena(descripcion, 29);
    cout<<"PRECIO: ";
    cin>>precio;
    cout<<"STOCK: ";
    cin>>stock;
    estado=true;
}

void Articulo::Mostrar(){
    cout<<"CODIGO: "<<codigo<<endl;
    cout<<"DESCRIPCION: "<<descripcion<<endl;
    cout<<"PRECIO: "<<precio<<endl;
    cout<<"STOCK: "<<stock<<endl;
}

#endif // CLSARTICULO_H_INCLUDED
