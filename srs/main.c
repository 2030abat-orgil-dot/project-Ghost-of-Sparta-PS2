
#include <tamtypes.h>
#include <kernel.h>
#include <gsKit.h>
#include <dmaKit.h>

int main(int argc, char *argv[])
{
    GSGLOBAL *gsGlobal;

    gsGlobal = gsKit_init_global();

    dmaKit_init(
        D_CTRL_RELE_OFF,
        D_CTRL_MFD_OFF,
        D_CTRL_STS_UNSPEC,
        D_CTRL_STD_OFF,
        D_CTRL_RCYC_8,
        1 << DMA_CHANNEL_GIF
    );

    dmaKit_chan_init(DMA_CHANNEL_GIF);

    gsKit_init_screen(gsGlobal);

    gsKit_clear(gsGlobal,
        GS_SETREG_RGBAQ(10, 15, 35, 0x80, 0));

    while (1)
    {
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }

    return 0;
}

