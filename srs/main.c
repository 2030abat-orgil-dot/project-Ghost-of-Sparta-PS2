
#include <tamtypes.h>
#include <kernel.h>
#include <gsKit.h>
#include <dmaKit.h>

GSGLOBAL *gsGlobal;

int main(void)
{
    gsGlobal = gsKit_init_global();
    gsKit_init_screen(gsGlobal);

    gsKit_clear_screen(gsGlobal);

    while (1)
    {
        gsKit_sync_flip(gsGlobal);
        gsKit_clear_screen(gsGlobal);

        gsKit_set_color(gsGlobal, GS_SET_RGBA(255, 255, 255, 255));
        gsKit_font_print(gsGlobal, 200, 200, 1, "PROJECT GOS - PS2");

        gsKit_flip(gsGlobal);
    }

    return 0;
}
