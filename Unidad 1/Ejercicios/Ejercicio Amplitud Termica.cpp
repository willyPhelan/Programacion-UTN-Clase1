/* 15
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado.
Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.
NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.
*/

#include <iostream>


using namespace std ;



int main() {

    int temp_max, temp_min, amplitud ;

	cout << "Ingresar temperatura maxima" << endl ;
	cin >> temp_max ;

	cout << "Ingresar temperatura mainima" << endl ;
	cin >> temp_min ;

	amplitud = temp_max - temp_min ;

	cout << "La amplitud termica es de: " << amplitud << " grados" << endl ;



	return 0 ;
 }
