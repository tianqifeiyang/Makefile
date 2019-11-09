.PHONY: clean

CC = gcc
RM = rm

APP = simple
OBJS = main.o 
OBJS += foo.o

$(APP): $(OBJS)
	$(CC) -o $(APP) $(OBJS)
# main.o: main.c
# 	$(CC) -o main.o -c main.c
# foo.o: foo.c
# 	$(CC) -o foo.o -c foo.c
%.o: %c foo.h
	$(CC) -o $@ -c $<
clean:
	$(RM) $(APP) $(OBJS)
