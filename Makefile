OBJECTS=main

all: $(OBJECTS)

run: $(OBJECTS)
	./main

%.o: %.cpp
	g++ $^ -o $@
	
clean: 
	rm $(OBJECTS)
