CCOMPILE      = $(CC) $(CFLAGS) $(INCLUDES) $(MACRO) $(OPTIONS)
CC            = gcc
CFLAGS       += -std=c17
INCLUDES      = -I../src
MACRO         = ""
OUTPUT_OPTION = -o $@

VPATH    =:../src/Common
VPATH   +=:../src/Sequence
VPATH   +=:../src/Input
VPATH   +=:../src/Parse
VPATH   +=:../src/Output

OBJECTS  = #input
OBJECTS += sequence
OBJECTS += #parse
OBJECTS += #output
OBJECTS.o   = $(addsuffix .o, $(OBJECTS))

.PHONY:	build
build:	csv

.PHONY:	clean
clean:
	rm -f *.o

csv:	main.o $(OBJECTS.o)
	$(CCOMPILE) main.o $(OBJECTS.o) -o $@

%.o:	%.c
	$(CCOMPILE) -c $(OUTPUT_OPTION) $<
