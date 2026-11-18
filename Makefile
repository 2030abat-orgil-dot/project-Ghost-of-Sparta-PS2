
EE_BIN = project-gos.elf

EE_OBJS = src/main.o

EE_INCS += -I$(PS2DEV)/gsKit/include
EE_LDFLAGS += -L$(PS2DEV)/gsKit/lib -L$(PS2SDK)/ports/lib
EE_LIBS += -lgskit -ldmakit -lgraph -ldma

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
