CC=gcc -g 
LD=gcc 
CXXFLAGS = 
CFLAGS = 
RM = rm -f
MV = mv 
CP = cp 
MAKE = make
SRC = $(wildcard src/*.c)
OBJ = src/*.o
CPPFLAGS = -Isrc
LIBS = 
LDFLAGS = -lm
EEXT=
OEXT=.o
TARGET0 = analysis
TARGET1 = colors
TARGET2 = green
TARGET3 = useanalysis
TARGETS = useanalysis green colors analysis
RMTARGETS = src/green src/colors src/analysis
all: $(TARGETS) analysis
src/$(TARGET1)$(EEXT): src/$(TARGET1).c
	$(CC) $(CPPFLAGS) src/$(TARGET1).c  -o src/colors $(LDFLAGS)
$(TARGET1): src/$(TARGET1)$(EEXT)
src/$(TARGET2)$(EEXT): src/$(TARGET2).c
	$(CC) $(CPPFLAGS) src/$(TARGET2).c  -o src/green $(LDFLAGS)
$(TARGET2): src/$(TARGET2)$(EEXT)
src/analysis$(OEXT): src/analysis.c src/analysis.h src/defines.h
	$(CC)  $(CPPFLAGS) -c src/analysis.c   -o src/analysis$(OEXT) 
src/useanalysis$(OEXT): src/useanalysis.c src/analysis.h src/defines.h 
	$(CC)  $(CPPFLAGS) -c src/useanalysis.c  -o  src/useanalysis$(OEXT) 
src/useanalysis$(EEXT): src/analysis$(OEXT) src/useanalysis$(OEXT)
	$(LD) $? -o src/analysis$(EEXT) $(LDFLAGS)
useanalysis: src/useanalysis$(EEXT)
analysis: useanalysis
install: all
	mv $(RMTARGETS) bin
.PHONY: clean distclean 
clean: 
	rm -f $(OBJ) $(RMTARGETS)
distclean: clean
	rm -f bin/* Makefile* *.fit *.fits *.csv *.ssv *.tsv *.dat *.txt *.log
