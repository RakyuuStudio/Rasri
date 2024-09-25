#pragma once

namespace Rasri::Racoma::Lexer {
    enum class TokenType : int {
        // Special Tag
        Tok_EOF,

        // Symbols
        Tok_LParen,
        Tok_RParen,
        Tok_LBrace,
        Tok_RBrace,
        Tok_LBracket,
        Tok_RBracket,
        Tok_Semicolon,
        Tok_Colon,

        // Numbers
        Tok_NumberDec, // Decimal Numbers, e.g. `int num = 10;`
        Tok_NumberOct, // Octal Numbers, e.g. `int octNum = 0c7013;`
        Tok_NumberHex, // Hexadecimal Numbers, e.g. `int hexNum = 0xFF13;`
        Tok_NumberBin, // Binary Numbers, e.g. `int binNum = 0b00110101;`
        Tok_NumberFloat, // Float Numbers, e.g. `float fNum = 0.01` or `double dNum = 0.000001`.
        Tok_NumberSci, // Scientific Notation Numbers, e.g. `int max = 2e+13;`

        // String Literal
        Tok_StringLiteral, // String Literal, magic characters need to be escaped.
        Tok_RawStringLiteral, // Raw String Literal, magic character doesn't need to be escaped.

        // Character Literal
        Tok_CharacterLiteral, // Character Literal, e.g. `char c = 'a'`.

        // Keywords
        Tok_NativeKeywords, // Native Keywords that means officially supported like: `true`, `class`
        Tok_ExtendKeywords, // Extend Keywords that means declares in the extent pack like `__or`, `__and`

        // Types
        Tok_Types,

        // Identifiers
        Tok_Identifiers,

        // Operator
        Tok_Plus,                 // +
        Tok_Minus,                // -
        Tok_Multi,                // *
        Tok_Div,                  // `/`
        Tok_Mod,                  // %
        Tok_BitAnd,               // &
        Tok_BitOr,                // |
        Tok_BitXor,               // ^
        Tok_BitInversion,         // ~
        Tok_CondAnd,              // &&
        Tok_CondOr,               // ||
        Tok_CondInversion,        // !
        Tok_BitLeft,              // <<
        Tok_BitRight,             // >>
        Tok_BitAbsoluteRight,     // >>>
        Tok_ScopeTempExtend,      // ^|
        Tok_ScopeTempShrink,      // |^
        Tok_Bind,                 // =>
        Tok_TernaryIf,            // The `?` in the group of `[Cond] ? [True] : [False]`
        Tok_TernaryElse,          // The `:` in the group of `[Cond] ? [True] : [False]`
        Tok_SelfAdd,              // ++
        Tok_SelfMin,              // --
        Tok_CompareEqual,         // ==
        Tok_CompareGreater,       // >
        Tok_CompareLess,          // <
        Tok_CompareGreaterEq,     // >=
        Tok_CompareLessEq,        // <=
        Tok_ModEq,                // %=
        Tok_PlusEq,               // +=
        Tok_MinusEq,              // -=
        Tok_MultiEq,              // *=
        Tok_DivEq,                // /=
        Tok_BitAndEq,             // &=
        Tok_BitOrEq,              // |=
        Tok_BitXorEq,             // ^=
        Tok_BitLeftEq,            // <<=
        Tok_BitRightEq,           // >>=
        Tok_BitAbsRightEq,        // >>>=
        Tok_ArrowMemberAcc,       // ->
        Tok_DotMemberAcc,         // .
        Tok_Range,                // ...
        Tok_To,                   // \> (Transfer the data to an instance that fit the data format)
        Tok_AllContentInPackage,  // The '*' in [PackageName].*.

        // Comment
        Tok_SingleLineComment,    // Start with `//`, end with EOL (`\n`).
        Tok_MultiLineComment,     // Start with `/*`, end with `*/`.
        Tok_MultiLineDocComment,  // Start with `/**`, end with `**/`.

        // Property
        Tok_Property,             // e.g. @Constructor, @Destructor

        // Macro
        Tok_MacroDefinition,      // `@Macro PI => 3.14159265358979323846`
        Tok_MacroFunctionDefinition, // `@Macro MFunc => (new int [=](int a, int b){return a + b})`

        // Pointer
        Tok_PointerDefinition,
        Tok_PointerDereference,

        // Package & Module
        Tok_PackageName,
        Tok_ImportedPackageName,
        Tok_ExportedPackageName, // It's useful when you want to make a library module.

        // Template
        Tok_TemplateParameter,   // Just like the `type` in : `public void Add<Template: type>`

        // Magic
        Tok_Whitespace,
        Tok_Error, // What the fuck is "�" and another non-utf-8 character?
    };
}