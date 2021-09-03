#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

bool cargarArticulo(Articulo *, int, int);
void cargarCadena(char *, int);
void cargarArticulos(Articulo *, int);
void listarArticulos(Articulo *, int);
void listarARticulosMayorPrecio(Articulo *, int, float);
int buscarArticuloCodigo(Articulo *, int, const char *);
int cantidadArticulosMayorStock(Articulo *, int, int);
void incrementarPrecioPorcentaje(Articulo *, int, float);
void menuListados(Articulo *, int);
void modificarPU(Articulo *, int);

#endif // PROTOTIPOS_H_INCLUDED
