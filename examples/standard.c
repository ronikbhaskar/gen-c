/* standard.c
 * 
 * Forms a Rosetta Stone in combination with gen.c
 *
 * Author: Ronik 
 */

#include <stdio.h>
#include "../src/gen_c.h"

typedef struct
{
    union
    {
        double x;
        float y[2];
        char buff[8];
    } union_name;

    enum
    {
        A,
        B,
        C
    } enum_name;
} struct_name_t;

int main(int argc, char **argv)
{
    unsigned long long int size = sizeof(struct_name_t);
    struct_name_t *struct_pointer = (struct_name_t*)malloc(size);

    bool boolean = !false;

    short val;

    if (true == boolean)
    {
        switch(size % 4)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            default:
                val = 2;
        }
    }
    else
        val = 3;

    const void *void_pointer = (void*)(&struct_pointer);
    int start = val + (long int)void_pointer;

    for (start = 0; start < val; start ++)
    {
        if (start < 0)
            continue;
    }

    do 
    {
        start += 1;
    } while (2 > 2);

    free(struct_pointer);
    return 0;
}
