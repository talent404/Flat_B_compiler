/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

  #include<bits/stdc++.h>
  #include "classes.h"
  extern FILE *yyin;
  int yylex (void);
  void yyerror (char const *s);
  extern union Node yylval;
  class Prog* start=NULL;
  extern class visitor* v;

#line 77 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DECL = 258,
    CODE = 259,
    NUMBER = 260,
    IDENTIFIER = 261,
    ETOK = 262,
    INT = 263,
    IF = 264,
    ELSE = 265,
    FOR = 266,
    WHILE = 267,
    GOT = 268,
    GOTO = 269,
    PRINT = 270,
    READ = 271,
    STRING = 272,
    BREAK = 273,
    CONTINUE = 274,
    OR_COND = 275,
    AND_COND = 276,
    ADD = 277,
    SUB = 278,
    MUL = 279,
    DIV = 280,
    MOD = 281,
    XOR = 282,
    EQ = 283,
    E = 284,
    NE = 285,
    GE = 286,
    GT = 287,
    LE = 288,
    LT = 289,
    OR = 290,
    AND = 291,
    COL = 292,
    OP = 293,
    CP = 294,
    SC = 295,
    OB = 296,
    CB = 297,
    COMMA = 298,
    OSB = 299,
    OCB = 300
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 169 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    95,    97,    98,    99,   100,   101,   102,
     103,   105,   107,   108,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   120,   122,   123,   125,   126,   128,   129,
     130,   132,   134,   135,   137,   138,   139,   140,   141,   142,
     143,   145,   146,   148,   149,   151,   152,   154,   155,   157,
     158,   160,   161,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECL", "CODE", "NUMBER", "IDENTIFIER",
  "ETOK", "INT", "IF", "ELSE", "FOR", "WHILE", "GOT", "GOTO", "PRINT",
  "READ", "STRING", "BREAK", "CONTINUE", "OR_COND", "AND_COND", "ADD",
  "SUB", "MUL", "DIV", "MOD", "XOR", "EQ", "E", "NE", "GE", "GT", "LE",
  "LT", "OR", "AND", "COL", "OP", "CP", "SC", "OB", "CB", "COMMA", "OSB",
  "OCB", "$accept", "Program", "Decls_B", "Decls", "Decl", "Vars", "Var",
  "Code_B", "Stmnts", "Stmnt", "Labeling", "Got1", "Got2", "Forloop",
  "Var2", "Whileloop", "Ifelse", "Bool", "Printing", "Reading", "Var1",
  "Varr", "Ident", "Identr", "Assign", "Expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   -19,    19,  -110,    25,  -110,    -4,   -10,    36,  -110,
       6,  -110,  -110,    17,    27,  -110,  -110,    -3,    79,    36,
     -23,    35,    62,    35,    90,   100,    76,   101,  -110,  -110,
    -110,    68,    69,  -110,  -110,  -110,    70,    71,    73,    78,
    -110,    86,  -110,    86,  -110,    81,    35,    85,   205,    99,
      87,  -110,   134,  -110,    86,   103,  -110,   220,   105,   110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,   220,   109,    86,
     113,   169,  -110,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    39,  -110,    35,
     187,    76,    86,   101,   129,   115,  -110,  -110,    21,   152,
     152,   120,   120,   120,  -110,   220,   220,   220,   220,   220,
     220,  -110,  -110,  -110,   114,   116,    63,  -110,  -110,   139,
    -110,    86,  -110,   119,    86,    39,  -110,  -110,   220,   132,
     145,   -18,  -110,  -110,  -110,    39,    74,    88,   141,  -110,
    -110,  -110,   106,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,     0,     0,     0,     3,
       0,    13,     2,     9,     6,     8,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      22,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       7,     0,    23,     0,    62,    63,     0,     0,     0,     0,
       0,    24,     0,    48,     0,    41,    44,    47,    49,    42,
      46,    20,    21,    15,    16,    14,    10,    51,     0,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,    34,    53,     0,    54,
      56,    55,    57,    58,    59,    35,    36,    39,    37,    40,
      38,    61,    60,    28,    29,     0,     0,    25,    43,     0,
      45,     0,    64,    32,     0,     0,    31,    50,    52,     0,
       0,     0,    13,    30,    13,     0,     0,     0,     0,    33,
      26,    13,     0,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,  -110,  -110,   164,  -110,   -70,  -110,
    -110,  -110,  -110,  -110,  -109,  -110,  -110,   -22,  -110,  -110,
    -110,  -110,    94,    93,  -110,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     4,     6,    10,    14,    15,    12,    17,    29,
      30,    31,    32,    33,   115,    34,    35,    47,    36,    37,
      55,    59,    56,    60,    38,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    50,    98,    20,     8,    41,    21,     1,    22,    23,
      24,    25,    26,    27,    42,    67,   131,    68,   116,     5,
      71,    43,     3,   134,    70,   135,   138,    20,    90,     7,
      21,    11,    22,    23,    24,    25,    26,    27,     9,    28,
      44,    45,    13,    95,   113,   114,    16,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    18,   136,   123,   137,    57,   119,   117,    49,    20,
      19,   142,    21,    46,    22,    23,    24,    25,    26,    27,
      20,    44,    45,    21,    39,    22,    23,    24,    25,    26,
      27,    44,    45,    53,    20,   128,    51,    21,   130,    22,
      23,    24,    25,    26,    27,   126,    52,    58,    61,    62,
      63,    64,    20,    65,    54,    21,   139,    22,    23,    24,
      25,    26,    27,    66,    54,    69,    72,    87,    88,   129,
     140,    73,    74,    75,    76,    77,    78,    73,    74,    75,
      76,    77,    78,    89,    85,    86,    91,    78,   143,    92,
      85,    86,    96,    93,    94,    85,    86,   121,   124,   125,
     122,    73,    74,    75,    76,    77,    78,    73,    74,    75,
      76,    77,    78,   132,    85,    86,    75,    76,    77,    78,
      85,    86,   141,    40,   127,   118,   120,    85,    86,     0,
     133,    73,    74,    75,    76,    77,    78,     0,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,    97,    73,
      74,    75,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,    97,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,    85,    86
};

static const yytype_int16 yycheck[] =
{
      26,    23,    72,     6,     8,    28,     9,     3,    11,    12,
      13,    14,    15,    16,    37,    41,   125,    43,    88,     0,
      46,    44,    41,    41,    46,    43,   135,     6,    54,     4,
       9,    41,    11,    12,    13,    14,    15,    16,    42,    42,
       5,     6,     6,    69,     5,     6,    40,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    44,   132,    42,   134,    91,    92,    89,     6,     6,
      43,   141,     9,    38,    11,    12,    13,    14,    15,    16,
       6,     5,     6,     9,     5,    11,    12,    13,    14,    15,
      16,     5,     6,    17,     6,   121,     6,     9,   124,    11,
      12,    13,    14,    15,    16,    42,     6,     6,    40,    40,
      40,    40,     6,    40,    38,     9,    42,    11,    12,    13,
      14,    15,    16,    45,    38,    44,    41,    28,    41,    10,
      42,    22,    23,    24,    25,    26,    27,    22,    23,    24,
      25,    26,    27,     9,    35,    36,    43,    27,    42,    44,
      35,    36,    39,    43,    45,    35,    36,    28,    44,    43,
      45,    22,    23,    24,    25,    26,    27,    22,    23,    24,
      25,    26,    27,    41,    35,    36,    24,    25,    26,    27,
      35,    36,    41,    19,    45,    91,    93,    35,    36,    -1,
      45,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    47,    41,    48,     0,    49,     4,     8,    42,
      50,    41,    53,     6,    51,    52,    40,    54,    44,    43,
       6,     9,    11,    12,    13,    14,    15,    16,    42,    55,
      56,    57,    58,    59,    61,    62,    64,    65,    70,     5,
      52,    28,    37,    44,     5,     6,    38,    63,    71,     6,
      63,     6,     6,    17,    38,    66,    68,    71,     6,    67,
      69,    40,    40,    40,    40,    40,    45,    71,    71,    44,
      63,    71,    41,    22,    23,    24,    25,    26,    27,    29,
      30,    31,    32,    33,    34,    35,    36,    28,    41,     9,
      71,    43,    44,    43,    45,    71,    39,    39,    54,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,     5,     6,    60,    54,    63,    68,    71,
      69,    28,    45,    42,    44,    43,    42,    45,    71,    10,
      71,    60,    41,    45,    41,    43,    54,    54,    60,    42,
      42,    41,    54,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    49,    49,    50,    51,    51,    52,
      52,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    57,    58,    59,    59,    60,    60,
      60,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     3,     1,     1,
       4,     3,     2,     0,     2,     2,     2,     1,     1,     1,
       2,     2,     1,     2,     2,     4,     9,    11,     1,     1,
       4,     5,     5,     9,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       4,     3,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.prog) = new Prog((yyvsp[-2].decls_block), (yyvsp[0].code_block)); start = (yyval.prog);  }
#line 1364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.decls_block) = new Decls_block((yyvsp[-1].decls)); }
#line 1370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval.decls)->push_back((yyvsp[-1].decl)); }
#line 1376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.decls) = new Decls();}
#line 1382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = new Decl((yyvsp[0].vars)); }
#line 1388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.vars)->push_back((yyvsp[0].var)); }
#line 1394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval.vars) = new Vars(); (yyval.vars)->push_back((yyvsp[0].var)); }
#line 1400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "parser.y" /* yacc.c:1646  */
    { (yyval.var) = new Var("Normal", (yyvsp[0].value));  }
#line 1406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "parser.y" /* yacc.c:1646  */
    { (yyval.var) = new Var("Array", string((yyvsp[-3].value)), (yyvsp[-1].number)); }
#line 1412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "parser.y" /* yacc.c:1646  */
    { (yyval.code_block) = new Code_block((yyvsp[-1].stmnts));  }
#line 1418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnts)->push_back((yyvsp[0].stmnt)); }
#line 1424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnts) = new Statements();  }
#line 1430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnt) = new Statement((yyvsp[-1].assign));  }
#line 1436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.stmnt) = new Statement((yyvsp[-1].printing)); }
#line 1442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "parser.y" /* yacc.c:1646  */
    {(yyval.stmnt) = new Statement((yyvsp[-1].reading)); }
#line 1448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.stmnt) = new Statement((yyvsp[0].forloop));}
#line 1454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnt) = new Statement((yyvsp[0].whileloop)); }
#line 1460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnt) = new Statement((yyvsp[0].ifelse)); }
#line 1466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnt) = new Statement((yyvsp[-1].got1)); }
#line 1472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.stmnt) = new Statement((yyvsp[-1].got2)); }
#line 1478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyval.stmnt) = new Statement((yyvsp[0].labeling)); }
#line 1484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.labeling) = new Labeling((yyvsp[-1].value));}
#line 1490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "parser.y" /* yacc.c:1646  */
    { (yyval.got1) = new Got1((yyvsp[0].value)); }
#line 1496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "parser.y" /* yacc.c:1646  */
    { (yyval.got2) = new Got2((yyvsp[-2].value), (yyvsp[0].bl)); }
#line 1502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "parser.y" /* yacc.c:1646  */
    { (yyval.forloop) = new Forloop((yyvsp[-7].value), (yyvsp[-5].var2), (yyvsp[-3].var2), (yyvsp[-1].stmnts)); }
#line 1508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval.forloop) = new Forloop((yyvsp[-9].value), (yyvsp[-7].var2), (yyvsp[-5].var2), (yyvsp[-3].var2), (yyvsp[-1].stmnts)); }
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval.var2) = new Var2((yyvsp[0].number)); }
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 129 "parser.y" /* yacc.c:1646  */
    { (yyval.var2) = new Var2(string((yyvsp[0].value)));  }
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 130 "parser.y" /* yacc.c:1646  */
    { (yyval.var2) = new Var2(string((yyvsp[-3].value)), (yyvsp[-1].expr)); }
#line 1532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "parser.y" /* yacc.c:1646  */
    { (yyval.whileloop) = new Whileloop((yyvsp[-3].bl), (yyvsp[-1].stmnts)); }
#line 1538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.ifelse) = new Ifelse((yyvsp[-3].bl),(yyvsp[-1].stmnts)); }
#line 1544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyval.ifelse) = new Ifelse((yyvsp[-7].bl),(yyvsp[-5].stmnts),(yyvsp[-1].stmnts)); }
#line 1550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-1].bl)); }
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-2].expr),string((yyvsp[-1].value)),(yyvsp[0].expr));}
#line 1562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-2].expr),string((yyvsp[-1].value)),(yyvsp[0].expr));}
#line 1568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-2].expr),string((yyvsp[-1].value)),(yyvsp[0].expr));}
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 141 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-2].expr),string((yyvsp[-1].value)),(yyvsp[0].expr));}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-2].expr),string((yyvsp[-1].value)),(yyvsp[0].expr));}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 143 "parser.y" /* yacc.c:1646  */
    { (yyval.bl) = new Bool((yyvsp[-2].expr),string((yyvsp[-1].value)),(yyvsp[0].expr));}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "parser.y" /* yacc.c:1646  */
    {(yyval.printing) = new Printing((yyvsp[0].var1));}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.reading) = new Reading((yyvsp[0].varr)); }
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.var1)->push_back((yyvsp[0].ident));}
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.var1) = new Var1(); (yyval.var1)->push_back((yyvsp[0].ident));}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.varr)->push_back((yyvsp[0].identr));}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval.varr) = new Varr(); (yyval.varr)->push_back((yyvsp[0].identr)); }
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.ident) = new Ident((yyvsp[0].expr)); }
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.ident) = new Ident(string((yyvsp[0].value))); }
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 157 "parser.y" /* yacc.c:1646  */
    { (yyval.identr) = new Identr((yyvsp[0].value)); }
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval.identr) = new Identr((yyvsp[-3].value), (yyvsp[-1].expr)); }
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = new Assign(string((yyvsp[-2].value)),(yyvsp[0].expr));   }
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval.assign) = new Assign(string((yyvsp[-5].value)),(yyvsp[-3].expr),(yyvsp[0].expr));  }
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-1].expr)); }
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr),string((yyvsp[-1].value)), (yyvsp[0].expr)); }
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new Expr(int((yyvsp[0].number)));}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new Expr(string((yyvsp[0].value)));}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new Expr(string((yyvsp[-3].value)), (yyvsp[-1].expr)); }
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1740 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 178 "parser.y" /* yacc.c:1906  */


void yyerror (char const *s)
{
       fprintf (stderr, "%s\n", s);
}

int main(int argc, char *argv[])
{
	if (argc == 1 ) {
		fprintf(stderr, "Correct usage: bcc filename\n");
		exit(1);
	}

	if (argc > 2) {
		fprintf(stderr, "Passing more arguments than necessary.\n");
		fprintf(stderr, "Correct usage: bcc filename\n");
	}

	yyin = fopen(argv[1], "r");

	yyparse();
	if(start != NULL)
	{
		start->accept(v);
		start->Codegen();
		start->generateCode();
	}
}
