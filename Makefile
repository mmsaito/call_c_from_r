a.all: foo.c 
	gcc -shared $< -o $@
