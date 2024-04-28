NumMonster.o: NumMonster.cpp NumMonster.h
	g++ -c $<

OneInAHundred.o: Guess_Your_Luck.cpp Guess_Your_Luck.h
	g++ -c $<

tictactioe.0: tictactoe.cpp tictactoe.h
	g++ -c $<

main.o: main.cpp Guess_Your_Luck.h NumMonster.h tictactoe.h
	g++ -c $<

main: NumMonster.o Guess_Your_Luck.o tictactoe.o
	g++ $^ -o $@
	
clean: 
	rm -f main main.o Guess_Your_Luck.o NumMonster.o tictactioe.o
.PHONY: clean 
