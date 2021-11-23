#Target_name

PROJ_NAME =	Airlines
SRC	= AirlinesOperations.c projectmain.c

ifdef OS
	RM=del /q
   	FixPath=$(subst /,\,$1)
	EXEC =exe
else
	ifeq ($(shell uname),Linux)
		RM= rm -rf
		FixPath= $1
		EXEC =out
	endif
endif




build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run: build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))

