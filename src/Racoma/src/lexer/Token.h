#ifndef RACOMA_TOKEN
#define RACOMA_TOKEN

#include "TokenDef.h"
#include <string>
#include <utility>

namespace Rasri::Racoma::Lexer {
    struct RToken {
        TokenType type;

        // Position
        // I don't know if there's anyone write your code so long to make the source more than 2^32 lines.
        // Probably, it's not a problem.
        unsigned long int row;
        unsigned long int col;
        unsigned long int endRow;
        unsigned long int endCol;

        // Meta Information
        std::string fileName;

        // Main Content
        std::string content;

#ifdef __cplusplus
        RToken(TokenType tt, int krow, int kcol, std::string kfn, std::string kc)
            : type(tt), row(krow), col(kcol), fileName(std::move(kfn)), content(std::move(kc)) {}

        RToken(TokenType tt, int krow, int kcol, std::string kfn, std::string kc, int kendRow, int kendCol)
            : type(tt), row(krow), col(kcol), fileName(std::move(kfn)), content(std::move(kc)), endRow(kendRow), endCol(kendCol) {}

        RToken() : type(TokenType::Tok_Error), row(0), col(0), fileName(""), content("") {}

        ~RToken() = default;
#endif
    };
}

#endif // RACOMA_TOKEN