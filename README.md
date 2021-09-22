# Description

Some linker fun to learn

## Dependencies

+ C++ 17
+ CMake version `3.20.3`
+ MinGW 32bit version
    + Make sure the bin and lib folder are added to the path. E.g. `C:\MinGW\bin` and `C:\MinGW\lib`
    + MinGw GCC version `(MinGW.org GCC Build-2) 9.2.0`

## Troubleshooting

+ Having trouble linking?
    + Make sure MinGW and the Python lib are the same 32 bits or 64 bits version
+ Running into `windows error while loading shared libraries: ?: cannot open shared object file: No such file or directory`
    + Make sure MinGW is part of your path
