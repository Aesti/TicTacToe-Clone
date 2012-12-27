CXX=g++ 

CFLAGS=-c -O3 -Wall `sdl2-config --cflags`

LDFLAGS=`sdl2-config --libs` -lSDL2main -lSDL2_image -lSDL2_ttf 

OUTPUT = test

sources = main.cpp

OBJS = ${sources:.cpp=.o}

$(OUTPUT): $(OBJS)  
	${CXX} -o ${OUTPUT} ${LDFLAGS} ${sources}