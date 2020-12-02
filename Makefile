solve: Source_v2.o
	g++ -o solve Source_v2.o
Source.o: Source_v2.cpp
	g++ -c Source_v2.cpp
run:
	./solve

