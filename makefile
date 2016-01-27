example: example.c
	gcc example.c -o example `pkg-config --cflags --libs gtk+-3.0`

clean:
	rm example
