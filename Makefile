main: main.o ops.o tensor.o stack.o
	gcc -g S^ -o $@

%.o: %.c
	gcc -c $<

main.o: main.c ops.h tensor.h stack.h

stack.o: stack.c stack.h tensor.h

ops.o: ops.c ops.h stack.h 

tensor.o: tensor.c tensor.h

.PHONY: all clean

clean: 
	rm *.0
