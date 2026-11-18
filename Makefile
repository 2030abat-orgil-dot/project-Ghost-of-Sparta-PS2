
EE_BIN = project-gos.elf

EE_OBJS = src/main.o

EE_LIBS = -lgraph -ldma

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
