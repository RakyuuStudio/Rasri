cmake_minimum_required(VERSION 3.29)
project(TheRasriProgLan VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

# Target: Racoma (Compiler)
# Target: Raveka (Build System)
# Target: Rikara (Debugger)

add_executable(Racoma
        src/Racoma/src/lexer/Lexer.cpp
        src/Racoma/src/lexer/Lexer.h
        src/Racoma/src/lexer/Token.h
        src/Racoma/src/lexer/TokenDef.h
)