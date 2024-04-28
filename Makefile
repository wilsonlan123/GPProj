DiceRolling.o: NumMonster.cpp NumMonster.h
	g++ -c $<

OneInAHundred.o: OneInAHundred.cpp OneInAHundred.h
	g++ -c $<

tictactioe.0: tictactoe.cpp tictactoe.h
	g++ -c $<

main.o: main.cpp OneInAHundred.h NumMonster.h tictactoe.h
	g++ -c $<

main: NumMonster.o OneInAHundred.o tictactoe.o
	g++ $^ -o $@
	
clean: 
	rm -f main main.o OneInAHundred.o NumMonster.o tictactioe.o
.PHONY: clean 
