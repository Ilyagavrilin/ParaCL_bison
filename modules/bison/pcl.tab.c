/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pcl.y"

    #include <iostream>
    #include <list>
    #include <string>
    #include <vector>
    #include <typeinfo>
    #include <type_traits>

    #include "../paracl/leaf.hpp"
    #include "../paracl/nonleaf.hpp"
    #include "../paracl/ptree.hpp"
    #include "../paracl/stack.hpp"
    #include "../paracl/memory_manager.hpp"

    #include <boost/program_options.hpp>
    namespace po = boost::program_options;
    #include <iterator>
    #include <fstream>
   
    extern int yylineno;
    extern int yylex();
    extern FILE * yyin;
    void yyerror(char *s) {
        std::cerr << s << ", line " << yylineno << std::endl;
        exit(1);
    }
    std::vector<ptree::PTree*> blocks;
    ptree::Block* tmp;
    unsigned long offset = 0;
    int blk_num = 1;

    typedef struct {
        std::string str;
        ptree::PTree* oper;
        ptree::Block* blk;
        ptree::Condition* cnd;
        
    } YYSTYPE;
    #define YYSTYPE YYSTYPE

    ptree::Block* wrap_block(ptree::PTree* statement) {
        ptree::Block* result = dynamic_cast<ptree::Block*> (statement);
        if (!result) {
            result = new ptree::Block{};
            result->push_expression(statement);
        }
        return result;
    }


#line 122 "pcl.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "pcl.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_PRINT = 6,                      /* PRINT  */
  YYSYMBOL_INPUT = 7,                      /* INPUT  */
  YYSYMBOL_MOD = 8,                        /* MOD  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_LE = 10,                        /* LE  */
  YYSYMBOL_GE = 11,                        /* GE  */
  YYSYMBOL_NE = 12,                        /* NE  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_GREAT = 16,                     /* GREAT  */
  YYSYMBOL_LESS = 17,                      /* LESS  */
  YYSYMBOL_NUM = 18,                       /* NUM  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_P_PLUS = 20,                    /* P_PLUS  */
  YYSYMBOL_P_MINUS = 21,                   /* P_MINUS  */
  YYSYMBOL_SEQUENCE = 22,                  /* SEQUENCE  */
  YYSYMBOL_LPAR = 23,                      /* LPAR  */
  YYSYMBOL_RPAR = 24,                      /* RPAR  */
  YYSYMBOL_LBR = 25,                       /* LBR  */
  YYSYMBOL_RBR = 26,                       /* RBR  */
  YYSYMBOL_LCB = 27,                       /* LCB  */
  YYSYMBOL_RCB = 28,                       /* RCB  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_PROGRAM = 35,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 36,                     /* BLOCK  */
  YYSYMBOL_OPS = 37,                       /* OPS  */
  YYSYMBOL_SCOPE = 38,                     /* SCOPE  */
  YYSYMBOL_OP1 = 39,                       /* OP1  */
  YYSYMBOL_OP2 = 40,                       /* OP2  */
  YYSYMBOL_COND = 41,                      /* COND  */
  YYSYMBOL_OP = 42,                        /* OP  */
  YYSYMBOL_EXPR = 43,                      /* EXPR  */
  YYSYMBOL_EXPR1 = 44,                     /* EXPR1  */
  YYSYMBOL_EXPR2 = 45,                     /* EXPR2  */
  YYSYMBOL_EXPR3 = 46,                     /* EXPR3  */
  YYSYMBOL_TERM = 47,                      /* TERM  */
  YYSYMBOL_VAR = 48,                       /* VAR  */
  YYSYMBOL_VAL = 49                        /* VAL  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   96

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  80

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    70,    73,    74,    77,    79,    80,    81,
      82,    85,    86,    87,    90,    92,    92,    94,    95,    96,
      98,    99,   100,   103,   104,   105,   106,   107,   108,   109,
     112,   113,   114,   117,   118,   119,   120,   123,   126,   127,
     128,   129,   130,   131,   132,   133
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "WHILE",
  "PRINT", "INPUT", "MOD", "EQ", "LE", "GE", "NE", "AND", "OR", "NOT",
  "GREAT", "LESS", "NUM", "ID", "P_PLUS", "P_MINUS", "SEQUENCE", "LPAR",
  "RPAR", "LBR", "RBR", "LCB", "RCB", "ASSIGN", "PLUS", "MINUS", "MUL",
  "DIV", "$accept", "PROGRAM", "BLOCK", "OPS", "SCOPE", "OP1", "OP2",
  "COND", "OP", "EXPR", "EXPR1", "EXPR2", "EXPR3", "TERM", "VAR", "VAL", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      15,   -19,   -17,    17,   -61,    42,   -61,   -61,    17,    15,
      42,    29,   -61,    15,   -61,   -61,   -61,   -61,    19,    50,
      69,   -15,    23,    46,   -61,    17,    17,   -61,    48,   -61,
      13,    11,   -61,   -61,   -61,   -61,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   -61,
     -61,    17,    26,   -61,    28,   -61,   -61,    69,    69,   -15,
     -15,   -15,   -15,   -15,   -15,    23,    23,   -61,   -61,   -61,
     -61,    15,    15,    43,   -61,   -61,   -61,    15,   -61,   -61
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    39,     0,    38,    37,     0,     0,
       0,     0,     2,     3,     7,    15,    16,     4,     0,    17,
      20,    23,    30,    45,    33,     0,     0,    19,    45,    41,
       0,     0,    40,     1,     5,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,     0,     0,    14,     0,    44,     6,    21,    22,    24,
      25,    26,    27,    28,    29,    31,    32,    36,    34,    35,
      18,     0,     0,    15,    11,    10,    13,     0,     9,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,    45,   -61,   -61,   -60,   -58,    32,   -12,     2,
     -61,    47,    49,    51,     0,    -3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    16,    52,    17,    18,
      19,    20,    21,    22,    28,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    34,    29,    23,    25,    27,    26,    32,    23,    23,
      30,    73,    75,    23,    76,    44,    45,    78,     1,    79,
       2,     3,     4,     3,     4,    23,    23,    53,    53,    33,
       5,    46,     5,     6,     7,     6,     7,    55,     8,    56,
       8,    35,     9,    67,    68,    69,    10,    77,    10,     4,
      71,    23,    72,    70,    31,    47,    48,     5,    54,    74,
       6,     7,     0,    36,    37,     8,    49,    50,    49,    50,
       0,    23,    23,    10,     0,    51,     0,    23,    38,    39,
      40,    41,     0,    57,    58,    42,    43,    59,    60,    61,
      62,    63,    64,     0,     0,    65,    66
};

static const yytype_int8 yycheck[] =
{
       0,    13,     5,     3,    23,     3,    23,    10,     8,     9,
       8,    71,    72,    13,    72,    30,    31,    77,     3,    77,
       5,     6,     7,     6,     7,    25,    26,    25,    26,     0,
      15,     8,    15,    18,    19,    18,    19,    24,    23,    28,
      23,    22,    27,    46,    47,    48,    31,     4,    31,     7,
      24,    51,    24,    51,     9,    32,    33,    15,    26,    71,
      18,    19,    -1,    13,    14,    23,    20,    21,    20,    21,
      -1,    71,    72,    31,    -1,    29,    -1,    77,     9,    10,
      11,    12,    -1,    36,    37,    16,    17,    38,    39,    40,
      41,    42,    43,    -1,    -1,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     7,    15,    18,    19,    23,    27,
      31,    35,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    46,    47,    48,    49,    23,    23,    43,    48,    49,
      43,    36,    49,     0,    42,    22,    13,    14,     9,    10,
      11,    12,    16,    17,    30,    31,     8,    32,    33,    20,
      21,    29,    41,    43,    41,    24,    28,    45,    45,    46,
      46,    46,    46,    46,    46,    47,    47,    49,    49,    49,
      43,    24,    24,    39,    42,    39,    40,     4,    39,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    37,    37,    38,    39,    39,    39,
      39,    40,    40,    40,    41,    42,    42,    43,    43,    43,
      44,    44,    44,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    46,    47,    47,    47,    47,    48,    49,    49,
      49,    49,    49,    49,    49,    49
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     3,     1,     2,     7,
       5,     5,     7,     5,     1,     1,     1,     1,     3,     2,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     1,
       2,     2,     2,     2,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3: /* BLOCK: OPS  */
#line 70 "pcl.y"
                                        { tmp = new ptree::Block(std::move(*(yyvsp[0].blk))); tmp->update_blk_info(offset++, blk_num++); blocks.push_back(tmp); (yyval.blk) = tmp;}
#line 1204 "pcl.tab.c"
    break;

  case 4: /* OPS: OP  */
#line 73 "pcl.y"
                                        {tmp = new ptree::Block(); tmp->push_expression((yyvsp[0].oper)); (yyval.blk) = tmp;}
#line 1210 "pcl.tab.c"
    break;

  case 5: /* OPS: OPS OP  */
#line 74 "pcl.y"
                                        {tmp = new ptree::Block(std::move(*(yyvsp[-1].blk))); tmp->push_expression((yyvsp[0].oper)); (yyval.blk) = tmp;}
#line 1216 "pcl.tab.c"
    break;

  case 6: /* SCOPE: LCB BLOCK RCB  */
#line 77 "pcl.y"
                                          { (yyval.blk) = (yyvsp[-1].blk); }
#line 1222 "pcl.tab.c"
    break;

  case 7: /* OP1: SCOPE  */
#line 79 "pcl.y"
                                          {(yyval.oper) = (yyvsp[0].blk);}
#line 1228 "pcl.tab.c"
    break;

  case 8: /* OP1: EXPR SEQUENCE  */
#line 80 "pcl.y"
                                          { (yyval.oper) = new ptree::Expression(nullptr, (yyvsp[-1].oper));}
#line 1234 "pcl.tab.c"
    break;

  case 9: /* OP1: IF LPAR COND RPAR OP1 ELSE OP1  */
#line 81 "pcl.y"
                                          { (yyval.oper) = new ptree::IfBlk((yyvsp[-4].cnd), nullptr, wrap_block((yyvsp[0].oper)), wrap_block((yyvsp[-2].oper)));}
#line 1240 "pcl.tab.c"
    break;

  case 10: /* OP1: WHILE LPAR COND RPAR OP1  */
#line 82 "pcl.y"
                                          { (yyval.oper) = new ptree::WhileBlk((yyvsp[-2].cnd), nullptr, wrap_block((yyvsp[0].oper)));}
#line 1246 "pcl.tab.c"
    break;

  case 11: /* OP2: IF LPAR COND RPAR OP  */
#line 85 "pcl.y"
                                          { (yyval.oper) = new ptree::IfBlk((yyvsp[-2].cnd), nullptr, nullptr, wrap_block((yyvsp[0].oper))); }
#line 1252 "pcl.tab.c"
    break;

  case 12: /* OP2: IF LPAR COND RPAR OP1 ELSE OP2  */
#line 86 "pcl.y"
                                          { (yyval.oper) = new ptree::IfBlk((yyvsp[-4].cnd), nullptr, wrap_block((yyvsp[0].oper)), wrap_block((yyvsp[-2].oper))); }
#line 1258 "pcl.tab.c"
    break;

  case 13: /* OP2: WHILE LPAR COND RPAR OP2  */
#line 87 "pcl.y"
                                          { (yyval.oper) = new ptree::WhileBlk((yyvsp[-2].cnd), nullptr, wrap_block((yyvsp[0].oper))); }
#line 1264 "pcl.tab.c"
    break;

  case 14: /* COND: EXPR  */
#line 90 "pcl.y"
                                          {(yyval.cnd) = new ptree::Condition(nullptr, (yyvsp[0].oper));}
#line 1270 "pcl.tab.c"
    break;

  case 18: /* EXPR: VAR ASSIGN EXPR  */
#line 95 "pcl.y"
                                         { (yyval.oper) = new ptree::Assign(nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1276 "pcl.tab.c"
    break;

  case 19: /* EXPR: PRINT EXPR  */
#line 96 "pcl.y"
                                         { (yyval.oper) = new ptree::Output(nullptr, (yyvsp[0].oper));}
#line 1282 "pcl.tab.c"
    break;

  case 21: /* EXPR1: EXPR1 AND EXPR2  */
#line 99 "pcl.y"
                                       { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::LOG_AND, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1288 "pcl.tab.c"
    break;

  case 22: /* EXPR1: EXPR1 OR EXPR2  */
#line 100 "pcl.y"
                                       { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::LOG_OR, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1294 "pcl.tab.c"
    break;

  case 24: /* EXPR2: EXPR2 EQ EXPR3  */
#line 104 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::EQUAL, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper));}
#line 1300 "pcl.tab.c"
    break;

  case 25: /* EXPR2: EXPR2 LE EXPR3  */
#line 105 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::LESS_EQUAL, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1306 "pcl.tab.c"
    break;

  case 26: /* EXPR2: EXPR2 GE EXPR3  */
#line 106 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::MORE_EQUAL, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper));}
#line 1312 "pcl.tab.c"
    break;

  case 27: /* EXPR2: EXPR2 NE EXPR3  */
#line 107 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::NON_EQUAL, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper));}
#line 1318 "pcl.tab.c"
    break;

  case 28: /* EXPR2: EXPR2 GREAT EXPR3  */
#line 108 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::MORE, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1324 "pcl.tab.c"
    break;

  case 29: /* EXPR2: EXPR2 LESS EXPR3  */
#line 109 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::LESS, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1330 "pcl.tab.c"
    break;

  case 31: /* EXPR3: EXPR3 PLUS TERM  */
#line 113 "pcl.y"
                                         { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::ADDITION, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1336 "pcl.tab.c"
    break;

  case 32: /* EXPR3: EXPR3 MINUS TERM  */
#line 114 "pcl.y"
                                          { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::SUBTRACTION, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1342 "pcl.tab.c"
    break;

  case 34: /* TERM: TERM MUL VAL  */
#line 118 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::MULTIPLICATION, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1348 "pcl.tab.c"
    break;

  case 35: /* TERM: TERM DIV VAL  */
#line 119 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::DIVISION, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper)); }
#line 1354 "pcl.tab.c"
    break;

  case 36: /* TERM: TERM MOD VAL  */
#line 120 "pcl.y"
                                        { (yyval.oper) = new ptree::BinOp(ptree::BinOpType::REMAINDER, nullptr, (yyvsp[-2].oper), (yyvsp[0].oper));}
#line 1360 "pcl.tab.c"
    break;

  case 37: /* VAR: ID  */
#line 123 "pcl.y"
                                        { (yyval.oper) = new ptree::NameInt(nullptr, 0, (yyvsp[0].str));
                                        }
#line 1367 "pcl.tab.c"
    break;

  case 38: /* VAL: NUM  */
#line 126 "pcl.y"
                                        { (yyval.oper) = new ptree::Imidiate<int>(nullptr, std::stoi((yyvsp[0].str))); /*std::cout << $1 << std::endl;*/}
#line 1373 "pcl.tab.c"
    break;

  case 39: /* VAL: INPUT  */
#line 127 "pcl.y"
                                        { (yyval.oper) = new ptree::Reserved(nullptr, ptree::Reserved::Types::Input);}
#line 1379 "pcl.tab.c"
    break;

  case 40: /* VAL: MINUS VAL  */
#line 128 "pcl.y"
                                        { (yyval.oper) = new ptree::UnOp(ptree::UnOpType::MINUS, nullptr, (yyvsp[0].oper));}
#line 1385 "pcl.tab.c"
    break;

  case 41: /* VAL: NOT VAL  */
#line 129 "pcl.y"
                                        { (yyval.oper) = new ptree::UnOp(ptree::UnOpType::NOT, nullptr, (yyvsp[0].oper)); }
#line 1391 "pcl.tab.c"
    break;

  case 42: /* VAL: VAR P_PLUS  */
#line 130 "pcl.y"
                                        { (yyval.oper) = new ptree::UnOp(ptree::UnOpType::POST_ADDITION, nullptr, (yyvsp[-1].oper)); }
#line 1397 "pcl.tab.c"
    break;

  case 43: /* VAL: VAR P_MINUS  */
#line 131 "pcl.y"
                                        { (yyval.oper) = new ptree::UnOp(ptree::UnOpType::POST_SUBTRACTION, nullptr, (yyvsp[-1].oper)); }
#line 1403 "pcl.tab.c"
    break;

  case 44: /* VAL: LPAR EXPR RPAR  */
#line 132 "pcl.y"
                                        { (yyval.oper) = (yyvsp[-1].oper); }
#line 1409 "pcl.tab.c"
    break;


#line 1413 "pcl.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 140 "pcl.y"

int main(int ac, char* av[]) { 
    try {
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help, h", "shows help option")
        ("version, v", "shows program version")
        ("build, b", "only builds program without execute")
        ("dump-tree, d", "dumps built tree to file default: out.dot")
        ("dump-out", po::value<std::string>(), "sets output file name")
        ("input-file", po::value<std::string>(), "input file")
    ;
    po::positional_options_description p;
    p.add("input-file", -1);

    po::variables_map vm;        
    po::store(po::command_line_parser(ac, av).options(desc).positional(p).run(), vm);
    po::notify(vm);    

    if (vm.count("help")) {
        std::cout << desc << std::endl;
        return 0;
    }
    if (vm.count("version")) {
        std::cout << "ParaCL interpreter 1.0.1"<< std::endl;
        std::cout << "Authors: Ilya Gavrilin and Eugene Bogdanov" << std::endl;
        std::cout <<  std::endl;
        std::cout << "This is free software;There is NO warranty;" << std::endl;
        std::cout << "not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE." << std::endl;
        return 0;
    }

    if (!vm.count("input-file")) {
        std::cout << "No input file provided" << std::endl;
        return -1;
    }
    FILE* fh;
    if ((fh = fopen(vm["input-file"].as<std::string>().c_str(), "r"))) yyin = fh;
    
    int res = yyparse();
    ptree::MemManager  memfunc = ptree::manage_tree_mem(blocks.back());
    if (vm.count("dump-tree")) {
        std::string dump = "digraph G {\n";
        dump += (blocks.back())->dump();
        dump += "}\n";
        
        std::string out = "out.dot";
        if (vm.count("dump-out")) out = vm["dump-out"].as<std::string>();
        
        std::ofstream f_out;
        f_out.open(out, std::ios::out);
        f_out << dump;
        f_out.close();

    }
    
    if (vm.count("build")) {
        std::cout << "Build finished, no error catched" << std::endl;
        return 0;
    } 

    ptree::Stack* stack = new ptree::Stack{memfunc.getmaxstacksize()};
    (blocks.back())->execute(stack);
    }
    catch(std::exception& e) {
        std::cerr << "error: " << e.what() << std::endl;
        return 1;
    }
    catch(...) {
        std::cerr << "Exception of unknown type!" << std::endl;
    }

    return 0;
}
