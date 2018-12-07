#Makefile for Snowman Game

CMP = g++
MAIN = main
CLASS = snowman
EXEC = snowman

$(EXEC): $(MAIN).o $(CLASS).o
  $(CMP) $(MAIN).o $(CLASS).o $(GRAPHIC).o
  
$(MAIN).o: $(MAIN).cpp $(CLASS).h
  $(CMP) -c -lX11 $(MAIN).cpp -o $(MAIN).o
  
$(CLASS).o: $(CLASS).cpp $(CLASS).h
  $(CMP) -c $(CLASS).cpp -o $(CLASS).o
