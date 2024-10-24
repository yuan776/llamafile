/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --output-file=llamafile/is_keyword_c_constant.c llamafile/is_keyword_c_constant.gperf  */
/* Computed positions: -k'1,3-6,8-9,11,13,15,20,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "llamafile/is_keyword_c_constant.gperf"

#include <string.h>

#define TOTAL_KEYWORDS 776
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 36
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 3941
/* maximum key range = 3939, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,   10,  100,
       675,  480,  430,  830,  795,  955,  825,   85, 3942, 3942,
      3942, 3942, 3942, 3942, 3942,   10,   45,  500,   95,   75,
        10,   90,  155,    0, 1589,    5,   40,   15,    0,  115,
         5,   50,  185,    0,    0,  245,  490,  300,   10,   80,
      1421,    0, 3942, 3942, 3942,    0,  430,    5,  405,    5,
       885,   10,  805,    5,    5,  510, 3942, 3942,  600,    5,
        10,  790,   20, 3942,   85,    0,   10,  595,    0,    0,
       315, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942, 3942,
      3942, 3942, 3942, 3942, 3942, 3942, 3942
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[19]];
      /*FALLTHROUGH*/
      case 19:
      case 18:
      case 17:
      case 16:
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]+1];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const char *
is_keyword_c_constant (register const char *str, register size_t len)
{
  static const char * const wordlist[] =
    {
      "", "", "",
      "NAN",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "",
      "__SSSE3__",
      "", "", "", "",
      "M_PI",
      "",
      "__INTMAX_WIDTH__",
      "", "", "",
      "INTPTR_MIN",
      "", "",
      "__TIME__",
      "", "", "", "", "", "", "", "", "",
      "",
      "__APPLE__",
      "", "", "", "", "",
      "INTPTR_MAX",
      "", "",
      "__TIMESTAMP__",
      "", "", "", "",
      "__LINE__",
      "", "", "",
      "FLT_NORM_MAX",
      "",
      "INT_LEAST8_MIN",
      "", "", "",
      "__FILE__",
      "", "",
      "FP_FAST_FMA",
      "FP_FAST_FMAF",
      "", "", "", "",
      "INT_MAX",
      "SEM_NSEMS_MAX",
      "",
      "TZNAME_MAX",
      "",
      "TMP_MAX",
      "",
      "INT_LEAST8_MAX",
      "", "",
      "FLT_MAX",
      "", "", "", "",
      "PRIXMAX",
      "", "", "", "",
      "FLT_TRUE_MIN",
      "EOF",
      "__SETLB__",
      "", "",
      "FP_FAST_FMAL",
      "", "", "", "", "", "", "", "",
      "FP_ILOGBNAN",
      "",
      "PIPE_MAX",
      "", "", "", "",
      "NAME_MAX",
      "", "", "",
      "__INT8_MAX__",
      "__DATE__",
      "NULL",
      "", "", "", "",
      "FP_ILOGB0",
      "INTMAX_MIN",
      "", "",
      "LDBL_MIN",
      "", "", "", "",
      "LONG_MIN",
      "", "",
      "FP_NAN",
      "",
      "LINE_MAX",
      "", "",
      "BC_BASE_MAX",
      "", "", "",
      "INTMAX_MAX",
      "",
      "LDBL_MIN_EXP",
      "LDBL_MAX",
      "", "", "", "",
      "LONG_MAX",
      "", "", "",
      "LDBL_MAX_EXP",
      "__BASE_FILE__",
      "", "",
      "FLT_MAX_EXP",
      "__NO_SETLB__",
      "M_E",
      "INT_FAST16_MIN",
      "", "",
      "FLT_MANT_DIG",
      "", "", "", "",
      "ARG_MAX",
      "", "", "", "", "",
      "BC_STRING_MAX",
      "NSIG",
      "BC_DIM_MAX",
      "FLT_EPSILON",
      "DBL_NORM_MAX",
      "PATH_MAX",
      "INT_FAST16_MAX",
      "", "", "",
      "SHRT_MIN",
      "", "", "", "",
      "__STDC__",
      "FLT_MAX_10_EXP",
      "NL_TEXTMAX",
      "", "", "", "", "", "", "", "",
      "NL_MSGMAX",
      "NL_LANGMAX",
      "__ANDROID__",
      "DBL_MAX",
      "SHRT_MAX",
      "__HAIKU__",
      "", "", "",
      "OPEN_MAX",
      "", "",
      "SYMLOOP_MAX",
      "DBL_TRUE_MIN",
      "",
      "FP_NORMAL",
      "", "", "",
      "P_tmpdir",
      "",
      "__POPCNT__",
      "",
      "TTY_NAME_MAX",
      "", "",
      "LDBL_MIN_10_EXP",
      "", "", "", "", "", "",
      "HLF_MAX",
      "", "",
      "LDBL_MAX_10_EXP",
      "", "", "", "", "",
      "__INTPTR_WIDTH__",
      "",
      "UINT_MIN",
      "", "", "", "", "",
      "__INTPTR_MAX__",
      "",
      "FP_INFINITE",
      "LDBL_EPSILON",
      "LONG_LONG_MIN",
      "", "",
      "_IONBF",
      "", "",
      "FLT_RADIX",
      "",
      "M_LN10",
      "",
      "UINT_MAX",
      "",
      "__LINKER__",
      "_IOFBF",
      "FILENAME_MAX",
      "",
      "__EMSCRIPTEN__",
      "", "", "",
      "LONG_LONG_MAX",
      "", "", "", "", "", "",
      "MB_LEN_MAX",
      "DBL_MAX_EXP",
      "", "", "", "", "",
      "DBL_MANT_DIG",
      "", "", "", "", "",
      "__ASSEMBLER__",
      "",
      "FLT_ROUNDS",
      "_IOLBF",
      "",
      "WINT_MIN",
      "", "",
      "DBL_EPSILON",
      "", "", "", "", "", "", "", "", "",
      "__BIGGEST_ALIGNMENT__",
      "", "",
      "DBL_MAX_10_EXP",
      "__PTRDIFF_MAX__",
      "", "",
      "WINT_MAX",
      "__XSAVE__",
      "",
      "UINTMAX_MIN",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "",
      "UINTMAX_MAX",
      "", "", "", "", "",
      "__STDC_LIB_EXT1__",
      "",
      "NL_SETMAX",
      "", "", "", "", "", "", "", "", "",
      "UINT_FAST8_MAX",
      "", "", "", "",
      "SIG_ATOMIC_MIN",
      "", "", "", "",
      "__STDC_MB_MIGHT_NEQ_WC__",
      "__STDC_DEC_FP__",
      "", "", "", "",
      "ATEXIT_MAX",
      "", "",
      "LDBL_DIG",
      "NL_ARGMAX",
      "",
      "ATOMIC_FLAG_INIT",
      "SCNxMAX",
      "",
      "SIG_ATOMIC_MAX",
      "__RDSEED__",
      "",
      "PRIxMAX",
      "", "", "",
      "PTRDIFF_MIN",
      "", "", "", "",
      "UINT_LEAST16_MAX",
      "",
      "HOST_NAME_MAX",
      "", "", "", "",
      "LDBL_MANT_DIG",
      "",
      "FLT_HAS_SUBNORM",
      "", "", "", "",
      "__RX_ALLOW_STRING_INSNS__",
      "PTRDIFF_MAX",
      "", "", "", "", "", "",
      "EXPR_NEST_MAX",
      "", "", "", "", "", "", "", "", "",
      "__GNUC__",
      "WEOF",
      "__NO_LIW__",
      "", "", "", "", "", "", "", "",
      "__STDC_NO_ATOMICS__",
      "", "", "", "", "", "", "",
      "PRIXPTR",
      "__FAST_MATH__",
      "",
      "FLT_DECIMAL_DIG",
      "", "", "", "", "", "",
      "__XXX__",
      "__INT32_MAX__",
      "",
      "__PTX_SM__",
      "",
      "__FMA__",
      "", "", "", "",
      "__FUNCTION__",
      "", "", "", "",
      "__ppc__",
      "", "", "", "", "",
      "LDBL_NORM_MAX",
      "",
      "MATH_ERRNO",
      "__MFENTRY__",
      "", "", "",
      "NZERO",
      "",
      "__BMI__",
      "__GNUG__",
      "", "", "", "", "", "", "", "",
      "__ABM__",
      "", "",
      "INT_LEAST64_MIN",
      "__SUPPORT_SNAN__",
      "__SSE__",
      "__SSE3__",
      "",
      "__VA_OPT__",
      "",
      "__PIE__",
      "__ORDER_LITTLE_ENDIAN__",
      "__STDC_NO_THREADS__",
      "",
      "UINTPTR_MIN",
      "__AES__",
      "",
      "__BYTE_ORDER__",
      "", "", "",
      "__UINT8_MAX__",
      "",
      "INT_LEAST64_MAX",
      "",
      "__arm__",
      "__MACH__",
      "",
      "__INT_LEAST8_WIDTH__",
      "",
      "__SGX__",
      "__UINT_FAST8_MAX__",
      "__GNUC_GNU_INLINE__",
      "DBL_HAS_SUBNORM",
      "UINTPTR_MAX",
      "",
      "__INT_LEAST8_MAX__",
      "", "",
      "__chibicc__",
      "",
      "__BMI2__",
      "INT_FAST32_MIN",
      "__UINTMAX_MAX__",
      "",
      "__ADX__",
      "__mips__",
      "", "", "", "", "",
      "FOPEN_MAX",
      "__INT_FAST16_WIDTH__",
      "",
      "__ELF__",
      "__SSE2__",
      "", "", "", "",
      "__INT_FAST16_MAX__",
      "INT_FAST32_MAX",
      "__STDC_HOSTED__",
      "",
      "__WINT_MIN__",
      "",
      "__GNUC_MINOR__",
      "", "", "", "", "",
      "ULLONG_MIN",
      "",
      "__WINT_MAX__",
      "__VAES__",
      "",
      "DBL_DECIMAL_DIG",
      "LDBL_HAS_SUBNORM",
      "SCNiMAX",
      "",
      "__RDRND__",
      "", "",
      "PRIiMAX",
      "",
      "DELAYTIMER_MAX",
      "__PCLMUL__",
      "",
      "__HIP__",
      "_COSMO_SOURCE",
      "",
      "ULLONG_MAX",
      "",
      "__SHA__",
      "", "",
      "__ORDER_PDP_ENDIAN__",
      "", "", "", "",
      "__MSVCRT__",
      "",
      "CLK_TCK",
      "", "", "",
      "NDEBUG",
      "__TM_FENCE__",
      "",
      "LOGIN_NAME_MAX",
      "RE_DUP_MAX",
      "", "", "",
      "__LONG_WIDTH__",
      "__NetBSD__",
      "", "", "",
      "true",
      "", "", "", "", "", "", "", "",
      "LONG_BIT",
      "__GLIBC__",
      "", "", "", "",
      "__FATCOSMOCC__",
      "",
      "__VA_ARGS__",
      "",
      "__STDC_ISO_10646__",
      "", "", "", "",
      "__SIG_ATOMIC_MIN__",
      "",
      "__SIG_ATOMIC_WIDTH__",
      "", "", "", "", "", "",
      "__NO_MATH_ERRNO__",
      "__SIG_ATOMIC_MAX__",
      "", "", "", "",
      "__ARM_FP_FAST",
      "", "", "",
      "SCNuMAX",
      "__s390__",
      "__s390x__",
      "", "",
      "PRIuMAX",
      "", "", "", "", "", "",
      "LLONG_MIN",
      "",
      "_BSD_SOURCE",
      "", "",
      "HUGE_VALF",
      "__CYGWIN__",
      "", "",
      "__INT_WIDTH__",
      "", "", "",
      "BC_SCALE_MAX",
      "", "", "", "", "",
      "CHAR_MIN",
      "", "", "",
      "__STDC_WANT_LIB_EXT1__",
      "HUGE_VAL",
      "", "", "", "",
      "__INT16_MAX__",
      "LLONG_MAX",
      "__UINTPTR_MAX__",
      "COLL_WEIGHTS_MAX",
      "",
      "LDBL_TRUE_MIN",
      "", "", "",
      "__CHAR_BIT__",
      "CHAR_MAX",
      "",
      "__UINT_LEAST16_MAX__",
      "", "", "", "",
      "__ORDER_BIG_ENDIAN__",
      "", "", "", "", "", "", "",
      "__RX_DISALLOW_STRING_INSNS__",
      "__CLFLUSHOPT__",
      "", "", "", "", "", "", "", "", "",
      "HUGE_VALL",
      "", "", "",
      "__FLT16_MIN__",
      "",
      "INT_LEAST32_MIN",
      "",
      "SCNxPTR",
      "__FLT16_MANT_DIG__",
      "", "",
      "__COSMOPOLITAN__",
      "PRIxPTR",
      "__FLT16_MAX__",
      "", "", "", "", "", "", "", "", "",
      "_XOPEN_SOURCE",
      "",
      "INT_LEAST32_MAX",
      "",
      "__LIW__",
      "", "", "", "", "", "", "", "",
      "UINT_LEAST32_MAX",
      "", "",
      "SCHAR_MIN",
      "",
      "__NEXT_RUNTIME__",
      "__POWER9_VECTOR__",
      "", "", "",
      "__FNO_OMIT_FRAME_POINTER__",
      "",
      "__MRECORD_MCOUNT__",
      "", "",
      "__INTEL_COMPILER",
      "", "", "",
      "MB_CUR_MAX",
      "", "",
      "__MSVCRT_VERSION__",
      "",
      "__CRTDLL__",
      "", "", "", "",
      "UINT_FAST64_MAX",
      "LDBL_DECIMAL_DIG",
      "", "",
      "SCHAR_MAX",
      "__STDC_NO_VLA__",
      "__AVXVNNI__",
      "M_LOG2E",
      "", "", "", "", "", "", "", "", "",
      "",
      "INT8_MIN",
      "", "",
      "_GNU_SOURCE",
      "__FLT16_MIN_EXP__",
      "", "",
      "__ARM_NEON",
      "",
      "__ROUNDING_MATH__",
      "", "", "", "",
      "__FLT16_MAX_EXP__",
      "", "", "",
      "UINT128_MIN",
      "__PTRDIFF_WIDTH__",
      "INT8_MAX",
      "",
      "__HIP_PLATFORM_AMD__",
      "",
      "__FLT16_EPSILON__",
      "",
      "__WINT_WIDTH__",
      "__FLT16_MIN_10_EXP__",
      "",
      "M_LN10l",
      "",
      "INT_FAST64_MIN",
      "", "",
      "SCNoMAX",
      "", "",
      "__FLT16_MAX_10_EXP__",
      "UINT128_MAX",
      "PRIoMAX",
      "__FMA4__",
      "",
      "INT_LEAST16_MIN",
      "", "", "",
      "__STDC_NO_COMPLEX__",
      "", "", "",
      "L_tmpnam",
      "INT_FAST64_MAX",
      "INT128_MIN",
      "__STDC_VERSION__",
      "", "",
      "ULONG_MIN",
      "M_2_SQRTPI",
      "", "", "", "",
      "INT_LEAST16_MAX",
      "", "", "",
      "__SHRT_WIDTH__",
      "PRIXLEAST8",
      "", "", "", "",
      "INT128_MAX",
      "",
      "__FLT16_IS_IEC_60559__",
      "INT_FAST8_MIN",
      "", "", "", "", "",
      "__SSE4A__",
      "", "", "",
      "SEM_VALUE_MAX",
      "ULONG_MAX",
      "", "", "",
      "__FLT16_DIG__",
      "", "",
      "__AVXVNNIINT16__",
      "",
      "INT_FAST8_MAX",
      "", "", "", "", "", "",
      "PRIBLEAST8",
      "PRIXLEAST64",
      "__VSX__",
      "__FLT16_NORM_MAX__",
      "",
      "__INT_FAST32_WIDTH__",
      "DECIMAL_DIG",
      "__PIC__",
      "",
      "__UINT64_MAX__",
      "__ARM_FP16_ARGS",
      "__POWERPC__",
      "__AVX__",
      "__INT_FAST32_MAX__",
      "", "", "",
      "SCNiPTR",
      "", "",
      "__MNOP_MCOUNT__",
      "",
      "PRIiPTR",
      "",
      "MATH_ERREXCEPT",
      "", "",
      "SCNdMAX",
      "__FLT16_HAS_QUIET_NAN__",
      "", "", "",
      "PRIdMAX",
      "",
      "__LONG_LONG_WIDTH__",
      "",
      "PRIBLEAST64",
      "", "",
      "__UINT_FAST64_MAX__",
      "PRIXFAST16",
      "", "", "",
      "__INT_LEAST64_MAX__",
      "", "", "", "", "",
      "__ARM_FP16_IEEE",
      "", "", "", "",
      "__GNUC_STDC_INLINE__",
      "",
      "__FLT16_HAS_INFINITY__",
      "__INT64_MAX__",
      "",
      "__FLT16_HAS_DENORM__",
      "", "",
      "__AVX2__",
      "", "", "", "", "", "", "", "", "",
      "__F16C__",
      "ULONG_LONG_MIN",
      "PRIBFAST16",
      "",
      "__CET__",
      "", "",
      "__SSE4_1__",
      "__FreeBSD__",
      "", "",
      "__ARM_FP16_FORMAT_ALTERNATIVE",
      "", "", "", "",
      "USHRT_MIN",
      "__FLT16_DENORM_MIN__",
      "FLT_IS_IEC_60559",
      "",
      "__WCHAR_MIN__",
      "ULONG_LONG_MAX",
      "", "", "", "",
      "UCHAR_MIN",
      "", "",
      "SCNuPTR",
      "__WCHAR_MAX__",
      "", "",
      "__OpenBSD__",
      "PRIuPTR",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "USHRT_MAX",
      "", "", "", "", "",
      "UINT_FAST32_MAX",
      "", "", "",
      "UCHAR_MAX",
      "", "",
      "M_LN10f",
      "", "", "", "", "",
      "__ARM_FEATURE_NUMERIC_MAXMIN",
      "__ARM_FEATURE_FRINT",
      "", "", "", "", "", "", "",
      "__ARM_FEATURE_FMA",
      "", "", "", "", "",
      "WORD_BIT",
      "WCHAR_MIN",
      "", "", "",
      "M_LOG10E",
      "",
      "__SET_FPSCR_RN_RETURNS_FPSCR__",
      "", "", "", "", "",
      "UINT_LEAST64_MAX",
      "", "",
      "CHILD_MAX",
      "__UINT_LEAST32_MAX__",
      "",
      "M_PI_2l",
      "", "", "",
      "__STDC_IEC_559__",
      "",
      "__ARM_FEATURE_QBIT",
      "", "", "",
      "FP_SUBNORMAL",
      "",
      "WCHAR_MAX",
      "", "", "", "",
      "__ARM_FEATURE_QRDMX",
      "__STDC_UTF_32__",
      "",
      "__ARM_FEATURE_FP16_FML",
      "",
      "__linux__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "",
      "UINT_LEAST8_MAX",
      "", "", "", "", "",
      "DBL_IS_IEC_60559",
      "", "", "",
      "__PTX_ISA_VERSION_MINOR__",
      "", "", "",
      "__STDC_IEC_559_COMPLEX__",
      "", "", "", "", "",
      "__PTX_ISA_VERSION_MAJOR__",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "M_SQRT2",
      "_MSC_VER",
      "",
      "UINT_FAST16_MAX",
      "M_PI_2",
      "", "", "", "", "", "", "",
      "__UINT32_MAX__",
      "", "", "", "", "", "", "", "", "",
      "",
      "SCNxLEAST8",
      "", "",
      "CHAR_BIT",
      "",
      "PRIxLEAST8",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "__llvm__",
      "__UINT_FAST32_MAX__",
      "", "", "", "",
      "__INT_LEAST32_MAX__",
      "M_PIl",
      "", "", "",
      "__FLT_EVAL_METHOD__",
      "UINT32_MIN",
      "",
      "SCNoPTR",
      "", "",
      "PRIXFAST32",
      "SCNxLEAST64",
      "PRIoPTR",
      "", "", "",
      "PRIxLEAST64",
      "", "", "",
      "__STDC_UTF_16__",
      "__COUNTER__",
      "",
      "__CUDA_ARCH__",
      "",
      "UINT32_MAX",
      "", "",
      "CHARCLASS_NAME_MAX",
      "",
      "__INT_FAST64_WIDTH__",
      "__cplusplus",
      "", "",
      "__BUILTIN_CPU_SUPPORTS__",
      "", "", "",
      "__INT_FAST64_MAX__",
      "",
      "__SCHAR_WIDTH__",
      "__INT_LEAST64_WIDTH__",
      "", "", "",
      "PRIBFAST32",
      "",
      "__INCLUDE_LEVEL__",
      "", "",
      "SCNxFAST16",
      "", "", "", "",
      "PRIxFAST16",
      "", "", "", "", "",
      "M_PI_4",
      "", "", "",
      "SCNbLEAST8",
      "", "",
      "__CUDA_ARCH_LIST__",
      "M_El",
      "PRIbLEAST8",
      "", "", "", "", "", "", "", "", "",
      "PRIXFAST64",
      "",
      "__INT_FAST8_MAX__",
      "",
      "__UINT16_MAX__",
      "", "",
      "M_PI_2f",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "UINT16_MIN",
      "SCNbLEAST64",
      "SCNdPTR",
      "", "", "",
      "PRIbLEAST64",
      "PRIdPTR",
      "",
      "INT16_MIN",
      "",
      "__MINGW32__",
      "__ARM_FEATURE_RNG",
      "",
      "__UINT_FAST16_MAX__",
      "PRIBFAST64",
      "M_LN2l",
      "", "",
      "__INT_LEAST16_MAX__",
      "UINT16_MAX",
      "", "", "", "", "", "", "", "",
      "__PRETTY_FUNCTION__",
      "", "", "", "", "", "", "", "", "",
      "INT16_MAX",
      "SCNbFAST16",
      "", "", "", "",
      "PRIbFAST16",
      "__ARM_FEATURE_DOTPROD",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "",
      "SCNiLEAST8",
      "__FLT16_DECIMAL_DIG__",
      "", "", "",
      "PRIiLEAST8",
      "", "", "",
      "__VPCLMULQDQ__",
      "", "", "", "",
      "__clang__",
      "M_LN2",
      "", "",
      "__mips64",
      "", "", "", "", "", "",
      "__UINT_LEAST64_MAX__",
      "", "", "", "", "",
      "PRIXLEAST32",
      "PRIX128",
      "__WCHAR_UNSIGNED__",
      "",
      "false",
      "SCNiLEAST64",
      "",
      "__NetBSD_Version__",
      "", "",
      "PRIiLEAST64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "__SIZEOF_INT__",
      "",
      "M_PI_4l",
      "__SIZEOF_WINT_T__",
      "", "",
      "PRIBLEAST32",
      "PRIB128",
      "",
      "__UINT_LEAST8_MAX__",
      "", "", "",
      "__SIZE_MAX__",
      "__SIZEOF_UINTMAX__",
      "SCNiFAST16",
      "", "", "", "",
      "PRIiFAST16",
      "", "", "", "",
      "SCNuLEAST8",
      "",
      "BUFSIZ",
      "__SIZEOF_INTMAX__",
      "",
      "PRIuLEAST8",
      "",
      "__riscv",
      "", "",
      "__ARM_ARCH",
      "",
      "__ARM_FEATURE_SM4",
      "",
      "__GNUC_PATCHLEVEL__",
      "", "", "", "", "", "", "",
      "__VEC__",
      "",
      "SIZE_MIN",
      "", "",
      "__SIZEOF_FLOAT__",
      "",
      "UINT8_MIN",
      "",
      "__INT_LEAST32_WIDTH__",
      "", "", "", "",
      "SCNuLEAST64",
      "", "", "", "",
      "PRIuLEAST64",
      "", "",
      "SIZE_MAX",
      "", "", "", "", "", "", "", "",
      "__SIZEOF_SIZE_T__",
      "",
      "SCNxFAST32",
      "", "", "",
      "UINT8_MAX",
      "PRIxFAST32",
      "",
      "__ARM_FEATURE_SM3",
      "__ARM_FEATURE_SHA3",
      "", "",
      "M_LN2f",
      "", "", "", "", "", "", "", "",
      "SCNuFAST16",
      "", "", "", "",
      "PRIuFAST16",
      "", "", "", "",
      "__WCHAR_WIDTH__",
      "__SIZEOF_PTRDIFF_T__",
      "", "", "", "", "", "", "", "", "",
      "__ARM_FEATURE_ATOMICS",
      "PRIXLEAST128",
      "__ia16__",
      "", "", "", "",
      "__AARCH64EB__",
      "", "", "", "", "", "",
      "__SSE4_2__",
      "", "", "",
      "INT32_MIN",
      "", "", "", "", "", "", "", "", "",
      "",
      "SCNxFAST64",
      "", "", "", "",
      "PRIxFAST64",
      "INT_MIN",
      "PRIBLEAST128",
      "", "", "", "", "", "", "", "",
      "FLT_MIN",
      "", "",
      "INT32_MAX",
      "SCNbFAST32",
      "__COSMOCC__",
      "",
      "FP_ZERO",
      "",
      "PRIbFAST32",
      "__INT_LEAST16_WIDTH__",
      "", "", "",
      "M_PIf",
      "", "", "", "", "",
      "_WIN32",
      "", "", "", "",
      "__Fuchsia__",
      "", "",
      "__SIZEOF_POINTER__",
      "__AVXVNNIINT8__",
      "__powerpc__",
      "", "", "", "",
      "PRIX32",
      "", "", "", "",
      "__SIZEOF_LONG__",
      "M_PI_4f",
      "",
      "INT64_MIN",
      "",
      "PRIXLEAST16",
      "", "", "",
      "PRIX8",
      "", "", "", "",
      "SCNoLEAST8",
      "", "", "",
      "__INT_FAST8_WIDTH__",
      "PRIoLEAST8",
      "", "", "", "", "", "", "", "", "",
      "",
      "PRIB32",
      "",
      "__SIZEOF_DOUBLE__",
      "INT64_MAX",
      "SCNbFAST64",
      "", "", "", "",
      "PRIbFAST64",
      "PRIBLEAST16",
      "",
      "M_SQRT2l",
      "M_Ef",
      "PRIB8",
      "__SIZEOF_LONG_LONG__",
      "", "", "",
      "FLT_MIN_EXP",
      "SCNoLEAST64",
      "", "", "",
      "M_1_PI",
      "PRIoLEAST64",
      "", "", "", "", "", "", "", "",
      "__STDC_ANALYZABLE__",
      "SCNxLEAST32",
      "SCNx128",
      "",
      "PRIXFAST8",
      "SCNiFAST32",
      "PRIxLEAST32",
      "PRIx128",
      "", "",
      "PRIiFAST32",
      "", "",
      "__ARM_FEATURE_SHA2",
      "", "", "", "",
      "FLT_MIN_10_EXP",
      "",
      "__SIZE_WIDTH__",
      "DBL_MIN",
      "", "", "",
      "SCNoFAST16",
      "", "", "", "",
      "PRIoFAST16",
      "", "", "", "", "", "", "", "",
      "PRIBFAST8",
      "", "",
      "INFINITY",
      "", "",
      "SCNdLEAST8",
      "", "", "", "",
      "PRIdLEAST8",
      "HLF_MIN",
      "", "", "",
      "M_SQRT1_2l",
      "", "", "", "", "",
      "_ARCH_PWR5X",
      "", "",
      "__STRICT_ANSI__",
      "",
      "FLT_DIG",
      "", "", "",
      "__ARM_FEATURE_CRYPTO",
      "",
      "__SIZEOF_SHORT__",
      "", "",
      "SCNiFAST64",
      "", "", "", "",
      "PRIiFAST64",
      "SCNdLEAST64",
      "", "", "", "",
      "PRIdLEAST64",
      "", "", "",
      "SCNuFAST32",
      "SCNbLEAST32",
      "SCNb128",
      "", "",
      "PRIuFAST32",
      "PRIbLEAST32",
      "PRIb128",
      "",
      "__GCC_ASM_FLAG_OUTPUTS__",
      "", "",
      "__riscv_xlen",
      "", "", "",
      "PRIXFAST128",
      "", "", "",
      "DBL_MIN_EXP",
      "", "",
      "__SIZEOF_LONG_DOUBLE__",
      "",
      "MQ_PRIO_MAX",
      "", "", "", "",
      "SCNdFAST16",
      "FILESIZEBITS",
      "", "", "",
      "PRIdFAST16",
      "", "", "",
      "M_SQRT1_2",
      "", "", "", "",
      "__amd64__",
      "", "", "", "", "", "",
      "PRIBFAST128",
      "",
      "DBL_MIN_10_EXP",
      "", "",
      "PRIX16",
      "", "", "", "", "",
      "SCNxLEAST128",
      "", "", "", "",
      "PRIxLEAST128",
      "__RDPID__",
      "",
      "SCNuFAST64",
      "", "",
      "__gun_linux__",
      "",
      "PRIuFAST64",
      "", "", "", "",
      "UINT64_MIN",
      "", "", "", "", "", "", "", "", "",
      "",
      "PRIB16",
      "", "", "", "", "", "", "", "",
      "UINT64_MAX",
      "DBL_DIG",
      "", "", "", "",
      "SCNiLEAST32",
      "SCNi128",
      "", "", "",
      "PRIiLEAST32",
      "PRIi128",
      "", "", "", "", "", "",
      "__MWAITX__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "M_LOG2El",
      "",
      "__ARM_FEATURE_MATMUL_INT8",
      "", "", "", "", "",
      "SCNx32",
      "", "", "", "",
      "PRIx32",
      "", "", "",
      "SSIZE_MAX",
      "SCNxLEAST16",
      "SCNbLEAST128",
      "",
      "__SIZEOF_WCHAR_T__",
      "SCNx8",
      "PRIxLEAST16",
      "PRIbLEAST128",
      "",
      "__FINITE_MATH_ONLY__",
      "PRIx8",
      "", "", "", "", "", "", "", "", "",
      "M_SQRT1_2f",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "",
      "__AVX512F__",
      "", "", "", "",
      "SCNuLEAST32",
      "SCNu128",
      "",
      "__AVX512IFMA__",
      "SCNoFAST32",
      "PRIuLEAST32",
      "PRIu128",
      "", "",
      "PRIoFAST32",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "SCNxFAST8",
      "", "", "", "",
      "PRIxFAST8",
      "__MICROBLAZE__",
      "",
      "__AVX512BW__",
      "", "", "", "", "", "", "", "",
      "SCNb32",
      "", "", "", "",
      "PRIb32",
      "", "", "", "",
      "SCNbLEAST16",
      "", "", "",
      "SCNb8",
      "PRIbLEAST16",
      "", "", "",
      "PRIb8",
      "", "", "", "", "", "",
      "SCNiLEAST128",
      "", "", "",
      "PRIX64",
      "PRIiLEAST128",
      "", "",
      "SCNoFAST64",
      "__ARM_FEATURE_FP16_VECTOR_ARITHMETIC",
      "",
      "__powerpc64__",
      "",
      "PRIoFAST64",
      "",
      "__AVX512DQ__",
      "", "", "",
      "M_2_SQRTPIl",
      "", "", "", "",
      "__CLZERO__",
      "", "", "", "",
      "__wasm_simd128__",
      "", "",
      "__AVX512FP16__",
      "SCNdFAST32",
      "", "", "", "",
      "PRIdFAST32",
      "PRIB64",
      "",
      "M_SQRT2f",
      "", "", "", "", "",
      "SCNbFAST8",
      "", "", "", "",
      "PRIbFAST8",
      "", "", "", "", "", "",
      "SCNxFAST128",
      "", "", "", "",
      "PRIxFAST128",
      "", "",
      "__AVX512BF16__",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "SCNi32",
      "", "", "", "",
      "PRIi32",
      "SCNuLEAST128",
      "", "", "",
      "SCNiLEAST16",
      "PRIuLEAST128",
      "", "",
      "SCNi8",
      "PRIiLEAST16",
      "__MNO_RED_ZONE__",
      "", "",
      "PRIi8",
      "SCNx16",
      "", "", "",
      "SCNdFAST64",
      "PRIx16",
      "", "", "",
      "PRIdFAST64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "SCNoLEAST32",
      "SCNo128",
      "", "", "",
      "PRIoLEAST32",
      "PRIo128",
      "", "", "", "", "", "", "", "",
      "__aarch64__",
      "", "",
      "M_LOG10El",
      "",
      "SCNbFAST128",
      "", "",
      "SCNiFAST8",
      "",
      "PRIbFAST128",
      "", "",
      "PRIiFAST8",
      "", "", "",
      "__m68k__",
      "", "",
      "SCNu32",
      "", "",
      "__ARM_FEATURE_CRC32",
      "",
      "PRIu32",
      "", "", "", "",
      "SCNuLEAST16",
      "", "", "",
      "SCNu8",
      "PRIuLEAST16",
      "", "", "",
      "PRIu8",
      "", "", "", "", "",
      "SCNb16",
      "", "", "", "",
      "PRIb16",
      "", "",
      "__MNO_VZEROUPPER__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "M_2_PI",
      "", "", "", "", "",
      "SCNdLEAST32",
      "SCNd128",
      "", "", "",
      "PRIdLEAST32",
      "PRId128",
      "__func__",
      "", "", "", "", "",
      "SCNuFAST8",
      "", "", "", "",
      "PRIuFAST8",
      "",
      "M_1_PIl",
      "__riscv_flen",
      "", "", "", "", "", "", "", "",
      "SCNiFAST128",
      "", "", "", "",
      "PRIiFAST128",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "SCNoLEAST128",
      "",
      "L_ctermid",
      "", "",
      "PRIoLEAST128",
      "M_LOG2Ef",
      "", "", "", "", "", "", "",
      "SCNi16",
      "", "", "", "",
      "PRIi16",
      "", "", "", "",
      "SCNx64",
      "", "", "", "",
      "PRIx64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "SCNuFAST128",
      "", "", "",
      "__ARM_FEATURE_SHA512",
      "PRIuFAST128",
      "", "", "", "", "", "", "", "", "",
      "__AVX5124VNNIW__",
      "", "", "", "",
      "SCNo32",
      "", "", "", "",
      "PRIo32",
      "", "", "", "",
      "SCNoLEAST16",
      "", "", "",
      "SCNo8",
      "PRIoLEAST16",
      "SCNdLEAST128",
      "", "",
      "PRIo8",
      "SCNu16",
      "PRIdLEAST128",
      "", "", "",
      "PRIu16",
      "", "", "", "", "", "", "", "", "",
      "SCNb64",
      "", "", "", "",
      "PRIb64",
      "", "", "", "", "", "", "", "", "",
      "",
      "__AVX512VL__",
      "",
      "__AVX512VNNI__",
      "", "", "", "", "", "", "",
      "__AVX512CD__",
      "", "", "", "", "", "",
      "__AVX512VBMI__",
      "",
      "M_2_SQRTPIf",
      "", "",
      "SCNoFAST8",
      "", "", "", "",
      "PRIoFAST8",
      "", "", "", "", "", "", "", "", "",
      "", "",
      "M_1_PIf",
      "", "", "", "",
      "SCNd32",
      "", "", "", "",
      "PRId32",
      "", "", "", "",
      "SCNdLEAST16",
      "", "", "",
      "SCNd8",
      "PRIdLEAST16",
      "", "", "",
      "PRId8",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "",
      "SCNi64",
      "", "", "", "",
      "PRIi64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "SCNdFAST8",
      "", "", "", "",
      "PRIdFAST8",
      "",
      "SCNoFAST128",
      "", "", "", "",
      "PRIoFAST128",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "",
      "M_LOG10Ef",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "",
      "SCNo16",
      "", "", "", "",
      "PRIo16",
      "", "", "", "",
      "SCNu64",
      "", "", "", "",
      "PRIu64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "SCNdFAST128",
      "", "", "", "",
      "PRIdFAST128",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "__i486__",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "SCNd16",
      "", "", "", "",
      "PRId16",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "__i386__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "",
      "__x86_64__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "SCNo64",
      "", "", "", "",
      "PRIo64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "",
      "M_2_PIl",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "SCNd64",
      "", "", "", "",
      "PRId64",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "__ARM_FEATURE_CLZ",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "",
      "__i686__",
      "", "",
      "M_2_PIf",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "__i586__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "__OPTIMIZE__",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "",
      "LDBL_IS_IEC_60559"
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key];

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return s;
        }
    }
  return 0;
}