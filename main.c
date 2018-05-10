#define GPKCON (volatile unsigned long*)0x7F008820
#define GPKDAT (volatile unsigned long*)0x7F008824

int gboot_main()
{
    *(GPKCON) = 0x1111;
    *(GPKDAT) = 0xe;
    
    return 0;    
}


