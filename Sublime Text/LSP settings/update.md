```
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-clang-x86_64-toolchain

robocopy "C:\msys64\mingw64\include" "C:\msys64\clang64\include" /s
robocopy "C:\msys64\clang64\include\c++\12.2.0" "C:\msys64\clang64\include\c++\v1" /s
robocopy "C:\msys64\clang64\include\c++\v1\x86_64-w64-mingw32" "C:\msys64\clang64\include\c++\v1" /s
```