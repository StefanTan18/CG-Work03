#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  /*
  print_matrix(make_translate(1,2,3)); //For Testing!
  print_matrix(make_scale(1,2,3)); //For Testing!
  print_matrix(make_rotX(180)); //For Testing!
  print_matrix(make_rotY(180)); //For Testing!
  print_matrix(make_rotZ(180)); //For Testing!
  */
  
  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );
  

  free_matrix( edges );
  free_matrix( transform );
}
