/*
 * This is an outer wrapper for the xvc_main library.
 */
#include "JtagTools/xvcLib.h"

int main( int argc, char *argv[] )
{
   // We could parse args looking for board specific
   // values and apply them here.

   return( xvc_main(argc,argv) );
}
