#OBJS specifies which files to compile as part of the project
OBJS = main.cpp src/oop.cpp src/Akuarium.cpp src/Guppy.cpp src/Piranha.cpp src/Ikan.cpp src/Position.cpp src/Coin.cpp src/Makanan.cpp src/Snail.cpp

#CC specifies which compiler we're using
CC = g++

#INCLUDE_PATHS specifies the additional include paths we'll need
INCLUDE_PATHS = -IC:\MinGW\include\SDL2 -Iheaders

#LIBRARY_PATHS specifies the additional library paths we'll need
LIBRARY_PATHS = -LC:\MinGW\lib -LC:\MinGW\bin

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
# -Wl,-subsystem,windows gets rid of the console window
COMPILER_FLAGS = 

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lmingw32 -lSDL2_ttf -lSDL2Main -lSDL2  -lSDL2_image 

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = main.exe

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
	$(OBJ_NAME)