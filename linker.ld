SECTIONS
{
    . = 0x0100000;

    .text:
            {
                *(multiboot)
                *(.text*)
                *(.rodata)
            }
}
