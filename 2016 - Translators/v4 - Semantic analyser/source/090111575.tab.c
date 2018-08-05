/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#line 2 "090111575.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "estruturas.h"
    #include "semantica.h"

    /*define o tipo de informação que vamos passar pra ele:*/
    // #define YYSTYPE double
    /*geramos esta funcao com o flex, que eh padrao*/
    extern int yylex();
    extern int parse_multiple_line_comments();
    extern int parse_single_line_comments();
    extern int parse_string();
    extern int g_line_counter;
    extern int g_symbol_table_size;
    extern char g_current_scope[255];
    extern symbol_table_struct *g_symbol_table_first_line;
    extern char g_expression_type[255];

    // protótipos de funções
    void printSymbolTable();
    void addSymbolTableLine(data_for_the_symbol_table*);
    void setCurrentScope(const char*);
    NODE * addTreeNode(description_and_value_data_for_the_tree*);
    void addNodeToListOfNodeBrothers(NODE*, NODE*);
    void addChildToTreeNode(NODE*, NODE*);
    void setValueInSymbolTableEntry(char *);
	void printSyntaxTree(NODE* root, int identation_counter);
	void setLastValueByIdentifierName(char *);
    void yyerror (char const *s); /* -> função de tratamento de erros do bison */

	// variáveis globais
    symbol_table_struct* g_symbol_table_current_line;
    char g_last_value_from_st_entry [255];
    description_and_value_data_for_the_tree *g_desc_and_val;
    data_for_the_symbol_table *g_symbol_data;
    int g_syntax_error_flag = 0;
    char g_temp[20];

#line 108 "090111575.tab.c" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "090111575.tab.h".  */
#ifndef YY_YY_090111575_TAB_H_INCLUDED
# define YY_YY_090111575_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OPERATOR = 258,
    Identifier = 259,
    IF = 260,
    ELSE = 261,
    WHILE = 262,
    INT = 263,
    NUMBER = 264,
    STRING = 265,
    TEXT = 266,
    VOID = 267,
    RETURN = 268,
    EqualTo = 269,
    LessThan = 270,
    GreaterThan = 271,
    LessThanOrEqualTo = 272,
    GreaterThanOrEqualTo = 273,
    NotEqualTo = 274,
    IFX = 275
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 44 "090111575.y" /* yacc.c:355  */

    int int_value;
    char str_value[255];
    char char_value;

    struct tree_node_struct *NODE;

#line 177 "090111575.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_090111575_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 192 "090111575.tab.c" /* yacc.c:358  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

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
      14,    15,    21,    23,    18,    24,    25,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,    19,
       2,    20,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,    17,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    27,
      28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   123,   123,   144,   144,   192,   192,   241,   252,   259,
     267,   282,   303,   310,   318,   333,   341,   349,   358,   383,
     416,   427,   439,   455,   465,   475,   483,   491,   499,   511,
     523,   531,   543,   552,   562,   585,   607,   636,   651,   660,
     680,   689,   699,   713,   728,   742,   754,   771,   781,   790,
     800,   810,   820,   830,   840,   851,   865,   879,   888,   902,
     916,   925,   941,   953,   965,   974,   989,  1001,  1014,  1037,
    1070,  1086,  1105,  1123,  1148,  1173
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPERATOR", "Identifier", "IF", "ELSE",
  "WHILE", "INT", "NUMBER", "STRING", "TEXT", "VOID", "RETURN", "'('",
  "')'", "'{'", "'}'", "','", "';'", "'='", "'*'", "'/'", "'+'", "'-'",
  "'.'", "':'", "EqualTo", "LessThan", "GreaterThan", "LessThanOrEqualTo",
  "GreaterThanOrEqualTo", "NotEqualTo", "IFX", "$accept", "Begin",
  "Function", "$@1", "$@2", "FormalArgList", "FormalArg", "ArgList", "Arg",
  "Declaration", "Type", "CompoundStmt", "StmtList", "Stmt", "WhileStmt",
  "IfStmt", "ReturnStmt", "Expr", "BooleanExpr", "Attribution", "Rvalue",
  "Compare", "Addition", "Multiplication", "Term", "Factor",
  "FunctionCall", "StringConcat", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    40,    41,   123,   125,    44,    59,
      61,    42,    47,    43,    45,    46,    58,   269,   270,   271,
     272,   273,   274,   275
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      65,   -12,   -60,   -60,    16,    97,    20,   -60,   -60,    32,
      37,    58,   -60,   -60,    97,    97,     7,   -60,    78,    80,
      14,    97,   -60,    14,    83,   -60,   -60,   -60,   -60,   -60,
      30,    67,    51,    92,   102,   -60,    68,     9,     9,   -60,
      46,    46,   100,   116,   -60,   -60,   -60,   -60,   103,   104,
     -60,    61,    85,    89,   -60,   -60,   -60,    95,   -60,   -60,
      10,     9,   120,    41,     9,     9,    74,   -60,   110,   -60,
     -60,   -60,   -60,   -60,   106,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,    46,    46,    46,    70,    70,    76,
      42,    84,   -60,   -60,   -60,    95,   -60,   113,   -60,   -60,
     114,   -60,    61,   -60,    95,   115,   -60,   -60,   -60,    85,
      89,    89,   -60,   -60,   -60,   -60,   -60,    10,    10,    14,
      14,   -60,    86,   122,   -60,   -60,    14,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    20,    21,     0,     2,     0,     7,     1,     0,
       0,     0,     3,     5,     8,     8,     0,     9,     0,     0,
       0,     0,    11,     0,     0,    25,     4,    10,     6,    23,
       0,     0,    65,     0,     0,    66,    67,     0,     0,    22,
       0,     0,     0,     0,    30,    24,    26,    27,     0,     0,
      39,    38,    48,    57,    60,    64,    40,    41,    33,    32,
      12,     0,     0,     0,     0,     0,     0,    37,     0,    65,
      67,    63,    62,    28,    18,    19,    31,    29,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
      65,     0,    13,    15,    16,    17,    46,     0,    75,    73,
       0,    43,    42,    44,    45,     0,    74,    72,    61,    47,
      55,    56,    58,    59,    71,    70,    68,     0,    12,     0,
       0,    14,     0,    35,    34,    69,     0,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,   -60,   -60,   117,   112,    13,    17,   -60,
      12,   -23,   -60,   -60,   -60,   -60,   -60,   -35,    71,   -16,
      48,   -60,    53,    29,    77,   -59,   -56,   -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    14,    15,    16,    17,    91,    92,    42,
      18,    26,    30,    45,    46,    47,    48,    49,   100,    50,
      51,    84,    52,    53,    54,    55,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    93,    67,    68,    94,     7,    95,    44,   103,   103,
     104,   104,     6,    32,    90,    24,     8,     9,    35,    35,
      36,    36,    20,    38,    10,    21,    96,    75,   112,   113,
      25,    31,    40,    41,    32,    33,    11,    34,     2,    35,
       3,    36,    43,    37,    38,    98,    25,    39,   101,   101,
      69,    12,    99,    40,    41,    35,    60,    70,    93,    93,
      38,    94,    94,    95,    95,    60,     1,    62,    63,    40,
      41,    61,    13,     2,    69,     3,    62,    63,   106,    35,
     114,    70,    22,    58,    29,   107,    59,   115,    78,    79,
      80,    81,    82,    83,    66,    23,   123,   124,    21,   116,
      29,   125,   117,   127,   117,     2,    64,     3,    85,    86,
      87,    88,   102,   102,   110,   111,    65,    71,    72,    73,
      74,    89,    76,    77,    97,   108,    61,   118,   126,   119,
     120,   122,    19,    27,   121,     0,   105,   109
};

static const yytype_int8 yycheck[] =
{
      23,    60,    37,    38,    60,    17,    60,    30,    64,    65,
      64,    65,     0,     4,     4,     1,     0,     5,     9,     9,
      11,    11,    15,    14,     4,    18,    61,    43,    87,    88,
      16,     1,    23,    24,     4,     5,     4,     7,     8,     9,
      10,    11,    30,    13,    14,     4,    16,    17,    64,    65,
       4,    14,    11,    23,    24,     9,    14,    11,   117,   118,
      14,   117,   118,   117,   118,    14,     1,    25,    26,    23,
      24,    20,    14,     8,     4,    10,    25,    26,     4,     9,
       4,    11,     4,    16,    17,    11,    19,    11,    27,    28,
      29,    30,    31,    32,    26,    15,   119,   120,    18,    15,
      17,    15,    18,   126,    18,     8,    14,    10,    23,    24,
      21,    22,    64,    65,    85,    86,    14,    40,    41,    19,
       4,    26,    19,    19,     4,    15,    20,    14,     6,    15,
      15,   118,    15,    21,   117,    -1,    65,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,    10,    35,    36,    44,    17,     0,    44,
       4,     4,    14,    14,    37,    38,    39,    40,    44,    39,
      15,    18,     4,    15,     1,    16,    45,    40,    45,    17,
      46,     1,     4,     5,     7,     9,    11,    13,    14,    17,
      23,    24,    43,    44,    45,    47,    48,    49,    50,    51,
      53,    54,    56,    57,    58,    59,    60,    61,    16,    19,
      14,    20,    25,    26,    14,    14,    26,    51,    51,     4,
      11,    58,    58,    19,     4,    53,    19,    19,    27,    28,
      29,    30,    31,    32,    55,    23,    24,    21,    22,    26,
       4,    41,    42,    59,    60,    61,    51,     4,     4,    11,
      52,    53,    54,    60,    61,    52,     4,    11,    15,    56,
      57,    57,    59,    59,     4,    11,    15,    18,    14,    15,
      15,    42,    41,    45,    45,    15,     6,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    37,    36,    38,    36,    36,    39,    39,
      39,    40,    41,    41,    41,    42,    42,    42,    43,    43,
      44,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    49,    49,    50,    51,    51,
      51,    51,    52,    52,    52,    52,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    57,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     0,     8,     2,     0,     1,
       3,     2,     0,     1,     3,     1,     1,     1,     2,     2,
       1,     1,     3,     2,     2,     0,     1,     1,     2,     2,
       1,     2,     2,     2,     5,     5,     7,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     2,     2,     1,     1,     1,     1,     4,     6,
       3,     3,     3,     3,     3,     3
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
#line 124 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "CStr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);
                    addChildToTreeNode((yyval.NODE), (yyvsp[0].NODE));

                    if(!isMainFunctionPresent())
                    {
                        printf("ERRO SEMANTICO! A funcao main nao existe.\n");
                        g_syntax_error_flag = 1;
                    }

                    if (g_syntax_error_flag == 0)
                    {
                        printf("\nArvore sintatica:\n");
                        printSyntaxTree((yyval.NODE),0);
                        printSymbolTable();
                    }
                }
#line 1356 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 144 "090111575.y" /* yacc.c:1646  */
    {setCurrentScope((yyvsp[-1].str_value));}
#line 1362 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 145 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Function");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-6].NODE));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-5].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));

                    setCurrentScope("GLOBAL");
                    strcpy(g_symbol_data->name, (yyvsp[-5].str_value));
                    strcpy(g_symbol_data->type, (yyvsp[-6].NODE)->child->description);
                    strcpy(g_symbol_data->category, "FUNCTION");
                    g_symbol_data->isFormalArg = 0;
                    if(!verifyDuplicateFunction(g_symbol_data))
                        addSymbolTableLine(g_symbol_data);
                    else
                    {
                        printf("Line %d: ERRO SEMANTICO! A funcao '%s' ja existe.\n", g_line_counter, (yyvsp[-5].str_value));
                        g_syntax_error_flag = 1;
                    }

                    checkReturnStatementsTypes((yyvsp[-6].NODE)->child->description, (yyvsp[-5].str_value));
                    if (!recursivelyLookForReturnInCompoundStmt((yyvsp[0].NODE)))
                    {
                        printf("Line %d: ERRO SEMANTICO! A funcao '%s' pode ter um ramo sem return statement (control reaches end of non-void function).\n", g_line_counter, (yyvsp[-5].str_value));
                        g_syntax_error_flag = 1;
                    }

                    // o escopo passa a ser o da função inserida:
                    setCurrentScope((yyvsp[-5].str_value));

                }
#line 1414 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 192 "090111575.y" /* yacc.c:1646  */
    {setCurrentScope((yyvsp[-1].str_value));}
#line 1420 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 193 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Function");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-7].NODE));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-6].NODE));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-5].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));

                    setCurrentScope("GLOBAL");
                    strcpy(g_symbol_data->name, (yyvsp[-5].str_value));
                    strcpy(g_symbol_data->type, (yyvsp[-6].NODE)->child->description);
                    strcpy(g_symbol_data->category, "FUNCTION");
                    g_symbol_data->isFormalArg = 0;
                    if(!verifyDuplicateFunction(g_symbol_data))
                        addSymbolTableLine(g_symbol_data);
                    else
                    {
                        printf("Line %d: ERRO SEMANTICO! A funcao '%s' ja existe.\n", g_line_counter, (yyvsp[-5].str_value));
                        g_syntax_error_flag = 1;
                    }

                    checkReturnStatementsTypes((yyvsp[-6].NODE)->child->description, (yyvsp[-5].str_value));
                    if (!recursivelyLookForReturnInCompoundStmt((yyvsp[0].NODE)))
                    {
                        printf("Line %d: ERRO SEMANTICO! A funcao '%s' pode ter um ramo sem return statement (control reaches end of non-void function).\n", g_line_counter, (yyvsp[-5].str_value));
                        g_syntax_error_flag = 1;
                    }

                    // o escopo passa a ser o da função inserida:
                    setCurrentScope((yyvsp[-5].str_value));
                }
#line 1473 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 242 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "SYNTAX ERROR");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                    g_syntax_error_flag = 1;
                }
#line 1486 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 252 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "FormalArgList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                }
#line 1498 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 260 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "FormalArgList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1510 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 268 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "FormalArgList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ",");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1528 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 283 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "FormalArg");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_symbol_data->name, (yyvsp[0].str_value));
                    strcpy(g_symbol_data->type, (yyvsp[-1].NODE)->child->description);
                    strcpy(g_symbol_data->category, "VARIABLE");
                    g_symbol_data->isFormalArg = 1;

                    addSymbolTableLine(g_symbol_data);
                }
#line 1551 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 303 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "ArgList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                }
#line 1563 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 311 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "ArgList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1575 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 319 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "ArgList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ",");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1593 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 334 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Arg");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1605 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 342 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Arg");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1617 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 350 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Arg");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1629 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 359 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Declaration");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_symbol_data->name, (yyvsp[0].str_value));
                    strcpy(g_symbol_data->type, (yyvsp[-1].NODE)->child->description);
                    strcpy(g_symbol_data->category, "VARIABLE");
                    g_symbol_data->isFormalArg = 0;

                    if( !verifyDuplicateVariable(g_symbol_data, g_current_scope) )
                        addSymbolTableLine(g_symbol_data);
                    else
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' ja foi declarada.\n", g_line_counter, (yyvsp[0].str_value));
                        g_syntax_error_flag = 1;
                    }
                }
#line 1658 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 384 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Declaration");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));

                    strcpy(g_symbol_data->name, (yyvsp[0].NODE)->child->value);
                    strcpy(g_symbol_data->type, (yyvsp[-1].NODE)->child->description);
                    strcpy(g_symbol_data->category, "VARIABLE");
                    g_symbol_data->isFormalArg = 0;

                    if( !verifyDuplicateVariable(g_symbol_data, g_current_scope) )
                    {
                        addSymbolTableLine(g_symbol_data);
                        if (0 != strcmp((yyvsp[-1].NODE)->child->description, g_expression_type))
                        {
                            printf("Line %d: ERRO SEMANTICO! A variavel '%s' foi declarada como '%s', porem tentou-se atribuir a ela algo do tipo '%s'.\n", g_line_counter, (yyvsp[0].NODE)->child->value, (yyvsp[-1].NODE)->child->description, g_expression_type);
                            g_syntax_error_flag = 1;
                        }
                    }
                    else
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' ja foi declarada.\n", g_line_counter, (yyvsp[0].NODE)->child->value);
                        g_syntax_error_flag = 1;
                    }

                    setValueInSymbolTableEntry((yyvsp[0].NODE)->child->value);
                }
#line 1694 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 417 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Type");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "INT");
                    strcpy(g_desc_and_val->value, "");

                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 1709 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 428 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Type");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "STRING");
                    strcpy(g_desc_and_val->value, "");

                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 1724 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 440 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "CompoundStmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "{");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, "}");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 1744 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 456 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "SYNTAX ERROR");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                    g_syntax_error_flag = 1;
                }
#line 1757 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 466 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StmtList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));
                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1770 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 475 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StmtList");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                }
#line 1782 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 484 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Stmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1794 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 492 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Stmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1806 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 500 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Stmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, ";");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 1822 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 512 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Stmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, ";");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 1838 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 524 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Stmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1850 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 532 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Stmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, ";");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 1866 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 544 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "SYNTAX ERROR");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                    g_syntax_error_flag = 1;
                }
#line 1879 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 553 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "SYNTAX ERROR");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),NULL);
                    g_syntax_error_flag = 1;
                }
#line 1892 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 563 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "WhileStmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "WHILE");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1918 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 586 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "IfStmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "IF");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1944 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 608 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "IfStmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "IF");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-4].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, "ELSE");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 1976 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 637 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "ReturnStmt");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "RETURN");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));

                    saveReturnStmtType((yyval.NODE));
                }
#line 1994 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 652 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                    saveExpressionType((yyvsp[0].NODE));
                }
#line 2007 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 661 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));

                    identifierSemanticCheck((yyvsp[0].NODE)->child->value, "VARIABLE", g_current_scope);

                    saveExpressionType((yyvsp[0].NODE));

                    strcpy(g_temp, getTypeFromTSByIdentifier((yyvsp[0].NODE)->child->value,"VARIABLE", g_current_scope));

                    if (0 != strcmp(strToUpper(g_expression_type), strToUpper(g_temp)))
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' tem tipo '%s', porem '%s' tentou ser atribuido a ela.\n", g_line_counter, (yyvsp[0].NODE)->child->value, getTypeFromTSByIdentifier((yyvsp[0].NODE)->child->value,"VARIABLE", g_current_scope), g_expression_type);
                        g_syntax_error_flag = 1;
                    }
                }
#line 2031 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 681 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                    saveExpressionType((yyvsp[0].NODE));
                }
#line 2044 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 690 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                    saveExpressionType((yyvsp[0].NODE));
                }
#line 2057 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 700 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                    saveExpressionType((yyvsp[0].NODE));
                    if (0 != strcmp(strToUpper(g_expression_type), "INT"))
                    {
                        printf("Line %d: ERRO SEMANTICO! Expressoes de condicionais devem ser resolvidas ao tipo 'int'.\n", g_line_counter);
                        g_syntax_error_flag = 1;
                    }
                }
#line 2075 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 714 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));

                    identifierSemanticCheck((yyvsp[0].NODE)->child->value, "VARIABLE", g_current_scope);

                    // printSyntaxTree($1,1);
                    saveExpressionType((yyvsp[0].NODE));
                    printf("Line %d: ERRO SEMANTICO! Nao sao permitidas atribuicoes em expressoes de condicionais.\n", g_line_counter);
                        g_syntax_error_flag = 1;
                }
#line 2094 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 729 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                    saveExpressionType((yyvsp[0].NODE));
                    if (0 != strcmp(strToUpper(g_expression_type), "INT"))
                    {
                        printf("Line %d: ERRO SEMANTICO! Expressoes de condicionais devem ser resolvidas ao tipo 'int'.\n", g_line_counter);
                        g_syntax_error_flag = 1;
                    }
                }
#line 2112 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 743 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Expr");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                    saveExpressionType((yyvsp[0].NODE));
                    printf("Line %d: ERRO SEMANTICO! Nao sao permitidas concatenacoes de strings em expressoes de condicionais.\n", g_line_counter);
                        g_syntax_error_flag = 1;
                }
#line 2127 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 755 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Attribution");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-2].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "=");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2147 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 772 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Rvalue");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));
                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));
                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2161 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 782 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Rvalue");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2173 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 791 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Compare");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "==");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2187 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 801 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Compare");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "<");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2201 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 811 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Compare");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, ">");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2215 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 821 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Compare");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "<=");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2229 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 831 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Compare");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, ">=");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2243 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 841 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Compare");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "!=");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2257 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 852 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Addition");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, "+");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2275 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 866 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Addition");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, "-");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2293 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 880 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Addition");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2305 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 889 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Multiplication");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, "*");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2323 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 903 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Multiplication");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, "/");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2341 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 917 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Multiplication");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2353 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 926 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Term");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2373 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 942 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Term");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "-");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2389 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 954 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Term");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "+");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2405 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 966 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Term");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[0].NODE));
                }
#line 2417 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 975 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Factor");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    setLastValueByIdentifierName((yyvsp[0].str_value));

                    // verifica se a váriavel foi declarada
                    identifierSemanticCheck((yyvsp[0].str_value), "VARIABLE", g_current_scope);
                }
#line 2436 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 990 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Factor");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "NUMBER");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_last_value_from_st_entry, (yyvsp[0].str_value));
                }
#line 2452 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1002 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "Factor");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "TEXT");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_last_value_from_st_entry, (yyvsp[0].str_value));
                }
#line 2468 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1015 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "FunctionCall");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-3].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    if ( identifierSemanticCheck((yyvsp[-3].str_value), "FUNCTION", "GLOBAL") )
                        functionCallSemanticCheck((yyval.NODE));
                }
#line 2495 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1038 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "FunctionCall");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-5].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, ".");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-3].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "(");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    addChildToTreeNode((yyval.NODE),(yyvsp[-1].NODE));

                    strcpy(g_desc_and_val->description, ")");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    // verifica se a váriavel foi declarada
                    identifierSemanticCheck((yyvsp[-5].str_value), "VARIABLE", g_current_scope);
                    methodCallSemanticCheck((yyval.NODE), (yyvsp[-5].str_value), (yyvsp[-3].str_value), g_current_scope);
                }
#line 2531 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1071 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StringConcat");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ":");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "TEXT");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2551 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1087 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StringConcat");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    addChildToTreeNode((yyval.NODE),(yyvsp[-2].NODE));

                    strcpy(g_desc_and_val->description, ":");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    // verifica se a váriavel foi declarada
                    getTypeFromTSByIdentifier((yyvsp[0].str_value), "VARIABLE", g_current_scope);
                }
#line 2574 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1106 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StringConcat");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "TEXT");
                    strcpy(g_desc_and_val->value, (yyvsp[-2].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, ":");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "TEXT");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));
                }
#line 2596 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1124 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StringConcat");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-2].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, ":");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "TEXT");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    // verifica se a váriavel foi declarada e se o tipo dela é string
                    if (0 != strcmp(getTypeFromTSByIdentifier((yyvsp[-2].str_value), "VARIABLE", g_current_scope), "STRING") )
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' nao e do tipo string para fazer uma concatenacao.\n", g_line_counter, (yyvsp[-2].str_value));
                        g_syntax_error_flag = 1;
                    }
                }
#line 2625 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1149 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StringConcat");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "TEXT");
                    strcpy(g_desc_and_val->value, (yyvsp[-2].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, ":");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    // verifica se a váriavel foi declarada e se o tipo dela é string
                    if (0 != strcmp(getTypeFromTSByIdentifier((yyvsp[0].str_value), "VARIABLE", g_current_scope), "STRING") )
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' nao e do tipo string para fazer uma concatenacao.\n", g_line_counter, (yyvsp[0].str_value));
                        g_syntax_error_flag = 1;
                    }
                }
#line 2654 "090111575.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1174 "090111575.y" /* yacc.c:1646  */
    {
                    strcpy(g_desc_and_val->description, "StringConcat");
                    strcpy(g_desc_and_val->value, "");
                    (yyval.NODE) = addTreeNode(g_desc_and_val);

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[-2].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, ":");
                    strcpy(g_desc_and_val->value, "");
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    strcpy(g_desc_and_val->description, "Identifier");
                    strcpy(g_desc_and_val->value, (yyvsp[0].str_value));
                    addChildToTreeNode((yyval.NODE),addTreeNode(g_desc_and_val));

                    // verifica se a váriavel foi declarada e se o tipo dela é string
                    if (0 != strcmp(getTypeFromTSByIdentifier((yyvsp[-2].str_value), "VARIABLE", g_current_scope), "STRING") )
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' nao e do tipo string para fazer uma concatenacao.\n", g_line_counter, (yyvsp[-2].str_value));
                        g_syntax_error_flag = 1;
                    }
                    // verifica se a váriavel foi declarada e se o tipo dela é string
                    if (0 != strcmp(getTypeFromTSByIdentifier((yyvsp[0].str_value), "VARIABLE", g_current_scope), "STRING") )
                    {
                        printf("Line %d: ERRO SEMANTICO! A variavel '%s' nao e do tipo string para fazer uma concatenacao.\n", g_line_counter, (yyvsp[0].str_value));
                        g_syntax_error_flag = 1;
                    }
                }
#line 2689 "090111575.tab.c" /* yacc.c:1646  */
    break;


#line 2693 "090111575.tab.c" /* yacc.c:1646  */
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
#line 1204 "090111575.y" /* yacc.c:1906  */


void printSymbolTable()
{
    symbol_table_struct *aux = g_symbol_table_first_line;

    printf("\n\nTabela de simbolos:\n");

    if(0 < g_symbol_table_size)
    {
        while(aux != NULL)
        {
            printf("\nSCOPE: %s \nCATEGORY: %s\nTYPE: %s \nNAME: %s\nVALUE: %s\nisFormalArg: %d\n", aux->scope, aux->category, aux->type, aux->name, aux->value, aux->isFormalArg);
            // printf("\nCATEGORY: %s\nTYPE: %s \nNAME: %s\nSCOPE: %s \nVALUE: %s\n", aux->category, aux->type, aux->name, aux->scope, aux->value);
            // printf("\nNAME: %s\nSCOPE: %s \nTYPE: %s \nCATEGORY: %s\n", aux->name,aux->scope,aux->type,aux->category);
            aux = aux->next;
        }
        printf("\n");
    }
}

void setLastValueByIdentifierName(char * var_name)
{
	symbol_table_struct *aux = g_symbol_table_first_line;

	if(0 < g_symbol_table_size)
	{
        while(aux != NULL)
        {
            if(strcmp(aux->name,var_name) == 0)
            {
            	strcpy(g_last_value_from_st_entry , aux->value);
            }
            aux = aux->next;
        }
    }
}

void setValueInSymbolTableEntry(char * var_name)
{
    symbol_table_struct *aux;
    aux = g_symbol_table_first_line;

    if(0 < g_symbol_table_size)
    {
        while(aux != NULL)
        {
            if(strcmp(aux->name,var_name) == 0)
            {
                strcpy(aux->value , g_last_value_from_st_entry);
            }

            aux = aux->next;
        }
    }
}

//Cria uma nova linha na Tabela de Símbolos e aponta o elemento anterior e o que segue
void addSymbolTableLine(data_for_the_symbol_table * data)
{
    symbol_table_struct* line = (symbol_table_struct *) malloc (sizeof(symbol_table_struct));

    if(0 == g_symbol_table_size)
    {
        // preenche a entrada
        strcpy(line->scope,g_current_scope);
        strcpy(line->name ,data->name);
        strcpy(line->type,data->type);
        strcpy(line->category ,data->category);
        line->isFormalArg = data->isFormalArg;


        line->previous = NULL;
        line->next = NULL;

        // controle:
        g_symbol_table_size++;
        g_symbol_table_current_line = line;
        g_symbol_table_first_line = line;
    }
    else
    {
        strcpy(line->scope,g_current_scope);
        strcpy(line->name ,data->name);
        strcpy(line->type,data->type);
        strcpy(line->category ,data->category);
        line->isFormalArg = data->isFormalArg;

        line->previous = g_symbol_table_current_line;
        line->next = NULL;

        g_symbol_table_current_line->next = line;
        g_symbol_table_size++;
        g_symbol_table_current_line = line;
    }
}

void setCurrentScope(const char *scopeName)
{
    symbol_table_struct *aux;

    // printf("setando o scopo para %s\n", scopeName);

    if(strcmp(scopeName,"") !=0)
        strcpy(g_current_scope,scopeName);

    aux = g_symbol_table_first_line;

    if(0 < g_symbol_table_size)
    {
        while(aux != NULL)
        {
            if( strcmp(aux->category,"VARIABLE") == 0 && strcmp(g_current_scope,"GLOBAL") != 0 && strcmp(aux->scope,"-") == 0 && strcmp(scopeName,"-") != 0 )
                strcpy(aux->scope,scopeName);
            aux = aux->next;
        }
    }
}

void addNodeToListOfNodeBrothers(NODE *root, NODE *item)
{
    int flag = 0;
    NODE *temp;

    if(item != NULL)
    {
        // se é o primeiro filho
        if (root->brother == NULL)
        {
            root->brother = item;
        }
        // se não é o primeiro filho
        else
        {
            //add a new child in a child list
            temp = root->brother;

            while(0 == flag)
            {
                if(temp->brother != NULL)
                    temp = temp->brother;
                else
                    flag = 1;
            }

            //effect of the add
            temp->brother = item;
        }
    }
}

// cria um novo nodo para ser preenchido depois. aloca memória pra ele, basicamente
NODE * addTreeNode(description_and_value_data_for_the_tree *g_desc_and_val)
{
    NODE *node;

    node = (NODE *) malloc (sizeof(NODE));

    strcpy(node->description , g_desc_and_val->description);
    strcpy(node->value , g_desc_and_val->value);

    node->node_brother_count = 0;
    node->father = NULL;
    node->child = NULL;
    node->brother = NULL;

    return node;
}

void addChildToTreeNode(NODE *root, NODE *item)
{
    int flag = 0;
    NODE *temp;

    if(item != NULL)
    {
        // se é o primeiro filho
        if (root->child == NULL)
        {
            item->father = root;
            root->child = item;
        }
        // se não é o primeiro filho
        else
        {
            addNodeToListOfNodeBrothers(root->child, item);
        }

        root->node_brother_count++;
        temp = item;

        // atualiza quem é o nodo pai deste
        while(flag == 0)
        {
            if(temp != NULL)
            {
                temp = temp->brother;

                if(temp != NULL)
                {
                    temp->father = root;
                }
            }
            else
            {
                flag = 1;
            }
        }
    }
}

void printSyntaxTree(NODE* root, int identation_counter)
{
    NODE* aux = NULL;
    int i=0;

    if (root != NULL)
    {
        for(i = 0; i < identation_counter; i++) { printf("|   "); }

        printf("%s %s\n", root->description, root->value);

        aux = root->child;

        // chamada recursiva para imprimir os filhos.
        while (aux != NULL)
        {
            printSyntaxTree(aux, identation_counter + 1);
            aux = aux->brother;
        }
    }
}

/* Epílogo ( código no final do arquivo ) */
/* Chamado quando há um erro sintático na entrada . */
void yyerror ( char const *s)
{
    printf ("Line %d: %s\n", g_line_counter, s);
}

int main ( void )
{
    g_desc_and_val = (description_and_value_data_for_the_tree*) malloc(sizeof(description_and_value_data_for_the_tree));
    g_symbol_data = (data_for_the_symbol_table*) malloc(sizeof(data_for_the_symbol_table));

    /* Chama o parser . */
    return yyparse ();
}
