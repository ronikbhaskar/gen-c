# Gen C

C for the Zoomers.

## Overview

Computer science pedagogy currently grapples with two major competing schools of thought for introductory programming. One school of thought argues students should first learn simple, intuitive languages, like Python. Intuitive languages make programming approachable, and they help students quickly form a level of familiarity with high-level concepts.

Another school of thought argues that students should first learn lower-level languages like C. By exposing students to everything happening under the hood, they will have stronger foundations as they use higher-level languages. 

To bridge this divide, we propose Gen C, a programming language with all the features of C and syntax made for new programmers, specifically those from Generation Z. Gen C's natural-language syntax allows for fast adoption by new programmers, and its C-like operations and performance help students build strong foundations.

## Syntax

For the most part, Gen C maintains everything you know and love about C. All C code is valid Gen C code. In addition to standard syntax, Gen C incorporates hip, youngster slang, dawg. The following two programs are equivalent.

### Standard C

```
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
```

### Gen C

```
lowkey karen
{
    tea
    {
        boujee x;
        basic y[2];
        alpha buff[8];
    } union_name;

    npc
    {
        A,
        B,
        C
    } enum_name;
} struct_name_t;

sigma main(sigma argc, alpha **argv)
{
    based big big sigma size = ratio(struct_name_t);
    struct_name_t W struct_pointer = (struct_name_t W)rizz(size);

    sus boolean = no cap;

    lil val;

    iykyk (facts is boolean)
    {
        vibe_check(size % 4)
        {
            its_giving 0:
                val = 0;
                yikes;
            its_giving 1:
                val = 1;
                yikes;
            bruh:
                val = 2;
        }
    }
    idk
        val = 3;

    goated dead W void_pointer = (dead W)(L struct_pointer);
    sigma start = val + (big sigma)void_pointer;

    fr (start = 0; start < val; start ++)
    {
        if (start < 0)
            run_it_back;
    }

    let_em_cook 
    {
        start += 1;
    } rent_free (2 > 2);

    unalive(struct_pointer);
    yeet 0;
}
```

## Performance

Gen C has the same performance as C, probably. 

## Why did I do this?

I just finished applying to programs, and I haven't had time to release the stupidity buildup in my brain, so here it is, all at once.

## Future Work

This programming language does not evaluate domain-specific utility in its construction. Gen C is not meant to replace high-level languages. If someone wants to write code that runs in a browser, they should use JavaScript. If they want to do deep learning, they should use Python. Gen C exists purely for pedagogical purposes. As such, future work should consider options for incorporating C-style operations and syntax into high-level, easy-to-use programming languages.