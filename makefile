all: cliente.o ref.o jogo.o 
	gcc cliente.o -o cliente
	gcc ref.o -o ref	
	gcc jogo.o -o jogo

debug: cliente.c ref.c jogo.h
	gcc cliente.c -o cliente -g 
	gcc ref.c -o ref -g 
	gcc jogo.c -o jogo -g 

cliente: cliente.c cliente.h
	gcc cliente.c -c

ref: ref.c ref.h
	gcc ref.c -c

jogo: jogo.c jogo.h
	gcc jogo.c -c

clean:
	rm *.o
	rm cliente
	rm ref
	rm jogo 
