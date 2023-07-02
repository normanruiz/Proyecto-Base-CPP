//#############################################################################
// ARCHIVO             : nombre de archivo.extension
// AUTOR/ES            : nombre/s de autor/es
// VERSION             : 0.01 beta.
// FECHA DE CREACION   : dd/mm/aaaa.
// ULTIMA ACTUALIZACION: dd/mm/aaaa.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux 5.10.102.1-microsoft-standard-WSL2 
//                       #1 SMP Wed Mar 2 00:30:59 UTC 2022 x86_64 GNU/Linux 
// IDE                 : VIM - Vi IMproved version 8.2.2434.
// COMPILADOR          : g++ (Debian 10.2.1-6) 10.2.1 20210110.
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
//#ifndef _WIN32
//  # define _WIN32
//#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
#ifndef _LINUX
  # define _LINUX
#endif

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
                    // objetos cin, cout y endl.

//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "headers/csystem.h" // Libreria para multiplataforma.

//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
using namespace std;

//==============================================================================
// FUNCION PRINCIPAL - PUNTO DE INICIO DEL PROYECTO
//------------------------------------------------------------------------------
int main()
{
	cout << "Esqueleto listo para empezar a trabajar..." << endl;
    
	//--------------------------------------------------------------------------
	// FIN DE LA FUNCION main() SIN ERRORES.
    //--------------------------------------------------------------------------
    return 0;
}

//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################
