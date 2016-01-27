#include <stdlib.h>
#include <png.h>
#include <cairo.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
	int sizeX = 80;
	int sizeY = 80;
	char * fname = "file.png";
	cairo_t *c;
	cairo_surface_t *cs;
	cairo_status_t status;
	unsigned char * data;

	cs = cairo_image_surface_create( CAIRO_FORMAT_ARGB32, sizeX, sizeY );
	c = cairo_create( cs );
	cairo_rectangle( c, 2.5, 0.0, SIZEX - 1.0, SIZEY - 2.0 );
	cairo_set_source_rgb( c, 0.1, 0.0, 0.7 );
	cairo_fill( c );
	cairo_surface_flush( cs );
	data = cairo_image_surface_get_data( cs );
	cairo_surface_destroy( cs );
	return 0;
}
