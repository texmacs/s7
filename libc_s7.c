#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <stdint.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <fenv.h>
#include <stdio.h>
#include <sys/utsname.h>
#include <unistd.h>
#include <dirent.h>
#include <ftw.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/time.h>
#include <utime.h>
#include <termios.h>
#include <grp.h>
#include <pwd.h>
#include <fnmatch.h>
#include <glob.h>
#include <signal.h>
#include <sys/wait.h>
#include <netdb.h>
#include <sys/resource.h>
#include <wordexp.h>
#include "s7.h"

static s7_pointer g_c_pointer_to_string(s7_scheme *sc, s7_pointer args) 
                  {return(s7_make_string_with_length(sc, (const char *)s7_c_pointer(s7_car(args)), s7_integer(s7_cadr(args))));}
                  static s7_pointer g_string_to_c_pointer(s7_scheme *sc, s7_pointer args)
                  {
                   if (s7_is_string(s7_car(args)))
                     return(s7_make_c_pointer_with_type(sc, (void *)s7_string(s7_car(args)), s7_make_symbol(sc, "void*"), s7_f(sc)));
                   return(s7_car(args));
                  }

/* -------- isalnum -------- */
static s7_pointer s7_dl_isalnum(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isalnum_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isalnum_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isalnum", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isalnum(s7_dl_isalnum_0)));
}
static s7_int isalnum_i_i(s7_int i1) {return(isalnum(i1));}


/* -------- isalpha -------- */
static s7_pointer s7_dl_isalpha(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isalpha_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isalpha_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isalpha", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isalpha(s7_dl_isalpha_0)));
}
static s7_int isalpha_i_i(s7_int i1) {return(isalpha(i1));}


/* -------- iscntrl -------- */
static s7_pointer s7_dl_iscntrl(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_iscntrl_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_iscntrl_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "iscntrl", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)iscntrl(s7_dl_iscntrl_0)));
}
static s7_int iscntrl_i_i(s7_int i1) {return(iscntrl(i1));}


/* -------- isdigit -------- */
static s7_pointer s7_dl_isdigit(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isdigit_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isdigit_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isdigit", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isdigit(s7_dl_isdigit_0)));
}
static s7_int isdigit_i_i(s7_int i1) {return(isdigit(i1));}


/* -------- islower -------- */
static s7_pointer s7_dl_islower(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_islower_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_islower_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "islower", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)islower(s7_dl_islower_0)));
}
static s7_int islower_i_i(s7_int i1) {return(islower(i1));}


/* -------- isgraph -------- */
static s7_pointer s7_dl_isgraph(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isgraph_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isgraph_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isgraph", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isgraph(s7_dl_isgraph_0)));
}
static s7_int isgraph_i_i(s7_int i1) {return(isgraph(i1));}


/* -------- isprint -------- */
static s7_pointer s7_dl_isprint(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isprint_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isprint_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isprint", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isprint(s7_dl_isprint_0)));
}
static s7_int isprint_i_i(s7_int i1) {return(isprint(i1));}


/* -------- ispunct -------- */
static s7_pointer s7_dl_ispunct(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_ispunct_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_ispunct_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ispunct", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)ispunct(s7_dl_ispunct_0)));
}
static s7_int ispunct_i_i(s7_int i1) {return(ispunct(i1));}


/* -------- isspace -------- */
static s7_pointer s7_dl_isspace(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isspace_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isspace_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isspace", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isspace(s7_dl_isspace_0)));
}
static s7_int isspace_i_i(s7_int i1) {return(isspace(i1));}


/* -------- isupper -------- */
static s7_pointer s7_dl_isupper(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isupper_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isupper_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isupper", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isupper(s7_dl_isupper_0)));
}
static s7_int isupper_i_i(s7_int i1) {return(isupper(i1));}


/* -------- isxdigit -------- */
static s7_pointer s7_dl_isxdigit(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isxdigit_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isxdigit_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isxdigit", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isxdigit(s7_dl_isxdigit_0)));
}
static s7_int isxdigit_i_i(s7_int i1) {return(isxdigit(i1));}


/* -------- tolower -------- */
static s7_pointer s7_dl_tolower(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_tolower_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tolower_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tolower", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tolower(s7_dl_tolower_0)));
}
static s7_int tolower_i_i(s7_int i1) {return(tolower(i1));}


/* -------- toupper -------- */
static s7_pointer s7_dl_toupper(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_toupper_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_toupper_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "toupper", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)toupper(s7_dl_toupper_0)));
}
static s7_int toupper_i_i(s7_int i1) {return(toupper(i1));}


/* -------- fcntl -------- */
static s7_pointer s7_dl_fcntl(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_fcntl_0;
  int s7_dl_fcntl_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fcntl_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fcntl", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fcntl_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fcntl", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fcntl(s7_dl_fcntl_0, s7_dl_fcntl_1)));
}
static s7_int fcntl_i_ii(s7_int i1, s7_int i2) {return(fcntl(i1, i2));}

static s7_pointer g_c_open(s7_scheme *sc, s7_pointer args)
                  {
                    s7_pointer arg;
                    char* name;
                    int flags, mode;
                    arg = args;
                    if (s7_is_string(s7_car(arg)))
                       name = (char*)s7_string(s7_car(arg));
                    else return(s7_wrong_type_arg_error(sc, "open", 1, s7_car(arg), "string"));
                    arg = s7_cdr(arg);
                    if (s7_is_integer(s7_car(arg)))
                       flags = (int)s7_integer(s7_car(arg));
                    else return(s7_wrong_type_arg_error(sc, "open", 2, s7_car(arg), "integer"));
                    if (s7_is_pair(s7_cdr(arg)))
                      {
                        arg = s7_cdr(arg);
                        if (s7_is_integer(s7_car(arg)))
                          mode = (int)s7_integer(s7_car(arg));
                        else return(s7_wrong_type_arg_error(sc, "open", 3, s7_car(arg), "integer"));
                        return(s7_make_integer(sc, (s7_int)open(name, flags, mode)));
                       }
                     return(s7_make_integer(sc, (s7_int)open(name, flags)));
                    }

/* -------- creat -------- */
static s7_pointer s7_dl_creat(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_creat_0;
  mode_t s7_dl_creat_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_creat_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "creat", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_creat_1 = (mode_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "creat", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)creat(s7_dl_creat_0, s7_dl_creat_1)));
}


/* -------- lockf -------- */
static s7_pointer s7_dl_lockf(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_lockf_0;
  int s7_dl_lockf_1;
  int s7_dl_lockf_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_lockf_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "lockf", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_lockf_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "lockf", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_lockf_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "lockf", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)lockf(s7_dl_lockf_0, s7_dl_lockf_1, s7_dl_lockf_2)));
}


/* -------- posix_fadvise -------- */
static s7_pointer s7_dl_posix_fadvise(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_posix_fadvise_0;
  int s7_dl_posix_fadvise_1;
  int s7_dl_posix_fadvise_2;
  int s7_dl_posix_fadvise_3;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fadvise_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fadvise", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fadvise_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fadvise", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fadvise_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fadvise", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fadvise_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fadvise", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)posix_fadvise(s7_dl_posix_fadvise_0, s7_dl_posix_fadvise_1, s7_dl_posix_fadvise_2, s7_dl_posix_fadvise_3)));
}


/* -------- posix_fallocate -------- */
static s7_pointer s7_dl_posix_fallocate(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_posix_fallocate_0;
  int s7_dl_posix_fallocate_1;
  int s7_dl_posix_fallocate_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fallocate_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fallocate", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fallocate_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fallocate", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_posix_fallocate_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "posix_fallocate", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)posix_fallocate(s7_dl_posix_fallocate_0, s7_dl_posix_fallocate_1, s7_dl_posix_fallocate_2)));
}


/* -------- feclearexcept -------- */
static s7_pointer s7_dl_feclearexcept(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_feclearexcept_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_feclearexcept_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "feclearexcept", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)feclearexcept(s7_dl_feclearexcept_0)));
}
static s7_int feclearexcept_i_i(s7_int i1) {return(feclearexcept(i1));}


/* -------- fegetexceptflag -------- */
static s7_pointer s7_dl_fegetexceptflag(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  fexcept_t* s7_dl_fegetexceptflag_0;
  int s7_dl_fegetexceptflag_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fexcept_t*")))
    s7_dl_fegetexceptflag_0 = (fexcept_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fegetexceptflag", 1, s7_car(arg), "fexcept_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fegetexceptflag_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fegetexceptflag", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fegetexceptflag(s7_dl_fegetexceptflag_0, s7_dl_fegetexceptflag_1)));
}


/* -------- feraiseexcept -------- */
static s7_pointer s7_dl_feraiseexcept(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_feraiseexcept_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_feraiseexcept_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "feraiseexcept", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)feraiseexcept(s7_dl_feraiseexcept_0)));
}
static s7_int feraiseexcept_i_i(s7_int i1) {return(feraiseexcept(i1));}


/* -------- fesetexceptflag -------- */
static s7_pointer s7_dl_fesetexceptflag(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  fexcept_t* s7_dl_fesetexceptflag_0;
  int s7_dl_fesetexceptflag_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fexcept_t*")))
    s7_dl_fesetexceptflag_0 = (fexcept_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fesetexceptflag", 1, s7_car(arg), "fexcept_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fesetexceptflag_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fesetexceptflag", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fesetexceptflag(s7_dl_fesetexceptflag_0, s7_dl_fesetexceptflag_1)));
}


/* -------- fetestexcept -------- */
static s7_pointer s7_dl_fetestexcept(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_fetestexcept_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fetestexcept_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fetestexcept", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fetestexcept(s7_dl_fetestexcept_0)));
}
static s7_int fetestexcept_i_i(s7_int i1) {return(fetestexcept(i1));}


/* -------- fegetround -------- */
static s7_pointer s7_dl_fegetround(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)fegetround()));
}


/* -------- fesetround -------- */
static s7_pointer s7_dl_fesetround(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_fesetround_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fesetround_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fesetround", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fesetround(s7_dl_fesetround_0)));
}
static s7_int fesetround_i_i(s7_int i1) {return(fesetround(i1));}


/* -------- fegetenv -------- */
static s7_pointer s7_dl_fegetenv(s7_scheme *sc, s7_pointer arg)
{
  fenv_t* s7_dl_fegetenv_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fenv_t*")))
    s7_dl_fegetenv_0 = (fenv_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fegetenv", 0, s7_car(arg), "fenv_t*"));
  return(s7_make_integer(sc, (s7_int)fegetenv(s7_dl_fegetenv_0)));
}


/* -------- feholdexcept -------- */
static s7_pointer s7_dl_feholdexcept(s7_scheme *sc, s7_pointer arg)
{
  fenv_t* s7_dl_feholdexcept_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fenv_t*")))
    s7_dl_feholdexcept_0 = (fenv_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "feholdexcept", 0, s7_car(arg), "fenv_t*"));
  return(s7_make_integer(sc, (s7_int)feholdexcept(s7_dl_feholdexcept_0)));
}


/* -------- fesetenv -------- */
static s7_pointer s7_dl_fesetenv(s7_scheme *sc, s7_pointer arg)
{
  fenv_t* s7_dl_fesetenv_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fenv_t*")))
    s7_dl_fesetenv_0 = (fenv_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fesetenv", 0, s7_car(arg), "fenv_t*"));
  return(s7_make_integer(sc, (s7_int)fesetenv(s7_dl_fesetenv_0)));
}


/* -------- feupdateenv -------- */
static s7_pointer s7_dl_feupdateenv(s7_scheme *sc, s7_pointer arg)
{
  fenv_t* s7_dl_feupdateenv_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fenv_t*")))
    s7_dl_feupdateenv_0 = (fenv_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "feupdateenv", 0, s7_car(arg), "fenv_t*"));
  return(s7_make_integer(sc, (s7_int)feupdateenv(s7_dl_feupdateenv_0)));
}

static s7_pointer g_fenv_t_make(s7_scheme *sc, s7_pointer args) 
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(fenv_t)), s7_make_symbol(sc, "fenv_t*"), s7_f(sc)));}

/* -------- fnmatch -------- */
static s7_pointer s7_dl_fnmatch(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_fnmatch_0;
  char* s7_dl_fnmatch_1;
  int s7_dl_fnmatch_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_fnmatch_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fnmatch", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_fnmatch_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fnmatch", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fnmatch_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fnmatch", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fnmatch(s7_dl_fnmatch_0, s7_dl_fnmatch_1, s7_dl_fnmatch_2)));
}


/* -------- memcpy -------- */
static s7_pointer s7_dl_memcpy(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_memcpy_0;
  void* s7_dl_memcpy_1;
  size_t s7_dl_memcpy_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memcpy_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memcpy", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memcpy_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memcpy", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memcpy_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memcpy", 3, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)memcpy(s7_dl_memcpy_0, s7_dl_memcpy_1, s7_dl_memcpy_2), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- memmove -------- */
static s7_pointer s7_dl_memmove(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_memmove_0;
  void* s7_dl_memmove_1;
  size_t s7_dl_memmove_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memmove_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memmove", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memmove_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memmove", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memmove_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memmove", 3, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)memmove(s7_dl_memmove_0, s7_dl_memmove_1, s7_dl_memmove_2), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- memset -------- */
static s7_pointer s7_dl_memset(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_memset_0;
  int s7_dl_memset_1;
  size_t s7_dl_memset_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memset_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memset", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memset_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memset", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memset_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memset", 3, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)memset(s7_dl_memset_0, s7_dl_memset_1, s7_dl_memset_2), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- memcmp -------- */
static s7_pointer s7_dl_memcmp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_memcmp_0;
  void* s7_dl_memcmp_1;
  size_t s7_dl_memcmp_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memcmp_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memcmp", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memcmp_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memcmp", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memcmp_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memcmp", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)memcmp(s7_dl_memcmp_0, s7_dl_memcmp_1, s7_dl_memcmp_2)));
}


/* -------- memchr -------- */
static s7_pointer s7_dl_memchr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_memchr_0;
  int s7_dl_memchr_1;
  size_t s7_dl_memchr_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_memchr_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memchr", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memchr_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memchr", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_memchr_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "memchr", 3, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)memchr(s7_dl_memchr_0, s7_dl_memchr_1, s7_dl_memchr_2), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- strcpy -------- */
static s7_pointer s7_dl_strcpy(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strcpy_0;
  char* s7_dl_strcpy_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcpy_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcpy", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcpy_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcpy", 2, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)strcpy(s7_dl_strcpy_0, s7_dl_strcpy_1)));
}


/* -------- strncpy -------- */
static s7_pointer s7_dl_strncpy(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strncpy_0;
  char* s7_dl_strncpy_1;
  size_t s7_dl_strncpy_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncpy_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncpy", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncpy_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncpy", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strncpy_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncpy", 3, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)strncpy(s7_dl_strncpy_0, s7_dl_strncpy_1, s7_dl_strncpy_2)));
}


/* -------- strcat -------- */
static s7_pointer s7_dl_strcat(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strcat_0;
  char* s7_dl_strcat_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcat_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcat", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcat_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcat", 2, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)strcat(s7_dl_strcat_0, s7_dl_strcat_1)));
}


/* -------- strncat -------- */
static s7_pointer s7_dl_strncat(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strncat_0;
  char* s7_dl_strncat_1;
  size_t s7_dl_strncat_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncat_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncat", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncat_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncat", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strncat_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncat", 3, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)strncat(s7_dl_strncat_0, s7_dl_strncat_1, s7_dl_strncat_2)));
}


/* -------- strcmp -------- */
static s7_pointer s7_dl_strcmp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strcmp_0;
  char* s7_dl_strcmp_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcmp_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcmp", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcmp_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcmp", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)strcmp(s7_dl_strcmp_0, s7_dl_strcmp_1)));
}


/* -------- strncmp -------- */
static s7_pointer s7_dl_strncmp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strncmp_0;
  char* s7_dl_strncmp_1;
  size_t s7_dl_strncmp_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncmp_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncmp", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncmp_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncmp", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strncmp_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncmp", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)strncmp(s7_dl_strncmp_0, s7_dl_strncmp_1, s7_dl_strncmp_2)));
}


/* -------- strcoll -------- */
static s7_pointer s7_dl_strcoll(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strcoll_0;
  char* s7_dl_strcoll_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcoll_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcoll", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcoll_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcoll", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)strcoll(s7_dl_strcoll_0, s7_dl_strcoll_1)));
}


/* -------- strxfrm -------- */
static s7_pointer s7_dl_strxfrm(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strxfrm_0;
  char* s7_dl_strxfrm_1;
  size_t s7_dl_strxfrm_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strxfrm_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strxfrm", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strxfrm_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strxfrm", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strxfrm_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strxfrm", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)strxfrm(s7_dl_strxfrm_0, s7_dl_strxfrm_1, s7_dl_strxfrm_2)));
}


/* -------- strchr -------- */
static s7_pointer s7_dl_strchr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strchr_0;
  int s7_dl_strchr_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strchr_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strchr", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strchr_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strchr", 2, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)strchr(s7_dl_strchr_0, s7_dl_strchr_1)));
}


/* -------- strrchr -------- */
static s7_pointer s7_dl_strrchr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strrchr_0;
  int s7_dl_strrchr_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strrchr_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strrchr", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strrchr_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strrchr", 2, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)strrchr(s7_dl_strrchr_0, s7_dl_strrchr_1)));
}


/* -------- strcspn -------- */
static s7_pointer s7_dl_strcspn(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strcspn_0;
  char* s7_dl_strcspn_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcspn_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcspn", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcspn_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcspn", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)strcspn(s7_dl_strcspn_0, s7_dl_strcspn_1)));
}


/* -------- strspn -------- */
static s7_pointer s7_dl_strspn(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strspn_0;
  char* s7_dl_strspn_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strspn_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strspn", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strspn_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strspn", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)strspn(s7_dl_strspn_0, s7_dl_strspn_1)));
}


/* -------- strpbrk -------- */
static s7_pointer s7_dl_strpbrk(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strpbrk_0;
  char* s7_dl_strpbrk_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strpbrk_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strpbrk", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strpbrk_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strpbrk", 2, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)strpbrk(s7_dl_strpbrk_0, s7_dl_strpbrk_1)));
}


/* -------- strstr -------- */
static s7_pointer s7_dl_strstr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strstr_0;
  char* s7_dl_strstr_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strstr_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strstr", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strstr_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strstr", 2, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)strstr(s7_dl_strstr_0, s7_dl_strstr_1)));
}


/* -------- strtok -------- */
static s7_pointer s7_dl_strtok(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strtok_0;
  char* s7_dl_strtok_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strtok_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strtok", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strtok_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strtok", 2, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)strtok(s7_dl_strtok_0, s7_dl_strtok_1)));
}


/* -------- strlen -------- */
static s7_pointer s7_dl_strlen(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_strlen_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strlen_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strlen", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)strlen(s7_dl_strlen_0)));
}


/* -------- strnlen -------- */
static s7_pointer s7_dl_strnlen(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strnlen_0;
  size_t s7_dl_strnlen_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strnlen_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strnlen", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strnlen_1 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strnlen", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)strnlen(s7_dl_strnlen_0, s7_dl_strnlen_1)));
}


/* -------- strerror -------- */
static s7_pointer s7_dl_strerror(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_strerror_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strerror_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strerror", 0, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)strerror(s7_dl_strerror_0)));
}


/* -------- strcasecmp -------- */
static s7_pointer s7_dl_strcasecmp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strcasecmp_0;
  char* s7_dl_strcasecmp_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcasecmp_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcasecmp", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strcasecmp_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strcasecmp", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)strcasecmp(s7_dl_strcasecmp_0, s7_dl_strcasecmp_1)));
}


/* -------- strncasecmp -------- */
static s7_pointer s7_dl_strncasecmp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_strncasecmp_0;
  char* s7_dl_strncasecmp_1;
  size_t s7_dl_strncasecmp_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncasecmp_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncasecmp", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_strncasecmp_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncasecmp", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_strncasecmp_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "strncasecmp", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)strncasecmp(s7_dl_strncasecmp_0, s7_dl_strncasecmp_1, s7_dl_strncasecmp_2)));
}


/* -------- remove -------- */
static s7_pointer s7_dl_remove(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_remove_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_remove_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "remove", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)remove(s7_dl_remove_0)));
}


/* -------- rename -------- */
static s7_pointer s7_dl_rename(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_rename_0;
  char* s7_dl_rename_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_rename_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "rename", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_rename_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "rename", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)rename(s7_dl_rename_0, s7_dl_rename_1)));
}


/* -------- tmpfile -------- */
static s7_pointer s7_dl_tmpfile(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_c_pointer_with_type(sc, (void*)tmpfile(), s7_make_symbol(sc, "FILE*"), s7_f(sc)));
}


/* -------- fclose -------- */
static s7_pointer s7_dl_fclose(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_fclose_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fclose_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fclose", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fclose(s7_dl_fclose_0)));
}


/* -------- fflush -------- */
static s7_pointer s7_dl_fflush(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_fflush_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fflush_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fflush", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fflush(s7_dl_fflush_0)));
}


/* -------- fopen -------- */
static s7_pointer s7_dl_fopen(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_fopen_0;
  char* s7_dl_fopen_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_fopen_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fopen", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_fopen_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fopen", 2, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)fopen(s7_dl_fopen_0, s7_dl_fopen_1), s7_make_symbol(sc, "FILE*"), s7_f(sc)));
}


/* -------- freopen -------- */
static s7_pointer s7_dl_freopen(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_freopen_0;
  char* s7_dl_freopen_1;
  FILE* s7_dl_freopen_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_freopen_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "freopen", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_freopen_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "freopen", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_freopen_2 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "freopen", 3, s7_car(arg), "FILE*"));
  return(s7_make_c_pointer_with_type(sc, (void*)freopen(s7_dl_freopen_0, s7_dl_freopen_1, s7_dl_freopen_2), s7_make_symbol(sc, "FILE*"), s7_f(sc)));
}


/* -------- fdopen -------- */
static s7_pointer s7_dl_fdopen(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_fdopen_0;
  char* s7_dl_fdopen_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fdopen_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fdopen", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_fdopen_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fdopen", 2, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)fdopen(s7_dl_fdopen_0, s7_dl_fdopen_1), s7_make_symbol(sc, "FILE*"), s7_f(sc)));
}


/* -------- setbuf -------- */
static s7_pointer s7_dl_setbuf(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  FILE* s7_dl_setbuf_0;
  char* s7_dl_setbuf_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_setbuf_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setbuf", 1, s7_car(arg), "FILE*"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_setbuf_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setbuf", 2, s7_car(arg), "string"));
  setbuf(s7_dl_setbuf_0, s7_dl_setbuf_1);
  return(s7_unspecified(sc));
}


/* -------- setvbuf -------- */
static s7_pointer s7_dl_setvbuf(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  FILE* s7_dl_setvbuf_0;
  char* s7_dl_setvbuf_1;
  int s7_dl_setvbuf_2;
  size_t s7_dl_setvbuf_3;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_setvbuf_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setvbuf", 1, s7_car(arg), "FILE*"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_setvbuf_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setvbuf", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setvbuf_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setvbuf", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setvbuf_3 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setvbuf", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)setvbuf(s7_dl_setvbuf_0, s7_dl_setvbuf_1, s7_dl_setvbuf_2, s7_dl_setvbuf_3)));
}


/* -------- setlinebuf -------- */
static s7_pointer s7_dl_setlinebuf(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_setlinebuf_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_setlinebuf_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setlinebuf", 0, s7_car(arg), "FILE*"));
  setlinebuf(s7_dl_setlinebuf_0);
  return(s7_unspecified(sc));
}


/* -------- fgetc -------- */
static s7_pointer s7_dl_fgetc(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_fgetc_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fgetc_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fgetc", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fgetc(s7_dl_fgetc_0)));
}


/* -------- getc -------- */
static s7_pointer s7_dl_getc(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_getc_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_getc_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getc", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)getc(s7_dl_getc_0)));
}


/* -------- getchar -------- */
static s7_pointer s7_dl_getchar(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)getchar()));
}


/* -------- fputc -------- */
static s7_pointer s7_dl_fputc(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_fputc_0;
  FILE* s7_dl_fputc_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fputc_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fputc", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fputc_1 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fputc", 2, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fputc(s7_dl_fputc_0, s7_dl_fputc_1)));
}


/* -------- putc -------- */
static s7_pointer s7_dl_putc(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_putc_0;
  FILE* s7_dl_putc_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_putc_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "putc", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_putc_1 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "putc", 2, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)putc(s7_dl_putc_0, s7_dl_putc_1)));
}


/* -------- putchar -------- */
static s7_pointer s7_dl_putchar(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_putchar_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_putchar_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "putchar", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)putchar(s7_dl_putchar_0)));
}
static s7_int putchar_i_i(s7_int i1) {return(putchar(i1));}


/* -------- fgets -------- */
static s7_pointer s7_dl_fgets(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_fgets_0;
  int s7_dl_fgets_1;
  FILE* s7_dl_fgets_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_fgets_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fgets", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fgets_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fgets", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fgets_2 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fgets", 3, s7_car(arg), "FILE*"));
  return(s7_make_string(sc, (char*)fgets(s7_dl_fgets_0, s7_dl_fgets_1, s7_dl_fgets_2)));
}


/* -------- fputs -------- */
static s7_pointer s7_dl_fputs(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_fputs_0;
  FILE* s7_dl_fputs_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_fputs_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fputs", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fputs_1 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fputs", 2, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fputs(s7_dl_fputs_0, s7_dl_fputs_1)));
}


/* -------- puts -------- */
static s7_pointer s7_dl_puts(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_puts_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_puts_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "puts", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)puts(s7_dl_puts_0)));
}


/* -------- ungetc -------- */
static s7_pointer s7_dl_ungetc(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_ungetc_0;
  FILE* s7_dl_ungetc_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_ungetc_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ungetc", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_ungetc_1 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ungetc", 2, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)ungetc(s7_dl_ungetc_0, s7_dl_ungetc_1)));
}


/* -------- fread -------- */
static s7_pointer s7_dl_fread(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_fread_0;
  size_t s7_dl_fread_1;
  size_t s7_dl_fread_2;
  FILE* s7_dl_fread_3;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_fread_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fread", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fread_1 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fread", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fread_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fread", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fread_3 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fread", 4, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fread(s7_dl_fread_0, s7_dl_fread_1, s7_dl_fread_2, s7_dl_fread_3)));
}


/* -------- fwrite -------- */
static s7_pointer s7_dl_fwrite(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_fwrite_0;
  size_t s7_dl_fwrite_1;
  size_t s7_dl_fwrite_2;
  FILE* s7_dl_fwrite_3;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_fwrite_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fwrite", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fwrite_1 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fwrite", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fwrite_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fwrite", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fwrite_3 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fwrite", 4, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fwrite(s7_dl_fwrite_0, s7_dl_fwrite_1, s7_dl_fwrite_2, s7_dl_fwrite_3)));
}


/* -------- fseek -------- */
static s7_pointer s7_dl_fseek(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  FILE* s7_dl_fseek_0;
  int s7_dl_fseek_1;
  int s7_dl_fseek_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fseek_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fseek", 1, s7_car(arg), "FILE*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fseek_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fseek", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fseek_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fseek", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fseek(s7_dl_fseek_0, s7_dl_fseek_1, s7_dl_fseek_2)));
}


/* -------- ftell -------- */
static s7_pointer s7_dl_ftell(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_ftell_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_ftell_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ftell", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)ftell(s7_dl_ftell_0)));
}


/* -------- rewind -------- */
static s7_pointer s7_dl_rewind(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_rewind_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_rewind_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "rewind", 0, s7_car(arg), "FILE*"));
  rewind(s7_dl_rewind_0);
  return(s7_unspecified(sc));
}


/* -------- fgetpos -------- */
static s7_pointer s7_dl_fgetpos(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  FILE* s7_dl_fgetpos_0;
  fpos_t* s7_dl_fgetpos_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fgetpos_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fgetpos", 1, s7_car(arg), "FILE*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fpos_t*")))
    s7_dl_fgetpos_1 = (fpos_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fgetpos", 2, s7_car(arg), "fpos_t*"));
  return(s7_make_integer(sc, (s7_int)fgetpos(s7_dl_fgetpos_0, s7_dl_fgetpos_1)));
}


/* -------- fsetpos -------- */
static s7_pointer s7_dl_fsetpos(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  FILE* s7_dl_fsetpos_0;
  fpos_t* s7_dl_fsetpos_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fsetpos_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fsetpos", 1, s7_car(arg), "FILE*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "fpos_t*")))
    s7_dl_fsetpos_1 = (fpos_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fsetpos", 2, s7_car(arg), "fpos_t*"));
  return(s7_make_integer(sc, (s7_int)fsetpos(s7_dl_fsetpos_0, s7_dl_fsetpos_1)));
}


/* -------- clearerr -------- */
static s7_pointer s7_dl_clearerr(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_clearerr_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_clearerr_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "clearerr", 0, s7_car(arg), "FILE*"));
  clearerr(s7_dl_clearerr_0);
  return(s7_unspecified(sc));
}


/* -------- feof -------- */
static s7_pointer s7_dl_feof(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_feof_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_feof_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "feof", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)feof(s7_dl_feof_0)));
}


/* -------- ferror -------- */
static s7_pointer s7_dl_ferror(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_ferror_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_ferror_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ferror", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)ferror(s7_dl_ferror_0)));
}


/* -------- perror -------- */
static s7_pointer s7_dl_perror(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_perror_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_perror_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "perror", 0, s7_car(arg), "string"));
  perror(s7_dl_perror_0);
  return(s7_unspecified(sc));
}


/* -------- fileno -------- */
static s7_pointer s7_dl_fileno(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_fileno_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_fileno_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fileno", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)fileno(s7_dl_fileno_0)));
}


/* -------- popen -------- */
static s7_pointer s7_dl_popen(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_popen_0;
  char* s7_dl_popen_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_popen_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "popen", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_popen_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "popen", 2, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)popen(s7_dl_popen_0, s7_dl_popen_1), s7_make_symbol(sc, "FILE*"), s7_f(sc)));
}


/* -------- pclose -------- */
static s7_pointer s7_dl_pclose(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_pclose_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_pclose_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pclose", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)pclose(s7_dl_pclose_0)));
}


/* -------- ctermid -------- */
static s7_pointer s7_dl_ctermid(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_ctermid_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_ctermid_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ctermid", 0, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)ctermid(s7_dl_ctermid_0)));
}


/* -------- flockfile -------- */
static s7_pointer s7_dl_flockfile(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_flockfile_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_flockfile_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "flockfile", 0, s7_car(arg), "FILE*"));
  flockfile(s7_dl_flockfile_0);
  return(s7_unspecified(sc));
}


/* -------- ftrylockfile -------- */
static s7_pointer s7_dl_ftrylockfile(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_ftrylockfile_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_ftrylockfile_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ftrylockfile", 0, s7_car(arg), "FILE*"));
  return(s7_make_integer(sc, (s7_int)ftrylockfile(s7_dl_ftrylockfile_0)));
}


/* -------- funlockfile -------- */
static s7_pointer s7_dl_funlockfile(s7_scheme *sc, s7_pointer arg)
{
  FILE* s7_dl_funlockfile_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "FILE*")))
    s7_dl_funlockfile_0 = (FILE*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "funlockfile", 0, s7_car(arg), "FILE*"));
  funlockfile(s7_dl_funlockfile_0);
  return(s7_unspecified(sc));
}


/* -------- atof -------- */
static s7_pointer s7_dl_atof(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_atof_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_atof_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "atof", 0, s7_car(arg), "string"));
  return(s7_make_real(sc, (s7_double)atof(s7_dl_atof_0)));
}


/* -------- atoi -------- */
static s7_pointer s7_dl_atoi(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_atoi_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_atoi_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "atoi", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)atoi(s7_dl_atoi_0)));
}


/* -------- atol -------- */
static s7_pointer s7_dl_atol(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_atol_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_atol_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "atol", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)atol(s7_dl_atol_0)));
}


/* -------- atoll -------- */
static s7_pointer s7_dl_atoll(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_atoll_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_atoll_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "atoll", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)atoll(s7_dl_atoll_0)));
}


/* -------- random -------- */
static s7_pointer s7_dl_random(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)random()));
}


/* -------- srandom -------- */
static s7_pointer s7_dl_srandom(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_srandom_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_srandom_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "srandom", 0, s7_car(arg), "integer"));
  srandom(s7_dl_srandom_0);
  return(s7_unspecified(sc));
}


/* -------- initstate -------- */
static s7_pointer s7_dl_initstate(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_initstate_0;
  char* s7_dl_initstate_1;
  size_t s7_dl_initstate_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_initstate_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "initstate", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_initstate_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "initstate", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_initstate_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "initstate", 3, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)initstate(s7_dl_initstate_0, s7_dl_initstate_1, s7_dl_initstate_2)));
}


/* -------- setstate -------- */
static s7_pointer s7_dl_setstate(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_setstate_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_setstate_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setstate", 0, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)setstate(s7_dl_setstate_0)));
}


/* -------- rand -------- */
static s7_pointer s7_dl_rand(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)rand()));
}


/* -------- srand -------- */
static s7_pointer s7_dl_srand(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_srand_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_srand_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "srand", 0, s7_car(arg), "integer"));
  srand(s7_dl_srand_0);
  return(s7_unspecified(sc));
}


/* -------- malloc -------- */
static s7_pointer s7_dl_malloc(s7_scheme *sc, s7_pointer arg)
{
  size_t s7_dl_malloc_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_malloc_0 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "malloc", 0, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)malloc(s7_dl_malloc_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- calloc -------- */
static s7_pointer s7_dl_calloc(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  size_t s7_dl_calloc_0;
  size_t s7_dl_calloc_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_calloc_0 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "calloc", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_calloc_1 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "calloc", 2, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)calloc(s7_dl_calloc_0, s7_dl_calloc_1), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- realloc -------- */
static s7_pointer s7_dl_realloc(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_realloc_0;
  size_t s7_dl_realloc_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_realloc_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "realloc", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_realloc_1 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "realloc", 2, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)realloc(s7_dl_realloc_0, s7_dl_realloc_1), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- abort -------- */
static s7_pointer s7_dl_abort(s7_scheme *sc, s7_pointer args)
{
  abort();
  return(s7_unspecified(sc));
}


/* -------- exit -------- */
static s7_pointer s7_dl_exit(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_exit_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_exit_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "exit", 0, s7_car(arg), "integer"));
  exit(s7_dl_exit_0);
  return(s7_unspecified(sc));
}


/* -------- getenv -------- */
static s7_pointer s7_dl_getenv(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_getenv_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_getenv_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getenv", 0, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)getenv(s7_dl_getenv_0)));
}


/* -------- putenv -------- */
static s7_pointer s7_dl_putenv(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_putenv_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_putenv_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "putenv", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)putenv(s7_dl_putenv_0)));
}


/* -------- setenv -------- */
static s7_pointer s7_dl_setenv(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_setenv_0;
  char* s7_dl_setenv_1;
  int s7_dl_setenv_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_setenv_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setenv", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_setenv_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setenv", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setenv_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setenv", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)setenv(s7_dl_setenv_0, s7_dl_setenv_1, s7_dl_setenv_2)));
}


/* -------- unsetenv -------- */
static s7_pointer s7_dl_unsetenv(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_unsetenv_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_unsetenv_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "unsetenv", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)unsetenv(s7_dl_unsetenv_0)));
}


/* -------- mkstemp -------- */
static s7_pointer s7_dl_mkstemp(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_mkstemp_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_mkstemp_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mkstemp", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)mkstemp(s7_dl_mkstemp_0)));
}


/* -------- system -------- */
static s7_pointer s7_dl_system(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_system_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_system_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "system", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)system(s7_dl_system_0)));
}


/* -------- abs -------- */
static s7_pointer s7_dl_abs(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_abs_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_abs_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "abs", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)abs(s7_dl_abs_0)));
}
static s7_int abs_i_i(s7_int i1) {return(llabs(i1));}


/* -------- labs -------- */
static s7_pointer s7_dl_labs(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_labs_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_labs_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "labs", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)labs(s7_dl_labs_0)));
}
static s7_int labs_i_i(s7_int i1) {return(labs(i1));}

static s7_pointer g_llabs(s7_scheme *sc, s7_pointer args) 
                  {
                  #if  ((__GNUC__) && ((__GNUC__ < 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ < 4))))
                    return(s7_make_integer(sc, labs(s7_integer(s7_car(args)))));
                  #else
                    return(s7_make_integer(sc, llabs(s7_integer(s7_car(args)))));
                  #endif
                  }
                 static s7_pointer g_realpath(s7_scheme *sc, s7_pointer args)
                  {
                    char *s7_dl_realpath_0, *res;
                    if (s7_is_string(s7_car(args)))
                       s7_dl_realpath_0 = (char*)s7_string(s7_car(args));
                    else return(s7_wrong_type_arg_error(sc, "realpath", 1, s7_car(args), "string"));
                    res = realpath(s7_dl_realpath_0, NULL);
                    if (res) {s7_pointer str; str = s7_make_string(sc, res); free(res); return(str);}
                    return(s7_f(sc));
                 }
                 static s7_pointer g_free(s7_scheme *sc, s7_pointer args)
                 {free(s7_c_pointer(s7_car(args))); return(s7_f(sc));}
                 static s7_pointer g_strtod(s7_scheme *sc, s7_pointer args) 
                 {return(s7_make_real(sc, strtod(s7_string(s7_car(args)), NULL)));}
                 static s7_pointer g_strtof(s7_scheme *sc, s7_pointer args) 
                 {return(s7_make_real(sc, strtof(s7_string(s7_car(args)), NULL)));}
                 static s7_pointer g_strtol(s7_scheme *sc, s7_pointer args) 
                 {return(s7_make_integer(sc, strtol(s7_string(s7_car(args)), NULL, s7_integer(s7_cadr(args)))));}
                 static s7_pointer g_strtoll(s7_scheme *sc, s7_pointer args)
                 {return(s7_make_integer(sc, strtoll(s7_string(s7_car(args)), NULL, s7_integer(s7_cadr(args)))));}
                 static s7_pointer g_div(s7_scheme *sc, s7_pointer args)
                 {
                   div_t d;
                   if (!s7_is_integer(s7_car(args))) return(s7_wrong_type_arg_error(sc, "div", 1, s7_car(args), "integer"));
                   if (!s7_is_integer(s7_cadr(args))) return(s7_wrong_type_arg_error(sc, "div", 2, s7_cadr(args), "integer"));
                   d = div(s7_integer(s7_car(args)), s7_integer(s7_cadr(args)));
                   return(s7_list(sc, 2, s7_make_integer(sc, d.quot), s7_make_integer(sc, d.rem)));
                 }
                  static s7_pointer g_ldiv(s7_scheme *sc, s7_pointer args)
                 {
                   ldiv_t d;
                   if (!s7_is_integer(s7_car(args))) return(s7_wrong_type_arg_error(sc, "ldiv", 1, s7_car(args), "integer"));
                   if (!s7_is_integer(s7_cadr(args))) return(s7_wrong_type_arg_error(sc, "ldiv", 2, s7_cadr(args), "integer"));
                   d = ldiv(s7_integer(s7_car(args)), s7_integer(s7_cadr(args)));
                   return(s7_list(sc, 2, s7_make_integer(sc, d.quot), s7_make_integer(sc, d.rem)));
                 }
                  
static s7_pointer g_errno(s7_scheme *sc, s7_pointer args) {return(s7_make_integer(sc, errno));}
                           static s7_pointer g_set_errno(s7_scheme *sc, s7_pointer args) {errno = (int)s7_integer(s7_car(args)); return(s7_car(args));}

/* -------- setlocale -------- */
static s7_pointer s7_dl_setlocale(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_setlocale_0;
  char* s7_dl_setlocale_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setlocale_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setlocale", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_setlocale_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setlocale", 2, s7_car(arg), "string"));
  return(s7_make_string(sc, (char*)setlocale(s7_dl_setlocale_0, s7_dl_setlocale_1)));
}


             static s7_pointer g_localeconv(s7_scheme *sc, s7_pointer args)
             {
               struct lconv *lc;
               lc = localeconv();
               return(s7_inlet(sc, s7_list(sc, 36,
             		     s7_make_symbol(sc, "decimal_point"),     s7_make_string(sc, lc->decimal_point),
             		     s7_make_symbol(sc, "thousands_sep"),     s7_make_string(sc, lc->thousands_sep),
             		     s7_make_symbol(sc, "grouping"),          s7_make_string(sc, lc->grouping),
             		     s7_make_symbol(sc, "int_curr_symbol"),   s7_make_string(sc, lc->int_curr_symbol),
             		     s7_make_symbol(sc, "currency_symbol"),   s7_make_string(sc, lc->currency_symbol),
             		     s7_make_symbol(sc, "mon_decimal_point"), s7_make_string(sc, lc->mon_decimal_point),
             		     s7_make_symbol(sc, "mon_thousands_sep"), s7_make_string(sc, lc->mon_thousands_sep),
             		     s7_make_symbol(sc, "mon_grouping"),      s7_make_string(sc, lc->mon_grouping),
             		     s7_make_symbol(sc, "positive_sign"),     s7_make_string(sc, lc->positive_sign),
             		     s7_make_symbol(sc, "negative_sign"),     s7_make_string(sc, lc->negative_sign),
             		     
             		     s7_make_symbol(sc, "int_frac_digits"),   s7_make_integer(sc, lc->int_frac_digits),
             		     s7_make_symbol(sc, "frac_digits"),       s7_make_integer(sc, lc->frac_digits),
             		     s7_make_symbol(sc, "p_cs_precedes"),     s7_make_integer(sc, lc->p_cs_precedes),
             		     s7_make_symbol(sc, "p_sep_by_space"),    s7_make_integer(sc, lc->p_sep_by_space),
             		     s7_make_symbol(sc, "n_cs_precedes"),     s7_make_integer(sc, lc->n_cs_precedes),
             		     s7_make_symbol(sc, "n_sep_by_space"),    s7_make_integer(sc, lc->n_sep_by_space),
             		     s7_make_symbol(sc, "p_sign_posn"),       s7_make_integer(sc, lc->p_sign_posn),
             		     s7_make_symbol(sc, "n_sign_posn"),       s7_make_integer(sc, lc->n_sign_posn))));
              }

             static s7_pointer g_uname(s7_scheme *sc, s7_pointer args)
             {
               struct utsname buf;
               uname(&buf);
               return(s7_list(sc, 5, s7_make_string(sc, buf.sysname), 
             		        s7_make_string(sc, buf.machine), 
             		        s7_make_string(sc, buf.nodename), 
             		        s7_make_string(sc, buf.version), 
             		        s7_make_string(sc, buf.release)));
             }

/* -------- access -------- */
static s7_pointer s7_dl_access(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_access_0;
  int s7_dl_access_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_access_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "access", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_access_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "access", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)access(s7_dl_access_0, s7_dl_access_1)));
}


/* -------- lseek -------- */
static s7_pointer s7_dl_lseek(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_lseek_0;
  int s7_dl_lseek_1;
  int s7_dl_lseek_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_lseek_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "lseek", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_lseek_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "lseek", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_lseek_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "lseek", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)lseek(s7_dl_lseek_0, s7_dl_lseek_1, s7_dl_lseek_2)));
}


/* -------- close -------- */
static s7_pointer s7_dl_close(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_close_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_close_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "close", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)close(s7_dl_close_0)));
}
static s7_int close_i_i(s7_int i1) {return(close(i1));}


/* -------- read -------- */
static s7_pointer s7_dl_read(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_read_0;
  void* s7_dl_read_1;
  size_t s7_dl_read_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_read_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "read", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_read_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "read", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_read_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "read", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)read(s7_dl_read_0, s7_dl_read_1, s7_dl_read_2)));
}


/* -------- write -------- */
static s7_pointer s7_dl_write(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_write_0;
  void* s7_dl_write_1;
  size_t s7_dl_write_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_write_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "write", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_write_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "write", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_write_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "write", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)write(s7_dl_write_0, s7_dl_write_1, s7_dl_write_2)));
}


/* -------- pread -------- */
static s7_pointer s7_dl_pread(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_pread_0;
  void* s7_dl_pread_1;
  size_t s7_dl_pread_2;
  int s7_dl_pread_3;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pread_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pread", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_pread_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pread", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pread_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pread", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pread_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pread", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)pread(s7_dl_pread_0, s7_dl_pread_1, s7_dl_pread_2, s7_dl_pread_3)));
}


/* -------- pwrite -------- */
static s7_pointer s7_dl_pwrite(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_pwrite_0;
  void* s7_dl_pwrite_1;
  size_t s7_dl_pwrite_2;
  int s7_dl_pwrite_3;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pwrite_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pwrite", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_pwrite_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pwrite", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pwrite_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pwrite", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pwrite_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pwrite", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)pwrite(s7_dl_pwrite_0, s7_dl_pwrite_1, s7_dl_pwrite_2, s7_dl_pwrite_3)));
}


/* -------- pipe -------- */
static s7_pointer s7_dl_pipe(s7_scheme *sc, s7_pointer arg)
{
  int* s7_dl_pipe_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "int*")))
    s7_dl_pipe_0 = (int*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pipe", 0, s7_car(arg), "int*"));
  return(s7_make_integer(sc, (s7_int)pipe(s7_dl_pipe_0)));
}


/* -------- alarm -------- */
static s7_pointer s7_dl_alarm(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_alarm_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_alarm_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "alarm", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)alarm(s7_dl_alarm_0)));
}
static s7_int alarm_i_i(s7_int i1) {return(alarm(i1));}


/* -------- sleep -------- */
static s7_pointer s7_dl_sleep(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_sleep_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sleep_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sleep", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sleep(s7_dl_sleep_0)));
}
static s7_int sleep_i_i(s7_int i1) {return(sleep(i1));}


/* -------- pause -------- */
static s7_pointer s7_dl_pause(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)pause()));
}


/* -------- chown -------- */
static s7_pointer s7_dl_chown(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_chown_0;
  int s7_dl_chown_1;
  int s7_dl_chown_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_chown_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "chown", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_chown_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "chown", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_chown_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "chown", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)chown(s7_dl_chown_0, s7_dl_chown_1, s7_dl_chown_2)));
}


/* -------- chdir -------- */
static s7_pointer s7_dl_chdir(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_chdir_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_chdir_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "chdir", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)chdir(s7_dl_chdir_0)));
}


/* -------- getcwd -------- */
static s7_pointer s7_dl_getcwd(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_getcwd_0;
  size_t s7_dl_getcwd_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_getcwd_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getcwd", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getcwd_1 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getcwd", 2, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)getcwd(s7_dl_getcwd_0, s7_dl_getcwd_1)));
}


/* -------- dup -------- */
static s7_pointer s7_dl_dup(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_dup_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_dup_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "dup", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)dup(s7_dl_dup_0)));
}
static s7_int dup_i_i(s7_int i1) {return(dup(i1));}


/* -------- dup2 -------- */
static s7_pointer s7_dl_dup2(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_dup2_0;
  int s7_dl_dup2_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_dup2_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "dup2", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_dup2_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "dup2", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)dup2(s7_dl_dup2_0, s7_dl_dup2_1)));
}
static s7_int dup2_i_ii(s7_int i1, s7_int i2) {return(dup2(i1, i2));}


/* -------- _exit -------- */
static s7_pointer s7_dl__exit(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl__exit_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl__exit_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "_exit", 0, s7_car(arg), "integer"));
  _exit(s7_dl__exit_0);
  return(s7_unspecified(sc));
}


/* -------- pathconf -------- */
static s7_pointer s7_dl_pathconf(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_pathconf_0;
  int s7_dl_pathconf_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_pathconf_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pathconf", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_pathconf_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "pathconf", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)pathconf(s7_dl_pathconf_0, s7_dl_pathconf_1)));
}


/* -------- fpathconf -------- */
static s7_pointer s7_dl_fpathconf(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_fpathconf_0;
  int s7_dl_fpathconf_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fpathconf_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fpathconf", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_fpathconf_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "fpathconf", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)fpathconf(s7_dl_fpathconf_0, s7_dl_fpathconf_1)));
}
static s7_int fpathconf_i_ii(s7_int i1, s7_int i2) {return(fpathconf(i1, i2));}


/* -------- sysconf -------- */
static s7_pointer s7_dl_sysconf(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_sysconf_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sysconf_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sysconf", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sysconf(s7_dl_sysconf_0)));
}
static s7_int sysconf_i_i(s7_int i1) {return(sysconf(i1));}


/* -------- confstr -------- */
static s7_pointer s7_dl_confstr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_confstr_0;
  char* s7_dl_confstr_1;
  size_t s7_dl_confstr_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_confstr_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "confstr", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_confstr_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "confstr", 2, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_confstr_2 = (size_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "confstr", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)confstr(s7_dl_confstr_0, s7_dl_confstr_1, s7_dl_confstr_2)));
}


/* -------- getpid -------- */
static s7_pointer s7_dl_getpid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)getpid()));
}


/* -------- getppid -------- */
static s7_pointer s7_dl_getppid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)getppid()));
}


/* -------- getpgid -------- */
static s7_pointer s7_dl_getpgid(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_getpgid_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getpgid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getpgid", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)getpgid(s7_dl_getpgid_0)));
}
static s7_int getpgid_i_i(s7_int i1) {return(getpgid(i1));}


/* -------- setpgid -------- */
static s7_pointer s7_dl_setpgid(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_setpgid_0;
  int s7_dl_setpgid_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setpgid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setpgid", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setpgid_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setpgid", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)setpgid(s7_dl_setpgid_0, s7_dl_setpgid_1)));
}
static s7_int setpgid_i_ii(s7_int i1, s7_int i2) {return(setpgid(i1, i2));}


/* -------- setsid -------- */
static s7_pointer s7_dl_setsid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)setsid()));
}


/* -------- getsid -------- */
static s7_pointer s7_dl_getsid(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_getsid_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getsid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getsid", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)getsid(s7_dl_getsid_0)));
}
static s7_int getsid_i_i(s7_int i1) {return(getsid(i1));}


/* -------- getuid -------- */
static s7_pointer s7_dl_getuid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)getuid()));
}


/* -------- geteuid -------- */
static s7_pointer s7_dl_geteuid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)geteuid()));
}


/* -------- getgid -------- */
static s7_pointer s7_dl_getgid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)getgid()));
}


/* -------- getegid -------- */
static s7_pointer s7_dl_getegid(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)getegid()));
}


/* -------- setuid -------- */
static s7_pointer s7_dl_setuid(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_setuid_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setuid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setuid", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)setuid(s7_dl_setuid_0)));
}
static s7_int setuid_i_i(s7_int i1) {return(setuid(i1));}


/* -------- setgid -------- */
static s7_pointer s7_dl_setgid(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_setgid_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setgid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setgid", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)setgid(s7_dl_setgid_0)));
}
static s7_int setgid_i_i(s7_int i1) {return(setgid(i1));}


/* -------- fork -------- */
static s7_pointer s7_dl_fork(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)fork()));
}


/* -------- ttyname -------- */
static s7_pointer s7_dl_ttyname(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_ttyname_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_ttyname_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ttyname", 0, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)ttyname(s7_dl_ttyname_0)));
}


/* -------- isatty -------- */
static s7_pointer s7_dl_isatty(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_isatty_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_isatty_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "isatty", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)isatty(s7_dl_isatty_0)));
}
static s7_int isatty_i_i(s7_int i1) {return(isatty(i1));}


/* -------- link -------- */
static s7_pointer s7_dl_link(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_link_0;
  char* s7_dl_link_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_link_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "link", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_link_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "link", 2, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)link(s7_dl_link_0, s7_dl_link_1)));
}


/* -------- unlink -------- */
static s7_pointer s7_dl_unlink(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_unlink_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_unlink_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "unlink", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)unlink(s7_dl_unlink_0)));
}


/* -------- rmdir -------- */
static s7_pointer s7_dl_rmdir(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_rmdir_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_rmdir_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "rmdir", 0, s7_car(arg), "string"));
  return(s7_make_integer(sc, (s7_int)rmdir(s7_dl_rmdir_0)));
}


/* -------- tcgetpgrp -------- */
static s7_pointer s7_dl_tcgetpgrp(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_tcgetpgrp_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcgetpgrp_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcgetpgrp", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tcgetpgrp(s7_dl_tcgetpgrp_0)));
}
static s7_int tcgetpgrp_i_i(s7_int i1) {return(tcgetpgrp(i1));}


/* -------- tcsetpgrp -------- */
static s7_pointer s7_dl_tcsetpgrp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_tcsetpgrp_0;
  int s7_dl_tcsetpgrp_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcsetpgrp_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcsetpgrp", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcsetpgrp_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcsetpgrp", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tcsetpgrp(s7_dl_tcsetpgrp_0, s7_dl_tcsetpgrp_1)));
}
static s7_int tcsetpgrp_i_ii(s7_int i1, s7_int i2) {return(tcsetpgrp(i1, i2));}


/* -------- getlogin -------- */
static s7_pointer s7_dl_getlogin(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_string(sc, (char*)getlogin()));
}


/* -------- truncate -------- */
static s7_pointer s7_dl_truncate(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_truncate_0;
  int s7_dl_truncate_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_truncate_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "truncate", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_truncate_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "truncate", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)truncate(s7_dl_truncate_0, s7_dl_truncate_1)));
}


/* -------- ftruncate -------- */
static s7_pointer s7_dl_ftruncate(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_ftruncate_0;
  int s7_dl_ftruncate_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_ftruncate_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ftruncate", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_ftruncate_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ftruncate", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)ftruncate(s7_dl_ftruncate_0, s7_dl_ftruncate_1)));
}
static s7_int ftruncate_i_ii(s7_int i1, s7_int i2) {return(ftruncate(i1, i2));}

extern char **environ; 
                  static s7_pointer getenvs(s7_scheme *sc, s7_pointer args)
                  {
                    s7_pointer p;
                    int i;
                    p = s7_nil(sc);
                    for (i = 0; environ[i]; i++)
                      {
                       const char *eq;
                       s7_pointer name, value;
                       eq = strchr((const char *)environ[i], (int)'=');
                       name = s7_make_string_with_length(sc, environ[i], eq - environ[i]);
                       value = s7_make_string(sc, (char *)(eq + 1));
                       p = s7_cons(sc, s7_cons(sc, name, value), p);
                      }
                    return(p);
           }
                  static s7_pointer g_getgroups(s7_scheme *sc, s7_pointer args)
                  {
                    gid_t *gds;
                    int i, size, res;
                    s7_pointer lst;
                    size = s7_integer(s7_car(args));
                    if (size == 0)
                      return(s7_make_integer(sc, getgroups(0, NULL)));
                    gds = (gid_t *)calloc(size, sizeof(gid_t));
                    res = getgroups(size, gds);
                    if (res != -1)
                      {
                        lst = s7_nil(sc);
                        for (i = 0; i < size; i++)
                          lst = s7_cons(sc, s7_make_integer(sc, gds[i]), lst);
                      }
                    else lst = s7_make_integer(sc, -1);
                    free(gds);
                    return(lst);
                  }
                  

/* -------- opendir -------- */
static s7_pointer s7_dl_opendir(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_opendir_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_opendir_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "opendir", 0, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)opendir(s7_dl_opendir_0), s7_make_symbol(sc, "DIR*"), s7_f(sc)));
}


/* -------- closedir -------- */
static s7_pointer s7_dl_closedir(s7_scheme *sc, s7_pointer arg)
{
  DIR* s7_dl_closedir_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "DIR*")))
    s7_dl_closedir_0 = (DIR*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "closedir", 0, s7_car(arg), "DIR*"));
  return(s7_make_integer(sc, (s7_int)closedir(s7_dl_closedir_0)));
}


/* -------- rewinddir -------- */
static s7_pointer s7_dl_rewinddir(s7_scheme *sc, s7_pointer arg)
{
  DIR* s7_dl_rewinddir_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "DIR*")))
    s7_dl_rewinddir_0 = (DIR*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "rewinddir", 0, s7_car(arg), "DIR*"));
  rewinddir(s7_dl_rewinddir_0);
  return(s7_unspecified(sc));
}

static char *read_dir(DIR *p)
                           {                            
                             struct dirent *dirp;        
                             dirp = readdir(p);          
                             if (!dirp) return(NULL);    
                             else return(dirp->d_name);  
                           }

/* -------- read_dir -------- */
static s7_pointer s7_dl_read_dir(s7_scheme *sc, s7_pointer arg)
{
  DIR* s7_dl_read_dir_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "DIR*")))
    s7_dl_read_dir_0 = (DIR*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "read_dir", 0, s7_car(arg), "DIR*"));
  return(s7_make_string(sc, (char*)read_dir(s7_dl_read_dir_0)));
}

static s7_scheme *internal_ftw_sc = NULL;
                  static s7_pointer internal_ftw_closure = NULL, internal_ftw_arglist = NULL;
                           
                  static int internal_ftw_function(const char *fpath, const struct stat *sb, int typeflag)
                  {
                    s7_list_set(internal_ftw_sc, internal_ftw_arglist, 0, s7_make_string(internal_ftw_sc, fpath));
                    s7_list_set(internal_ftw_sc, internal_ftw_arglist, 1, 
                                s7_make_c_pointer_with_type(internal_ftw_sc, (void *)sb, 
                                                            s7_make_symbol(internal_ftw_sc, "void*"), s7_f(internal_ftw_sc)));
                    s7_list_set(internal_ftw_sc, internal_ftw_arglist, 2, s7_make_integer(internal_ftw_sc, typeflag));
                    return((int)s7_integer(s7_call(internal_ftw_sc, internal_ftw_closure, internal_ftw_arglist)));
                  }
                    
                  static s7_pointer g_ftw(s7_scheme *sc, s7_pointer args)
                  {
                    if (!internal_ftw_sc)
                      {
                        internal_ftw_sc = sc;
                        internal_ftw_arglist = s7_list(sc, 3, s7_nil(sc), s7_nil(sc), s7_nil(sc));
                        s7_gc_protect(sc, internal_ftw_arglist);
                      }
                    internal_ftw_closure = s7_cadr(args);
                    return(s7_make_integer(sc, ftw(s7_string(s7_car(args)), internal_ftw_function, s7_integer(s7_caddr(args)))));
                  }
static s7_pointer g_stat(s7_scheme *sc, s7_pointer args)
                    {return(s7_make_integer(sc, stat(s7_string(s7_car(args)), (struct stat *)s7_c_pointer(s7_cadr(args)))));}
                  static s7_pointer g_fstat(s7_scheme *sc, s7_pointer args)
                    {return(s7_make_integer(sc, fstat(s7_integer(s7_car(args)), (struct stat *)s7_c_pointer(s7_cadr(args)))));}
                  static s7_pointer g_lstat(s7_scheme *sc, s7_pointer args)
                    {return(s7_make_integer(sc, lstat(s7_string(s7_car(args)), (struct stat *)s7_c_pointer(s7_cadr(args)))));}
                  

/* -------- chmod -------- */
static s7_pointer s7_dl_chmod(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_chmod_0;
  int s7_dl_chmod_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_chmod_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "chmod", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_chmod_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "chmod", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)chmod(s7_dl_chmod_0, s7_dl_chmod_1)));
}


/* -------- mkdir -------- */
static s7_pointer s7_dl_mkdir(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_mkdir_0;
  int s7_dl_mkdir_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_mkdir_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mkdir", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_mkdir_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mkdir", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)mkdir(s7_dl_mkdir_0, s7_dl_mkdir_1)));
}


/* -------- mknod -------- */
static s7_pointer s7_dl_mknod(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_mknod_0;
  int s7_dl_mknod_1;
  int s7_dl_mknod_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_mknod_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mknod", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_mknod_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mknod", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_mknod_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mknod", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)mknod(s7_dl_mknod_0, s7_dl_mknod_1, s7_dl_mknod_2)));
}


/* -------- mkfifo -------- */
static s7_pointer s7_dl_mkfifo(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_mkfifo_0;
  int s7_dl_mkfifo_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_mkfifo_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mkfifo", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_mkfifo_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "mkfifo", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)mkfifo(s7_dl_mkfifo_0, s7_dl_mkfifo_1)));
}

static s7_pointer g_isdir(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISDIR(s7_integer(s7_car(args)))));}
                  static s7_pointer g_ischr(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISCHR(s7_integer(s7_car(args)))));}
                  static s7_pointer g_isblk(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISBLK(s7_integer(s7_car(args)))));}
                  static s7_pointer g_isreg(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISREG(s7_integer(s7_car(args)))));}
                  static s7_pointer g_isfifo(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISFIFO(s7_integer(s7_car(args)))));}
                  static s7_pointer g_islnk(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISLNK(s7_integer(s7_car(args)))));}
                  static s7_pointer g_issock(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_boolean(sc, S_ISSOCK(s7_integer(s7_car(args)))));}
                  static s7_pointer g_st_dev(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_dev));}
                  static s7_pointer g_st_ino(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_ino));}
                  static s7_pointer g_st_mode(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_mode));}
                  static s7_pointer g_st_nlink(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_nlink));}
                  static s7_pointer g_st_uid(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_uid));}
                  static s7_pointer g_st_gid(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_gid));}
                  static s7_pointer g_st_rdev(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_rdev));}
                  static s7_pointer g_st_size(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_size));}
                  static s7_pointer g_st_blksize(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_blksize));}
                  static s7_pointer g_st_blocks(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_blocks));}
                  static s7_pointer g_st_atime(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_atime));}
                  static s7_pointer g_st_mtime(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_mtime));}
                  static s7_pointer g_st_ctime(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct stat *)s7_c_pointer(s7_car(args)))->st_ctime));}
                  static s7_pointer g_stat_make(s7_scheme *sc, s7_pointer args)
                    {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(struct stat)), s7_make_symbol(sc, "stat*"), s7_f(sc)));}
                  

/* -------- clock -------- */
static s7_pointer s7_dl_clock(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_integer(sc, (s7_int)clock()));
}


/* -------- time -------- */
static s7_pointer s7_dl_time(s7_scheme *sc, s7_pointer arg)
{
  time_t* s7_dl_time_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "time_t*")))
    s7_dl_time_0 = (time_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "time", 0, s7_car(arg), "time_t*"));
  return(s7_make_integer(sc, (s7_int)time(s7_dl_time_0)));
}


/* -------- difftime -------- */
static s7_pointer s7_dl_difftime(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  time_t s7_dl_difftime_0;
  time_t s7_dl_difftime_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_difftime_0 = (time_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "difftime", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_difftime_1 = (time_t)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "difftime", 2, s7_car(arg), "integer"));
  return(s7_make_real(sc, (s7_double)difftime(s7_dl_difftime_0, s7_dl_difftime_1)));
}


/* -------- gmtime -------- */
static s7_pointer s7_dl_gmtime(s7_scheme *sc, s7_pointer arg)
{
  time_t* s7_dl_gmtime_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "time_t*")))
    s7_dl_gmtime_0 = (time_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "gmtime", 0, s7_car(arg), "time_t*"));
  return(s7_make_c_pointer_with_type(sc, (void*)gmtime(s7_dl_gmtime_0), s7_make_symbol(sc, "tm*"), s7_f(sc)));
}


/* -------- ctime -------- */
static s7_pointer s7_dl_ctime(s7_scheme *sc, s7_pointer arg)
{
  time_t* s7_dl_ctime_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "time_t*")))
    s7_dl_ctime_0 = (time_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "ctime", 0, s7_car(arg), "time_t*"));
  return(s7_make_string(sc, (char*)ctime(s7_dl_ctime_0)));
}


/* -------- localtime -------- */
static s7_pointer s7_dl_localtime(s7_scheme *sc, s7_pointer arg)
{
  time_t* s7_dl_localtime_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "time_t*")))
    s7_dl_localtime_0 = (time_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "localtime", 0, s7_car(arg), "time_t*"));
  return(s7_make_c_pointer_with_type(sc, (void*)localtime(s7_dl_localtime_0), s7_make_symbol(sc, "tm*"), s7_f(sc)));
}

static s7_pointer g_mktime(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_integer(sc, (s7_int)mktime((struct tm *)s7_c_pointer(s7_car(args)))));
                  }
                  static s7_pointer g_time_make(s7_scheme *sc, s7_pointer args) 
                  {
                    time_t *tm;
                    tm = (time_t *)calloc(1, sizeof(time_t));
                    (*tm) = (time_t)s7_integer(s7_car(args));
                    return(s7_make_c_pointer_with_type(sc, (void *)tm, s7_make_symbol(sc, "time_t*"), s7_f(sc)));
                  }
                  static s7_pointer g_strftime(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_integer(sc, (s7_int)strftime((char *)s7_string(s7_car(args)), 
                  				             (size_t)s7_integer(s7_cadr(args)), 
                  					     s7_string(s7_caddr(args)), 
                  					     (const struct tm *)s7_c_pointer(s7_cadddr(args)))));
                  }
                  static s7_pointer g_asctime(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_string(sc, asctime((const struct tm *)s7_c_pointer(s7_car(args)))));
                  }
                  static s7_pointer g_gettimeofday(s7_scheme *sc, s7_pointer args)
                  {
                    struct timeval t0;
                    gettimeofday(&t0, NULL);
                    return(s7_list(sc, 2, s7_make_integer(sc, t0.tv_sec), s7_make_integer(sc, t0.tv_usec)));
                  }
                  static s7_pointer g_nanosleep(s7_scheme *sc, s7_pointer args)
                  {
                    struct timespec t0;
                    t0.tv_sec = (time_t)s7_integer(s7_car(args));
                    t0.tv_nsec = (long)s7_integer(s7_cadr(args));
                    return(s7_make_integer(sc, nanosleep(&t0, NULL)));
                  }
                  static s7_pointer g_clock_getres(s7_scheme *sc, s7_pointer args)
                  {
                    #if (!__APPLE__)
                    struct timespec t0;
                    int res;
                    res = clock_getres(s7_integer(s7_car(args)), &t0);
                    return(s7_list(sc, 3, s7_make_integer(sc, res), s7_make_integer(sc, t0.tv_sec), s7_make_integer(sc, t0.tv_nsec)));
                    #else
                    return(s7_make_integer(sc, -1));
                    #endif
                  }
                  static s7_pointer g_clock_gettime(s7_scheme *sc, s7_pointer args)
                  {
                    #if (!__APPLE__)
                    struct timespec t0;
                    int res;
                    res = clock_gettime(s7_integer(s7_car(args)), &t0);
                    return(s7_list(sc, 3, s7_make_integer(sc, res), s7_make_integer(sc, t0.tv_sec), s7_make_integer(sc, t0.tv_nsec)));
                    #else
                    return(s7_make_integer(sc, -1));
                    #endif
                  }
                  static s7_pointer g_clock_settime(s7_scheme *sc, s7_pointer args)
                  {
                    #if (!__APPLE__)
                    struct timespec t0;
                    t0.tv_sec = (time_t)s7_integer(s7_cadr(args));
                    t0.tv_nsec = (long)s7_integer(s7_caddr(args));
                    return(s7_make_integer(sc, clock_settime(s7_integer(s7_car(args)), &t0)));
                    #else
                    return(s7_make_integer(sc, -1));
                    #endif
                  }
                  static s7_pointer g_clock_getcpuclockid(s7_scheme *sc, s7_pointer args)
                  {
                    #if __linux__
                    clockid_t c = 0;
                    clock_getcpuclockid((pid_t)s7_integer(s7_car(args)), &c);
                    return(s7_make_integer(sc, (s7_int)c));
                    #else
                    return(s7_make_integer(sc, -1));
                    #endif
                  }
                  static s7_pointer g_clock_nanosleep(s7_scheme *sc, s7_pointer args)
                  {
                    #if __linux__
                    struct timespec t0;
                    t0.tv_sec = (time_t)s7_integer(s7_caddr(args));
                    t0.tv_nsec = (long)s7_integer(s7_cadddr(args));
                    return(s7_make_integer(sc, clock_nanosleep((clockid_t)s7_integer(s7_car(args)), (int)s7_integer(s7_cadr(args)), &t0, NULL)));
                    #else
                    return(s7_make_integer(sc, -1));
                    #endif
                  }
                  
static s7_pointer g_utime(s7_scheme *sc, s7_pointer args)
                  {
                    struct utimbuf tb;
                    tb.actime = (time_t)s7_integer(s7_cadr(args));
                    tb.modtime = (time_t)s7_integer(s7_caddr(args));
                    return(s7_make_integer(sc, utime(s7_string(s7_car(args)), &tb)));
                  }

/* -------- tcsendbreak -------- */
static s7_pointer s7_dl_tcsendbreak(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_tcsendbreak_0;
  int s7_dl_tcsendbreak_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcsendbreak_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcsendbreak", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcsendbreak_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcsendbreak", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tcsendbreak(s7_dl_tcsendbreak_0, s7_dl_tcsendbreak_1)));
}
static s7_int tcsendbreak_i_ii(s7_int i1, s7_int i2) {return(tcsendbreak(i1, i2));}


/* -------- tcdrain -------- */
static s7_pointer s7_dl_tcdrain(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_tcdrain_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcdrain_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcdrain", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tcdrain(s7_dl_tcdrain_0)));
}
static s7_int tcdrain_i_i(s7_int i1) {return(tcdrain(i1));}


/* -------- tcflush -------- */
static s7_pointer s7_dl_tcflush(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_tcflush_0;
  int s7_dl_tcflush_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcflush_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcflush", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcflush_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcflush", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tcflush(s7_dl_tcflush_0, s7_dl_tcflush_1)));
}
static s7_int tcflush_i_ii(s7_int i1, s7_int i2) {return(tcflush(i1, i2));}


/* -------- tcflow -------- */
static s7_pointer s7_dl_tcflow(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_tcflow_0;
  int s7_dl_tcflow_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcflow_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcflow", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_tcflow_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "tcflow", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)tcflow(s7_dl_tcflow_0, s7_dl_tcflow_1)));
}
static s7_int tcflow_i_ii(s7_int i1, s7_int i2) {return(tcflow(i1, i2));}

static s7_pointer g_cfgetospeed(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    return(s7_make_integer(sc, (s7_int)cfgetospeed(p)));
                  }
                  static s7_pointer g_cfgetispeed(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    return(s7_make_integer(sc, (s7_int)cfgetispeed(p)));
                  }
                  static s7_pointer g_cfsetospeed(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    return(s7_make_integer(sc, cfsetospeed(p, (speed_t)s7_integer(s7_cadr(args)))));
                  }
                  static s7_pointer g_cfsetispeed(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    return(s7_make_integer(sc, cfsetispeed(p, (speed_t)s7_integer(s7_cadr(args)))));
                  }
                  static s7_pointer g_tcgetattr(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_cadr(args));
                    return(s7_make_integer(sc, tcgetattr(s7_integer(s7_car(args)), p)));
                  }
                  static s7_pointer g_tcsetattr(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_caddr(args));
                    return(s7_make_integer(sc, tcsetattr(s7_integer(s7_car(args)), s7_integer(s7_cadr(args)), p)));
                   }
                  static s7_pointer g_termios_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(struct termios)), s7_make_symbol(sc, "termios*"), s7_f(sc)));}

                  static s7_pointer g_termios_c_lflag(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    return(s7_make_integer(sc, (s7_int)(p->c_lflag)));
                  }
                  static s7_pointer g_termios_set_c_lflag(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    p->c_lflag = (tcflag_t)s7_integer(s7_cadr(args));
                    return(s7_cadr(args));
                  }
                  static s7_pointer g_termios_set_c_cc(s7_scheme *sc, s7_pointer args)
                  {
                    struct termios *p;
                    p = (struct termios *)s7_c_pointer(s7_car(args));
                    p->c_cc[(int)s7_integer(s7_cadr(args))] = (cc_t)s7_integer(s7_caddr(args));
                    return(s7_caddr(args));
                  }
                  
static s7_pointer g_getgrgid(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, getgrgid(s7_integer(s7_car(args))), s7_make_symbol(sc, "struct group*"), s7_f(sc)));}
                  static s7_pointer g_getgrnam(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, getgrnam(s7_string(s7_car(args))), s7_make_symbol(sc, "struct group*"), s7_f(sc)));}
                  static s7_pointer g_group_gr_name(s7_scheme *sc, s7_pointer args) 
                    {
                      struct group *g; 
                      g = (struct group *)s7_c_pointer(s7_car(args));
                      if (!g) return(s7_make_string(sc, ""));
                      return(s7_make_string(sc, ((struct group *)g)->gr_name));
                    }
                  static s7_pointer g_group_gr_passwd(s7_scheme *sc, s7_pointer args) 
                    {
                      struct group *g; 
                      g = (struct group *)s7_c_pointer(s7_car(args));
                      if (!g) return(s7_make_string(sc, ""));
                      return(s7_make_string(sc, ((struct group *)s7_c_pointer(s7_car(args)))->gr_passwd));
                    }
                  static s7_pointer g_group_gr_gid(s7_scheme *sc, s7_pointer args) 
                    {
                      struct group *g; 
                      g = (struct group *)s7_c_pointer(s7_car(args));
                      if (!g) return(s7_make_integer(sc, -1));
                      return(s7_make_integer(sc, (s7_int)(((struct group *)s7_c_pointer(s7_car(args)))->gr_gid)));
                    }
                  static s7_pointer g_group_gr_mem(s7_scheme *sc, s7_pointer args)
                    {
                      s7_pointer p;
                      int i;
                      struct group *g;
                      g = (struct group *)s7_c_pointer(s7_car(args));
                      p = s7_nil(sc);
                      for (i = 0; g->gr_mem[i]; i++)
                        p = s7_cons(sc, s7_make_string(sc, g->gr_mem[i]), p);
                      return(p);
                      }
                      

/* -------- setpwent -------- */
static s7_pointer s7_dl_setpwent(s7_scheme *sc, s7_pointer args)
{
  setpwent();
  return(s7_unspecified(sc));
}


/* -------- endpwent -------- */
static s7_pointer s7_dl_endpwent(s7_scheme *sc, s7_pointer args)
{
  endpwent();
  return(s7_unspecified(sc));
}


/* -------- getpwent -------- */
static s7_pointer s7_dl_getpwent(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_c_pointer_with_type(sc, (void*)getpwent(), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getpwuid -------- */
static s7_pointer s7_dl_getpwuid(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_getpwuid_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getpwuid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getpwuid", 0, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)getpwuid(s7_dl_getpwuid_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getpwnam -------- */
static s7_pointer s7_dl_getpwnam(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_getpwnam_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_getpwnam_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getpwnam", 0, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)getpwnam(s7_dl_getpwnam_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}

static s7_pointer g_passwd_pw_name(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_string(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_name));}
                  static s7_pointer g_passwd_pw_passwd(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_string(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_passwd));}
                  static s7_pointer g_passwd_pw_uid(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_uid));}
                  static s7_pointer g_passwd_pw_gid(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_integer(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_gid));}
                  static s7_pointer g_passwd_pw_gecos(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_string(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_gecos));}
                  static s7_pointer g_passwd_pw_dir(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_string(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_dir));}
                  static s7_pointer g_passwd_pw_shell(s7_scheme *sc, s7_pointer args) 
                    {return(s7_make_string(sc, ((struct passwd *)s7_c_pointer(s7_car(args)))->pw_shell));}
                  

/* -------- wordexp -------- */
static s7_pointer s7_dl_wordexp(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_wordexp_0;
  wordexp_t* s7_dl_wordexp_1;
  int s7_dl_wordexp_2;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_wordexp_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "wordexp", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "wordexp_t*")))
    s7_dl_wordexp_1 = (wordexp_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "wordexp", 2, s7_car(arg), "wordexp_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_wordexp_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "wordexp", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)wordexp(s7_dl_wordexp_0, s7_dl_wordexp_1, s7_dl_wordexp_2)));
}


/* -------- wordfree -------- */
static s7_pointer s7_dl_wordfree(s7_scheme *sc, s7_pointer arg)
{
  wordexp_t* s7_dl_wordfree_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "wordexp_t*")))
    s7_dl_wordfree_0 = (wordexp_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "wordfree", 0, s7_car(arg), "wordexp_t*"));
  wordfree(s7_dl_wordfree_0);
  return(s7_unspecified(sc));
}

static s7_pointer g_wordexp_make(s7_scheme *sc, s7_pointer args)
                           {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(wordexp_t)), s7_make_symbol(sc, "wordexp_t*"), s7_f(sc)));}
                           static s7_pointer g_wordexp_we_wordc(s7_scheme *sc, s7_pointer args)
                           {return(s7_make_integer(sc, ((wordexp_t *)s7_c_pointer(s7_car(args)))->we_wordc));}
                           static s7_pointer g_wordexp_we_wordv(s7_scheme *sc, s7_pointer args)
                           {
                             s7_pointer p;
                             int i;
                             wordexp_t *g;
                             g = (wordexp_t *)s7_c_pointer(s7_car(args));
                             p = s7_nil(sc);
                             for (i = 0; i < g->we_wordc; i++)
                               p = s7_cons(sc, s7_make_string(sc, g->we_wordv[i]), p);
                             return(p);
                           }

/* -------- globfree -------- */
static s7_pointer s7_dl_globfree(s7_scheme *sc, s7_pointer arg)
{
  glob_t* s7_dl_globfree_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "glob_t*")))
    s7_dl_globfree_0 = (glob_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "globfree", 0, s7_car(arg), "glob_t*"));
  globfree(s7_dl_globfree_0);
  return(s7_unspecified(sc));
}

static s7_pointer g_glob_make(s7_scheme *sc, s7_pointer args)
                           {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(glob_t)), s7_make_symbol(sc, "glob_t*"), s7_f(sc)));}
                           static s7_pointer g_glob_gl_pathc(s7_scheme *sc, s7_pointer args)
                           {return(s7_make_integer(sc, ((glob_t *)s7_c_pointer(s7_car(args)))->gl_pathc));}
                           static s7_pointer g_glob(s7_scheme *sc, s7_pointer args)
                           {return(s7_make_integer(sc, glob(s7_string(s7_car(args)), s7_integer(s7_cadr(args)), NULL, (glob_t *)s7_c_pointer(s7_caddr(args)))));}
                           static s7_pointer g_glob_gl_pathv(s7_scheme *sc, s7_pointer args)
                           {
                             s7_pointer p;
                             int i;
                             glob_t *g;
                             g = (glob_t *)s7_c_pointer(s7_car(args));
                             p = s7_nil(sc);
                             for (i = 0; i < g->gl_pathc; i++)
                               p = s7_cons(sc, s7_make_string(sc, g->gl_pathv[i]), p);
                             return(p);
                           }

/* -------- kill -------- */
static s7_pointer s7_dl_kill(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_kill_0;
  int s7_dl_kill_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_kill_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "kill", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_kill_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "kill", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)kill(s7_dl_kill_0, s7_dl_kill_1)));
}
static s7_int kill_i_ii(s7_int i1, s7_int i2) {return(kill(i1, i2));}


/* -------- raise -------- */
static s7_pointer s7_dl_raise(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_raise_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_raise_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "raise", 0, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)raise(s7_dl_raise_0)));
}
static s7_int raise_i_i(s7_int i1) {return(raise(i1));}


/* -------- sigemptyset -------- */
static s7_pointer s7_dl_sigemptyset(s7_scheme *sc, s7_pointer arg)
{
  sigset_t* s7_dl_sigemptyset_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigemptyset_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigemptyset", 0, s7_car(arg), "sigset_t*"));
  return(s7_make_integer(sc, (s7_int)sigemptyset(s7_dl_sigemptyset_0)));
}


/* -------- sigfillset -------- */
static s7_pointer s7_dl_sigfillset(s7_scheme *sc, s7_pointer arg)
{
  sigset_t* s7_dl_sigfillset_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigfillset_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigfillset", 0, s7_car(arg), "sigset_t*"));
  return(s7_make_integer(sc, (s7_int)sigfillset(s7_dl_sigfillset_0)));
}


/* -------- sigaddset -------- */
static s7_pointer s7_dl_sigaddset(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  sigset_t* s7_dl_sigaddset_0;
  int s7_dl_sigaddset_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigaddset_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigaddset", 1, s7_car(arg), "sigset_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sigaddset_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigaddset", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sigaddset(s7_dl_sigaddset_0, s7_dl_sigaddset_1)));
}


/* -------- sigdelset -------- */
static s7_pointer s7_dl_sigdelset(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  sigset_t* s7_dl_sigdelset_0;
  int s7_dl_sigdelset_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigdelset_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigdelset", 1, s7_car(arg), "sigset_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sigdelset_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigdelset", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sigdelset(s7_dl_sigdelset_0, s7_dl_sigdelset_1)));
}


/* -------- sigismember -------- */
static s7_pointer s7_dl_sigismember(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  sigset_t* s7_dl_sigismember_0;
  int s7_dl_sigismember_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigismember_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigismember", 1, s7_car(arg), "sigset_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sigismember_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigismember", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sigismember(s7_dl_sigismember_0, s7_dl_sigismember_1)));
}


/* -------- sigprocmask -------- */
static s7_pointer s7_dl_sigprocmask(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_sigprocmask_0;
  sigset_t* s7_dl_sigprocmask_1;
  sigset_t* s7_dl_sigprocmask_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sigprocmask_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigprocmask", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigprocmask_1 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigprocmask", 2, s7_car(arg), "sigset_t*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigprocmask_2 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigprocmask", 3, s7_car(arg), "sigset_t*"));
  return(s7_make_integer(sc, (s7_int)sigprocmask(s7_dl_sigprocmask_0, s7_dl_sigprocmask_1, s7_dl_sigprocmask_2)));
}


/* -------- sigsuspend -------- */
static s7_pointer s7_dl_sigsuspend(s7_scheme *sc, s7_pointer arg)
{
  sigset_t* s7_dl_sigsuspend_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigsuspend_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigsuspend", 0, s7_car(arg), "sigset_t*"));
  return(s7_make_integer(sc, (s7_int)sigsuspend(s7_dl_sigsuspend_0)));
}


/* -------- sigpending -------- */
static s7_pointer s7_dl_sigpending(s7_scheme *sc, s7_pointer arg)
{
  sigset_t* s7_dl_sigpending_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigpending_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigpending", 0, s7_car(arg), "sigset_t*"));
  return(s7_make_integer(sc, (s7_int)sigpending(s7_dl_sigpending_0)));
}


/* -------- getpriority -------- */
static s7_pointer s7_dl_getpriority(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_getpriority_0;
  int s7_dl_getpriority_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getpriority_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getpriority", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getpriority_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getpriority", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)getpriority(s7_dl_getpriority_0, s7_dl_getpriority_1)));
}
static s7_int getpriority_i_ii(s7_int i1, s7_int i2) {return(getpriority(i1, i2));}


/* -------- setpriority -------- */
static s7_pointer s7_dl_setpriority(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_setpriority_0;
  int s7_dl_setpriority_1;
  int s7_dl_setpriority_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setpriority_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setpriority", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setpriority_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setpriority", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setpriority_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setpriority", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)setpriority(s7_dl_setpriority_0, s7_dl_setpriority_1, s7_dl_setpriority_2)));
}

static s7_pointer g_rlimit_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(struct rlimit)), s7_make_symbol(sc, "rlimit*"), s7_f(sc)));}
                  static s7_pointer g_rlimit_rlim_cur(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rlimit *)s7_c_pointer(s7_car(args)))->rlim_cur));}
                  static s7_pointer g_rlimit_rlim_max(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rlimit *)s7_c_pointer(s7_car(args)))->rlim_max));}

                  static s7_pointer g_rusage_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(struct rusage)), s7_make_symbol(sc, "struct rusage*"), s7_f(sc)));}
                  static s7_pointer g_rusage_ru_maxrss(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_maxrss));}
                  static s7_pointer g_rusage_ru_minflt(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_minflt));}
                  static s7_pointer g_rusage_ru_majflt(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_majflt));}
                  static s7_pointer g_rusage_ru_inblock(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_inblock));}
                  static s7_pointer g_rusage_ru_oublock(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_oublock));}
                  static s7_pointer g_rusage_ru_nvcsw(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_nvcsw));}
                  static s7_pointer g_rusage_ru_nivcsw(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct rusage *)s7_c_pointer(s7_car(args)))->ru_nivcsw));}
                  static s7_pointer g_rusage_ru_utime(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer(sc, &(((struct rusage *)s7_c_pointer(s7_car(args)))->ru_utime)));}
                  static s7_pointer g_rusage_ru_stime(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer(sc, &(((struct rusage *)s7_c_pointer(s7_car(args)))->ru_stime)));}
                  static s7_pointer g_getrusage(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, getrusage(s7_integer(s7_car(args)), (struct rusage *)s7_c_pointer(s7_cadr(args)))));}

                  static s7_pointer g_sigset_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(sigset_t)), s7_make_symbol(sc, "sigset_t*"), s7_f(sc)));}

                  #if __linux__
                  static s7_pointer g_WEXITSTATUS(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, WEXITSTATUS(s7_integer(s7_car(args)))));}
                  static s7_pointer g_WTERMSIG(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, WTERMSIG(s7_integer(s7_car(args)))));}
                  static s7_pointer g_WSTOPSIG(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, WSTOPSIG(s7_integer(s7_car(args)))));}
                  static s7_pointer g_WIFEXITED(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, WIFEXITED(s7_integer(s7_car(args)))));}
                  static s7_pointer g_WIFSIGNALED(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, WIFSIGNALED(s7_integer(s7_car(args)))));}
                  static s7_pointer g_WIFSTOPPED(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, WIFSTOPPED(s7_integer(s7_car(args)))));}
                  #endif

                  static s7_pointer g_wait(s7_scheme *sc, s7_pointer args)
                  {
                    int status, result;
                    result = wait(&status);
                    return(s7_list(sc, 2, s7_make_integer(sc, result), s7_make_integer(sc, status)));
                  }
                  static s7_pointer g_waitpid(s7_scheme *sc, s7_pointer args)
                  {
                    int status, result;
                    result = waitpid((pid_t)s7_integer(s7_car(args)), &status, s7_integer(s7_cadr(args)));
                    return(s7_list(sc, 2, s7_make_integer(sc, result), s7_make_integer(sc, status)));
                  }
                  static s7_pointer g_sigqueue(s7_scheme *sc, s7_pointer args)
                  {
                    #if (__linux__)
                      union sigval val;
                      if (s7_is_integer(s7_caddr(args)))
                        val.sival_int = (int)s7_integer(s7_caddr(args));
                      else val.sival_ptr = (void *)s7_c_pointer(s7_caddr(args));
                      return(s7_make_integer(sc, sigqueue((pid_t)s7_integer(s7_car(args)), s7_integer(s7_cadr(args)), val)));
                    #else
                      return(s7_f(sc));
                    #endif
                  }
                  static s7_pointer g_sigwait(s7_scheme *sc, s7_pointer args)
                  {
                    #if (!__sun)
                    int status, result;
                    result = sigwait((const sigset_t *)s7_c_pointer(s7_car(args)), &status);
                    return(s7_list(sc, 2, s7_make_integer(sc, result), s7_make_integer(sc, status)));
                    #else
                    return(s7_f(sc));
                    #endif
                  }
                  static s7_pointer g_sigtimedwait(s7_scheme *sc, s7_pointer args)
                  {
                    #if (__linux__)
                     return(s7_make_integer(sc, sigtimedwait((const sigset_t *)s7_c_pointer(s7_car(args)), 
                  					   (siginfo_t *)s7_c_pointer(s7_cadr(args)),
                                                             (const struct timespec *)s7_c_pointer(s7_caddr(args)))));
                    #else
                      return(s7_f(sc));
                    #endif
                  }
                  #if __linux__
                  static s7_pointer g_siginfo_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(siginfo_t)), s7_make_symbol(sc, "siginfo_t*"), s7_f(sc)));}
                  static s7_pointer g_siginfo_si_signo(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_signo));}
                  static s7_pointer g_siginfo_si_errno(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_errno));}
                  static s7_pointer g_siginfo_si_code(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_code));}
                  static s7_pointer g_siginfo_si_pid(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_pid));}
                  static s7_pointer g_siginfo_si_uid(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_uid));}
                  static s7_pointer g_siginfo_si_status(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_status));}
                  static s7_pointer g_siginfo_si_utime(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_utime));}
                  static s7_pointer g_siginfo_si_stime(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_stime));}
                  static s7_pointer g_siginfo_si_value(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer(sc, &(((siginfo_t *)s7_c_pointer(s7_car(args)))->si_value)));}
                  static s7_pointer g_siginfo_si_int(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_int));}
                  static s7_pointer g_siginfo_si_overrun(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_overrun));}
                  static s7_pointer g_siginfo_si_timerid(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_timerid));}
                  static s7_pointer g_siginfo_si_band(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_band));}
                  static s7_pointer g_siginfo_si_fd(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_fd));}
                  static s7_pointer g_siginfo_si_ptr(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_ptr, s7_make_symbol(sc, "siginfo_t*"), s7_f(sc)));}
                  static s7_pointer g_siginfo_si_addr(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, ((siginfo_t *)s7_c_pointer(s7_car(args)))->si_addr, s7_make_symbol(sc, "siginfo_t*"), s7_f(sc)));}
                  #endif

                  static s7_pointer g_timespec_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(struct timespec)), s7_make_symbol(sc, "timespec*"), s7_f(sc)));}
                  static s7_pointer g_timespec_tv_sec(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct timespec *)s7_c_pointer(s7_car(args)))->tv_sec));}
                  static s7_pointer g_timespec_tv_nsec(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct timespec *)s7_c_pointer(s7_car(args)))->tv_nsec));}

                  static s7_pointer g_sigaction_make(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(sigaction)), s7_make_symbol(sc, "sigaction*"), s7_f(sc)));}
                  static s7_pointer g_sigaction_sa_flags(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_flags));}
                  static s7_pointer g_sigaction_set_sa_flags(s7_scheme *sc, s7_pointer args)
                  {((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_flags = s7_integer(s7_cadr(args)); return(s7_cadr(args));}
                  static s7_pointer g_sigaction_sa_mask(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer(sc, (void *)(&(((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_mask))));}
                  static s7_pointer g_sigaction_sa_handler(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_c_pointer(sc, (void *)(((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_handler)));}

                  static s7_pointer sighandlers = NULL;
                  static s7_scheme *sighandlers_s7 = NULL;
                  static void s7_signal_handler(int sig)
                  {
                    if (sighandlers)
                      {
                        s7_pointer handler;
                        handler = s7_vector_ref(sighandlers_s7, sighandlers, sig);
                        if (handler != s7_f(sighandlers_s7))
                           s7_call(sighandlers_s7, handler, s7_cons(sighandlers_s7, s7_make_integer(sighandlers_s7, sig), s7_nil(sighandlers_s7)));
                       }
                  }
                  #ifndef SIGUNUSED
                    #define SIGUNUSED 65
                  #endif
                  static s7_pointer g_sigaction_set_sa_handler(s7_scheme *sc, s7_pointer args)
                  {
                    /* (sigaction.set_sa_handler ptr handler) */
                    if (!sighandlers)
                      {
                        sighandlers_s7 = sc;
                        sighandlers = s7_make_and_fill_vector(sc, SIGUNUSED + 1, s7_f(sc));
                        s7_gc_protect(sc, sighandlers);
                      }
                    if (s7_c_pointer(s7_cadr(args)) == (void *)SIG_DFL)
                       ((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_handler = SIG_DFL;
                    else
                      {
                        if (s7_c_pointer(s7_cadr(args)) == (void *)SIG_IGN)
                           ((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_handler = SIG_IGN;
                        else 
                          {
                            ((struct sigaction *)s7_c_pointer(s7_car(args)))->sa_handler = s7_signal_handler;
                            s7_vector_set(sighandlers_s7, sighandlers, SIGUNUSED, 
                              s7_cons(sc, s7_cons(sc, s7_car(args), s7_cadr(args)), s7_vector_ref(sighandlers_s7, sighandlers, SIGUNUSED)));
                          }
                      }
                    return(s7_cadr(args));
                  }
                static s7_pointer g_sigaction(s7_scheme *sc, s7_pointer args)
                {
                  int sig;
                  const struct sigaction *new_act;
                  struct sigaction *old_act;
                  s7_pointer handler;
                  sig = (int)s7_integer(s7_car(args));
                  new_act = (const struct sigaction *)s7_c_pointer(s7_cadr(args));
                  old_act = (struct sigaction *)s7_c_pointer(s7_caddr(args));
                  handler = s7_assq(sc, s7_cadr(args), s7_vector_ref(sighandlers_s7, sighandlers, SIGUNUSED));
                  if (s7_is_pair(handler))
                    s7_vector_set(sighandlers_s7, sighandlers, sig, s7_cdr(handler));
                  return(s7_make_integer(sc, sigaction(sig, new_act, old_act)));
                }
                static s7_pointer g_signal(s7_scheme *sc, s7_pointer args)
                {
                  int sig;
                  if (!sighandlers)
                    {
                      sighandlers_s7 = sc;
                      sighandlers = s7_make_and_fill_vector(sc, SIGUNUSED + 1, s7_f(sc));
                      s7_gc_protect(sc, sighandlers);
                    }
                  sig = s7_integer(s7_car(args));
                  if (s7_is_c_pointer(s7_cadr(args)))
                    {
                      if (s7_c_pointer(s7_cadr(args)) == (void *)SIG_DFL)
                         return(s7_make_c_pointer(sc, signal(sig, SIG_DFL)));
                      if (s7_c_pointer(s7_cadr(args)) == (void *)SIG_IGN)
                         return(s7_make_c_pointer(sc, signal(sig, SIG_IGN)));
                     }
                  s7_vector_set(sc, sighandlers, sig, s7_cadr(args));
                  return(s7_make_c_pointer(sc, signal(sig, s7_signal_handler)));
                }
                  

/* -------- getrlimit -------- */
static s7_pointer s7_dl_getrlimit(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_getrlimit_0;
  void* s7_dl_getrlimit_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getrlimit_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getrlimit", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_getrlimit_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getrlimit", 2, s7_car(arg), "void*"));
  return(s7_make_integer(sc, (s7_int)getrlimit(s7_dl_getrlimit_0, s7_dl_getrlimit_1)));
}


/* -------- setrlimit -------- */
static s7_pointer s7_dl_setrlimit(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_setrlimit_0;
  void* s7_dl_setrlimit_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setrlimit_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setrlimit", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_setrlimit_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setrlimit", 2, s7_car(arg), "void*"));
  return(s7_make_integer(sc, (s7_int)setrlimit(s7_dl_setrlimit_0, s7_dl_setrlimit_1)));
}


/* -------- sigwaitinfo -------- */
static s7_pointer s7_dl_sigwaitinfo(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  sigset_t* s7_dl_sigwaitinfo_0;
  siginfo_t* s7_dl_sigwaitinfo_1;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "sigset_t*")))
    s7_dl_sigwaitinfo_0 = (sigset_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigwaitinfo", 1, s7_car(arg), "sigset_t*"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "siginfo_t*")))
    s7_dl_sigwaitinfo_1 = (siginfo_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sigwaitinfo", 2, s7_car(arg), "siginfo_t*"));
  return(s7_make_integer(sc, (s7_int)sigwaitinfo(s7_dl_sigwaitinfo_0, s7_dl_sigwaitinfo_1)));
}


/* -------- waitid -------- */
static s7_pointer s7_dl_waitid(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_waitid_0;
  int s7_dl_waitid_1;
  siginfo_t* s7_dl_waitid_2;
  int s7_dl_waitid_3;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_waitid_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "waitid", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_waitid_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "waitid", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "siginfo_t*")))
    s7_dl_waitid_2 = (siginfo_t*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "waitid", 3, s7_car(arg), "siginfo_t*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_waitid_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "waitid", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)waitid(s7_dl_waitid_0, s7_dl_waitid_1, s7_dl_waitid_2, s7_dl_waitid_3)));
}


/* -------- sethostent -------- */
static s7_pointer s7_dl_sethostent(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_sethostent_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sethostent_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sethostent", 0, s7_car(arg), "integer"));
  sethostent(s7_dl_sethostent_0);
  return(s7_unspecified(sc));
}


/* -------- endhostent -------- */
static s7_pointer s7_dl_endhostent(s7_scheme *sc, s7_pointer args)
{
  endhostent();
  return(s7_unspecified(sc));
}


/* -------- gethostent -------- */
static s7_pointer s7_dl_gethostent(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_c_pointer_with_type(sc, (void*)gethostent(), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- setservent -------- */
static s7_pointer s7_dl_setservent(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_setservent_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setservent_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setservent", 0, s7_car(arg), "integer"));
  setservent(s7_dl_setservent_0);
  return(s7_unspecified(sc));
}


/* -------- endservent -------- */
static s7_pointer s7_dl_endservent(s7_scheme *sc, s7_pointer args)
{
  endservent();
  return(s7_unspecified(sc));
}


/* -------- getservent -------- */
static s7_pointer s7_dl_getservent(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_c_pointer_with_type(sc, (void*)getservent(), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- setprotoent -------- */
static s7_pointer s7_dl_setprotoent(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_setprotoent_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setprotoent_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setprotoent", 0, s7_car(arg), "integer"));
  setprotoent(s7_dl_setprotoent_0);
  return(s7_unspecified(sc));
}


/* -------- endprotoent -------- */
static s7_pointer s7_dl_endprotoent(s7_scheme *sc, s7_pointer args)
{
  endprotoent();
  return(s7_unspecified(sc));
}


/* -------- getprotoent -------- */
static s7_pointer s7_dl_getprotoent(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_c_pointer_with_type(sc, (void*)getprotoent(), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- setnetent -------- */
static s7_pointer s7_dl_setnetent(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_setnetent_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_setnetent_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "setnetent", 0, s7_car(arg), "integer"));
  setnetent(s7_dl_setnetent_0);
  return(s7_unspecified(sc));
}


/* -------- endnetent -------- */
static s7_pointer s7_dl_endnetent(s7_scheme *sc, s7_pointer args)
{
  endnetent();
  return(s7_unspecified(sc));
}


/* -------- getnetent -------- */
static s7_pointer s7_dl_getnetent(s7_scheme *sc, s7_pointer args)
{
  return(s7_make_c_pointer_with_type(sc, (void*)getnetent(), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- socket -------- */
static s7_pointer s7_dl_socket(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_socket_0;
  int s7_dl_socket_1;
  int s7_dl_socket_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_socket_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "socket", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_socket_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "socket", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_socket_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "socket", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)socket(s7_dl_socket_0, s7_dl_socket_1, s7_dl_socket_2)));
}


/* -------- listen -------- */
static s7_pointer s7_dl_listen(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_listen_0;
  int s7_dl_listen_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_listen_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "listen", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_listen_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "listen", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)listen(s7_dl_listen_0, s7_dl_listen_1)));
}
static s7_int listen_i_ii(s7_int i1, s7_int i2) {return(listen(i1, i2));}


/* -------- shutdown -------- */
static s7_pointer s7_dl_shutdown(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_shutdown_0;
  int s7_dl_shutdown_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_shutdown_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "shutdown", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_shutdown_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "shutdown", 2, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)shutdown(s7_dl_shutdown_0, s7_dl_shutdown_1)));
}
static s7_int shutdown_i_ii(s7_int i1, s7_int i2) {return(shutdown(i1, i2));}


/* -------- gethostbyname -------- */
static s7_pointer s7_dl_gethostbyname(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_gethostbyname_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_gethostbyname_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "gethostbyname", 0, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)gethostbyname(s7_dl_gethostbyname_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- gethostbyaddr -------- */
static s7_pointer s7_dl_gethostbyaddr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  void* s7_dl_gethostbyaddr_0;
  int s7_dl_gethostbyaddr_1;
  int s7_dl_gethostbyaddr_2;
  arg = args;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_gethostbyaddr_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "gethostbyaddr", 1, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_gethostbyaddr_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "gethostbyaddr", 2, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_gethostbyaddr_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "gethostbyaddr", 3, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)gethostbyaddr(s7_dl_gethostbyaddr_0, s7_dl_gethostbyaddr_1, s7_dl_gethostbyaddr_2), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getnetbyname -------- */
static s7_pointer s7_dl_getnetbyname(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_getnetbyname_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_getnetbyname_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getnetbyname", 0, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)getnetbyname(s7_dl_getnetbyname_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getnetbyaddr -------- */
static s7_pointer s7_dl_getnetbyaddr(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_getnetbyaddr_0;
  int s7_dl_getnetbyaddr_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getnetbyaddr_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getnetbyaddr", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getnetbyaddr_1 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getnetbyaddr", 2, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)getnetbyaddr(s7_dl_getnetbyaddr_0, s7_dl_getnetbyaddr_1), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getservbyname -------- */
static s7_pointer s7_dl_getservbyname(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  char* s7_dl_getservbyname_0;
  char* s7_dl_getservbyname_1;
  arg = args;
  if (s7_is_string(s7_car(arg)))
    s7_dl_getservbyname_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getservbyname", 1, s7_car(arg), "string"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_getservbyname_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getservbyname", 2, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)getservbyname(s7_dl_getservbyname_0, s7_dl_getservbyname_1), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getservbyport -------- */
static s7_pointer s7_dl_getservbyport(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_getservbyport_0;
  char* s7_dl_getservbyport_1;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getservbyport_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getservbyport", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_string(s7_car(arg)))
    s7_dl_getservbyport_1 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getservbyport", 2, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)getservbyport(s7_dl_getservbyport_0, s7_dl_getservbyport_1), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getprotobyname -------- */
static s7_pointer s7_dl_getprotobyname(s7_scheme *sc, s7_pointer arg)
{
  char* s7_dl_getprotobyname_0;
  if (s7_is_string(s7_car(arg)))
    s7_dl_getprotobyname_0 = (char*)s7_string(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getprotobyname", 0, s7_car(arg), "string"));
  return(s7_make_c_pointer_with_type(sc, (void*)getprotobyname(s7_dl_getprotobyname_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- getprotobynumber -------- */
static s7_pointer s7_dl_getprotobynumber(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_getprotobynumber_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_getprotobynumber_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "getprotobynumber", 0, s7_car(arg), "integer"));
  return(s7_make_c_pointer_with_type(sc, (void*)getprotobynumber(s7_dl_getprotobynumber_0), s7_make_symbol(sc, "void*"), s7_f(sc)));
}


/* -------- freeaddrinfo -------- */
static s7_pointer s7_dl_freeaddrinfo(s7_scheme *sc, s7_pointer arg)
{
  void* s7_dl_freeaddrinfo_0;
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_freeaddrinfo_0 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "freeaddrinfo", 0, s7_car(arg), "void*"));
  freeaddrinfo(s7_dl_freeaddrinfo_0);
  return(s7_unspecified(sc));
}


/* -------- gai_strerror -------- */
static s7_pointer s7_dl_gai_strerror(s7_scheme *sc, s7_pointer arg)
{
  int s7_dl_gai_strerror_0;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_gai_strerror_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "gai_strerror", 0, s7_car(arg), "integer"));
  return(s7_make_string(sc, (char*)gai_strerror(s7_dl_gai_strerror_0)));
}


/* -------- bind -------- */
static s7_pointer s7_dl_bind(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_bind_0;
  void* s7_dl_bind_1;
  int s7_dl_bind_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_bind_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "bind", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_bind_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "bind", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_bind_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "bind", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)bind(s7_dl_bind_0, s7_dl_bind_1, s7_dl_bind_2)));
}


/* -------- connect -------- */
static s7_pointer s7_dl_connect(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_connect_0;
  void* s7_dl_connect_1;
  int s7_dl_connect_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_connect_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "connect", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_connect_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "connect", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_connect_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "connect", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)connect(s7_dl_connect_0, s7_dl_connect_1, s7_dl_connect_2)));
}


/* -------- send -------- */
static s7_pointer s7_dl_send(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_send_0;
  void* s7_dl_send_1;
  int s7_dl_send_2;
  int s7_dl_send_3;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_send_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "send", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_send_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "send", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_send_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "send", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_send_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "send", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)send(s7_dl_send_0, s7_dl_send_1, s7_dl_send_2, s7_dl_send_3)));
}


/* -------- recv -------- */
static s7_pointer s7_dl_recv(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_recv_0;
  void* s7_dl_recv_1;
  int s7_dl_recv_2;
  int s7_dl_recv_3;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_recv_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recv", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_recv_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recv", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_recv_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recv", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_recv_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recv", 4, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)recv(s7_dl_recv_0, s7_dl_recv_1, s7_dl_recv_2, s7_dl_recv_3)));
}


/* -------- sendto -------- */
static s7_pointer s7_dl_sendto(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_sendto_0;
  void* s7_dl_sendto_1;
  int s7_dl_sendto_2;
  int s7_dl_sendto_3;
  void* s7_dl_sendto_4;
  int s7_dl_sendto_5;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sendto_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendto", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_sendto_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendto", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sendto_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendto", 3, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sendto_3 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendto", 4, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_sendto_4 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendto", 5, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sendto_5 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendto", 6, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sendto(s7_dl_sendto_0, s7_dl_sendto_1, s7_dl_sendto_2, s7_dl_sendto_3, s7_dl_sendto_4, s7_dl_sendto_5)));
}


/* -------- sendmsg -------- */
static s7_pointer s7_dl_sendmsg(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_sendmsg_0;
  void* s7_dl_sendmsg_1;
  int s7_dl_sendmsg_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sendmsg_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendmsg", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_sendmsg_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendmsg", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_sendmsg_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "sendmsg", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)sendmsg(s7_dl_sendmsg_0, s7_dl_sendmsg_1, s7_dl_sendmsg_2)));
}


/* -------- recvmsg -------- */
static s7_pointer s7_dl_recvmsg(s7_scheme *sc, s7_pointer args)
{
  s7_pointer arg;
  int s7_dl_recvmsg_0;
  void* s7_dl_recvmsg_1;
  int s7_dl_recvmsg_2;
  arg = args;
  if (s7_is_integer(s7_car(arg)))
    s7_dl_recvmsg_0 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recvmsg", 1, s7_car(arg), "integer"));
  arg = s7_cdr(arg);
  if (s7_is_c_pointer_of_type(s7_car(arg), s7_make_symbol(sc, "void*")))
    s7_dl_recvmsg_1 = (void*)s7_c_pointer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recvmsg", 2, s7_car(arg), "void*"));
  arg = s7_cdr(arg);
  if (s7_is_integer(s7_car(arg)))
    s7_dl_recvmsg_2 = (int)s7_integer(s7_car(arg));
  else return(s7_wrong_type_arg_error(sc, "recvmsg", 3, s7_car(arg), "integer"));
  return(s7_make_integer(sc, (s7_int)recvmsg(s7_dl_recvmsg_0, s7_dl_recvmsg_1, s7_dl_recvmsg_2)));
}

static s7_pointer g_ntohl(s7_scheme *sc, s7_pointer args) {return(s7_make_integer(sc, ntohl(s7_integer(s7_car(args)))));}
                  static s7_pointer g_ntohs(s7_scheme *sc, s7_pointer args) {return(s7_make_integer(sc, ntohs(s7_integer(s7_car(args)))));}
                  static s7_pointer g_htonl(s7_scheme *sc, s7_pointer args) {return(s7_make_integer(sc, htonl(s7_integer(s7_car(args)))));}
                  static s7_pointer g_htons(s7_scheme *sc, s7_pointer args) {return(s7_make_integer(sc, htons(s7_integer(s7_car(args)))));}

                  static s7_pointer g_addrinfo_make(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_c_pointer_with_type(sc, (void *)calloc(1, sizeof(struct addrinfo)), s7_make_symbol(sc, "addrinfo*"), s7_f(sc)));
                  }

                  static s7_pointer g_addrinfo_ai_flags(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_integer(sc, ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_flags));
                  }
                  static s7_pointer g_addrinfo_set_ai_flags(s7_scheme *sc, s7_pointer args) 
                  {
                    ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_flags = (int)s7_integer(s7_cadr(args));
                    return(s7_cadr(args));
                  }

                  static s7_pointer g_addrinfo_ai_family(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_integer(sc, ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_family));
                  }
                  static s7_pointer g_addrinfo_set_ai_family(s7_scheme *sc, s7_pointer args) 
                  {
                    ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_family = (int)s7_integer(s7_cadr(args));
                    return(s7_cadr(args));
                  }

                  static s7_pointer g_addrinfo_ai_socktype(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_integer(sc, ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_socktype));
                  }
                  static s7_pointer g_addrinfo_set_ai_socktype(s7_scheme *sc, s7_pointer args) 
                  {
                    ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_socktype = (int)s7_integer(s7_cadr(args));
                    return(s7_cadr(args));
                  }

                  static s7_pointer g_addrinfo_ai_protocol(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_integer(sc, ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_protocol));
                  }
                  static s7_pointer g_addrinfo_set_ai_protocol(s7_scheme *sc, s7_pointer args) 
                  {
                    ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_protocol = (int)s7_integer(s7_cadr(args));
                    return(s7_cadr(args));
                  }
                  static s7_pointer g_addrinfo_ai_canonname(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_string(sc, ((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_canonname));
                  }
                  static s7_pointer g_addrinfo_ai_next(s7_scheme *sc, s7_pointer args) 
                  {
                    return(s7_make_c_pointer_with_type(sc, (void *)(((struct addrinfo *)s7_c_pointer(s7_car(args)))->ai_next), s7_make_symbol(sc, "addrinfo*"), s7_f(sc)));
                  }

                  static s7_pointer g_getaddrinfo(s7_scheme *sc, s7_pointer args) 
                  {
                     struct addrinfo *result;
                     int err;
                     err = getaddrinfo(s7_string(s7_car(args)), 
                  		     s7_string(s7_cadr(args)),
                  		     (const struct addrinfo *)s7_c_pointer(s7_caddr(args)),
                                       &result);
                    return(s7_list(sc, 2, s7_make_integer(sc, err), s7_make_c_pointer(sc, (void *)result)));
                  }

                  static s7_pointer g_getnameinfo(s7_scheme *sc, s7_pointer args) 
                  {
                    #ifndef NI_MAXHOST
                      #define NI_MAXHOST 1025
                    #endif
                    #ifndef NI_MAXSERV
                      #define NI_MAXSERV 32
                    #endif
                    char *host, *service;
                    int err;
                    host = (char *)calloc(NI_MAXHOST, sizeof(char));
                    service = (char *)calloc(NI_MAXSERV, sizeof(char));
                    err = getnameinfo((const struct sockaddr *)s7_c_pointer(s7_car(args)), s7_integer(s7_cadr(args)),
                  		    host, NI_MAXHOST,
                  		    service, NI_MAXSERV,
                  		    s7_integer(s7_caddr(args)));
                    return(s7_list(sc, 3, s7_make_integer(sc, err), s7_make_string(sc, host), s7_make_string(sc, service)));
                  }
                           
                  static s7_pointer g_socketpair(s7_scheme *sc, s7_pointer args) 
                  {
                    int fds[2];
                    int err;
                    err = socketpair(s7_integer(s7_car(args)), s7_integer(s7_cadr(args)), s7_integer(s7_caddr(args)), fds);
                    return(s7_list(sc, 3, s7_make_integer(sc, err), s7_make_integer(sc, fds[0]), s7_make_integer(sc, fds[1])));
                  }
                           
                  static s7_pointer g_getsockname(s7_scheme *sc, s7_pointer args) 
                  {
                    int err;
                    socklen_t res;
                    res = s7_integer(s7_caddr(args));
                    err = getsockname(s7_integer(s7_car(args)), (struct sockaddr *)s7_c_pointer(s7_cadr(args)), &res);
                    return(s7_list(sc, 2, s7_make_integer(sc, err), s7_make_integer(sc, res)));
                  }
                  static s7_pointer g_getpeername(s7_scheme *sc, s7_pointer args) 
                  {
                    int err;
                    socklen_t res;
                    res = s7_integer(s7_caddr(args));
                    err = getpeername(s7_integer(s7_car(args)), (struct sockaddr *)s7_c_pointer(s7_cadr(args)), &res);
                    return(s7_list(sc, 2, s7_make_integer(sc, err), s7_make_integer(sc, res)));
                  }
                  static s7_pointer g_accept(s7_scheme *sc, s7_pointer args) 
                  {
                    int err;
                    socklen_t res;
                    res = s7_integer(s7_caddr(args));
                    err = accept(s7_integer(s7_car(args)), (struct sockaddr *)s7_c_pointer(s7_cadr(args)), &res);
                    return(s7_list(sc, 2, s7_make_integer(sc, err), s7_make_integer(sc, res)));
                  }
                  static s7_pointer g_getsockopt(s7_scheme *sc, s7_pointer args) 
                  {
                    int err;
                    socklen_t res;
                    res = (socklen_t)s7_integer(s7_list_ref(sc, args, 4));
                    err = getsockopt(s7_integer(s7_car(args)), s7_integer(s7_cadr(args)), s7_integer(s7_caddr(args)), s7_c_pointer(s7_cadddr(args)), &res);
                    return(s7_list(sc, 2, s7_make_integer(sc, err), s7_make_integer(sc, (s7_int)res)));
                  }
                  static s7_pointer g_setsockopt(s7_scheme *sc, s7_pointer args) 
                  {
                    socklen_t res;
                    res = (socklen_t)s7_integer(s7_list_ref(sc, args, 4));
                    return(s7_make_integer(sc, setsockopt(s7_integer(s7_car(args)), s7_integer(s7_cadr(args)), 
                           s7_integer(s7_caddr(args)), s7_c_pointer(s7_cadddr(args)), res)));
                  }
                  static s7_pointer g_recvfrom(s7_scheme *sc, s7_pointer args) 
                  {
                    int err;
                    socklen_t res;
                    res = (socklen_t)s7_integer(s7_list_ref(sc, args, 5));
                    err = recvfrom(s7_integer(s7_car(args)), 
                  		 s7_c_pointer(s7_cadr(args)), 
                  		 s7_integer(s7_caddr(args)), 
                  		 s7_integer(s7_cadddr(args)), 
                  		 (struct sockaddr *)s7_c_pointer(s7_list_ref(sc, args, 4)),
                  		 &res);
                    return(s7_list(sc, 2, s7_make_integer(sc, err), s7_make_integer(sc, (s7_int)res)));
                  }

                  static s7_pointer g_hostent_h_name(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_string(sc, ((struct hostent *)s7_c_pointer(s7_car(args)))->h_name));}
                  static s7_pointer g_netent_n_name(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_string(sc, ((struct netent *)s7_c_pointer(s7_car(args)))->n_name));}
                  static s7_pointer g_servent_s_name(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_string(sc, ((struct servent *)s7_c_pointer(s7_car(args)))->s_name));}
                  static s7_pointer g_servent_s_proto(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_string(sc, ((struct servent *)s7_c_pointer(s7_car(args)))->s_proto));}
                  static s7_pointer g_protoent_p_name(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_string(sc, ((struct protoent *)s7_c_pointer(s7_car(args)))->p_name));}

                  static s7_pointer g_hostent_h_addrtype(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct hostent *)s7_c_pointer(s7_car(args)))->h_addrtype));}
                  static s7_pointer g_hostent_h_length(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct hostent *)s7_c_pointer(s7_car(args)))->h_length));}
                  static s7_pointer g_netent_n_addrtype(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct netent *)s7_c_pointer(s7_car(args)))->n_addrtype));}
                  static s7_pointer g_netent_n_net(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct netent *)s7_c_pointer(s7_car(args)))->n_net));}
                  static s7_pointer g_servent_s_port(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct servent *)s7_c_pointer(s7_car(args)))->s_port));}
                  static s7_pointer g_protoent_p_proto(s7_scheme *sc, s7_pointer args)
                  {return(s7_make_integer(sc, ((struct protoent *)s7_c_pointer(s7_car(args)))->p_proto));}

                  static s7_pointer g_hostent_h_aliases(s7_scheme *sc, s7_pointer args)
                  {
                    s7_pointer p;
                    char **str;	     
                    struct hostent *h;
                    p = s7_nil(sc);
                    h = (struct hostent *)s7_c_pointer(s7_car(args));
                    for (str = h->h_aliases; (str) && (*str); str++)
                      p = s7_cons(sc, s7_make_string(sc, *str), p);
                    return(p);
                  }
                  static s7_pointer g_servent_s_aliases(s7_scheme *sc, s7_pointer args)
                  {
                    s7_pointer p;
                    char **str;	     
                    struct servent *h;
                    p = s7_nil(sc);
                    h = (struct servent *)s7_c_pointer(s7_car(args));
                    for (str = h->s_aliases; (str) && (*str); str++)
                      p = s7_cons(sc, s7_make_string(sc, *str), p);
                    return(p);
                  }
                  static s7_pointer g_netent_n_aliases(s7_scheme *sc, s7_pointer args)
                  {
                    s7_pointer p;
                    char **str;	     
                    struct netent *h;
                    p = s7_nil(sc);
                    h = (struct netent *)s7_c_pointer(s7_car(args));
                    for (str = h->n_aliases; (str) && (*str); str++)
                      p = s7_cons(sc, s7_make_string(sc, *str), p);
                    return(p);
                  }
                  static s7_pointer g_protoent_p_aliases(s7_scheme *sc, s7_pointer args)
                  {
                    s7_pointer p;
                    char **str;	     
                    struct protoent *h;
                    p = s7_nil(sc);
                    h = (struct protoent *)s7_c_pointer(s7_car(args));
                    for (str = h->p_aliases; (str) && (*str); str++)
                      p = s7_cons(sc, s7_make_string(sc, *str), p);
                    return(p);
                  }
                 
void libc_s7_init(s7_scheme *sc);
void libc_s7_init(s7_scheme *sc)
{
  s7_pointer cur_env;
  s7_pointer pcl_s, pl_sx, pl_st, pl_si, pl_sis, pl_ssi, pl_sssi, pl_ssix, pl_sisi, pcl_x, pl_xs, pcl_xi, pl_xi, pl_xt, pcl_xs, pl_xxi, pcl_xxi, pl_xis, pl_xxxi, pl_xssx, pl_iixiixi, pcl_i, pl_ix, pl_it, pcl_is, pl_is, pcl_ix, pcl_iix, pcl_isi, pl_ixi, pl_isi, pl_iix, pl_isx, pcl_ixi, pl_isxi, pl_iisi, pcl_iixi, pl_iixi, pl_issi, pl_ixxi, pcl_ixsi, pl_iiixi, pl_ixiix, pcl_di, pl_ds, pcl_t, pl_tx, pl_ts, pl_ti, pl_txs;
  {
    s7_pointer t, x, s, d, i;
    t = s7_t(sc);
    x = s7_make_symbol(sc, "c-pointer?");
    s = s7_make_symbol(sc, "string?");
    d = s7_make_symbol(sc, "float?");
    i = s7_make_symbol(sc, "integer?");

    pcl_s = s7_make_circular_signature(sc, 0, 1, s);
    pl_sx = s7_make_signature(sc, 2, s, x);
    pl_st = s7_make_signature(sc, 2, s, t);
    pl_si = s7_make_signature(sc, 2, s, i);
    pl_sis = s7_make_signature(sc, 3, s, i, s);
    pl_ssi = s7_make_signature(sc, 3, s, s, i);
    pl_sssi = s7_make_signature(sc, 4, s, s, s, i);
    pl_ssix = s7_make_signature(sc, 4, s, s, i, x);
    pl_sisi = s7_make_signature(sc, 4, s, i, s, i);
    pcl_x = s7_make_circular_signature(sc, 0, 1, x);
    pl_xs = s7_make_signature(sc, 2, x, s);
    pcl_xi = s7_make_circular_signature(sc, 1, 2, x, i);
    pl_xi = s7_make_signature(sc, 2, x, i);
    pl_xt = s7_make_signature(sc, 2, x, t);
    pcl_xs = s7_make_circular_signature(sc, 1, 2, x, s);
    pl_xxi = s7_make_signature(sc, 3, x, x, i);
    pcl_xxi = s7_make_circular_signature(sc, 2, 3, x, x, i);
    pl_xis = s7_make_signature(sc, 3, x, i, s);
    pl_xxxi = s7_make_signature(sc, 4, x, x, x, i);
    pl_xssx = s7_make_signature(sc, 4, x, s, s, x);
    pl_iixiixi = s7_make_signature(sc, 7, i, i, x, i, i, x, i);
    pcl_i = s7_make_circular_signature(sc, 0, 1, i);
    pl_ix = s7_make_signature(sc, 2, i, x);
    pl_it = s7_make_signature(sc, 2, i, t);
    pcl_is = s7_make_circular_signature(sc, 1, 2, i, s);
    pl_is = s7_make_signature(sc, 2, i, s);
    pcl_ix = s7_make_circular_signature(sc, 1, 2, i, x);
    pcl_iix = s7_make_circular_signature(sc, 2, 3, i, i, x);
    pcl_isi = s7_make_circular_signature(sc, 2, 3, i, s, i);
    pl_ixi = s7_make_signature(sc, 3, i, x, i);
    pl_isi = s7_make_signature(sc, 3, i, s, i);
    pl_iix = s7_make_signature(sc, 3, i, i, x);
    pl_isx = s7_make_signature(sc, 3, i, s, x);
    pcl_ixi = s7_make_circular_signature(sc, 2, 3, i, x, i);
    pl_isxi = s7_make_signature(sc, 4, i, s, x, i);
    pl_iisi = s7_make_signature(sc, 4, i, i, s, i);
    pcl_iixi = s7_make_circular_signature(sc, 3, 4, i, i, x, i);
    pl_iixi = s7_make_signature(sc, 4, i, i, x, i);
    pl_issi = s7_make_signature(sc, 4, i, s, s, i);
    pl_ixxi = s7_make_signature(sc, 4, i, x, x, i);
    pcl_ixsi = s7_make_circular_signature(sc, 3, 4, i, x, s, i);
    pl_iiixi = s7_make_signature(sc, 5, i, i, i, x, i);
    pl_ixiix = s7_make_signature(sc, 5, i, x, i, i, x);
    pcl_di = s7_make_circular_signature(sc, 1, 2, d, i);
    pl_ds = s7_make_signature(sc, 2, d, s);
    pcl_t = s7_make_circular_signature(sc, 0, 1, t);
    pl_tx = s7_make_signature(sc, 2, t, x);
    pl_ts = s7_make_signature(sc, 2, t, s);
    pl_ti = s7_make_signature(sc, 2, t, i);
    pl_txs = s7_make_signature(sc, 3, t, x, s);
  }

  cur_env = s7_curlet(sc);

  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_USERRESERVED"), s7_make_integer(sc, (s7_int)IPPORT_USERRESERVED));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_RESERVED"), s7_make_integer(sc, (s7_int)IPPORT_RESERVED));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_ROUTESERVER"), s7_make_integer(sc, (s7_int)IPPORT_ROUTESERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_WHOSERVER"), s7_make_integer(sc, (s7_int)IPPORT_WHOSERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_BIFFUDP"), s7_make_integer(sc, (s7_int)IPPORT_BIFFUDP));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_EFSSERVER"), s7_make_integer(sc, (s7_int)IPPORT_EFSSERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_CMDSERVER"), s7_make_integer(sc, (s7_int)IPPORT_CMDSERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_LOGINSERVER"), s7_make_integer(sc, (s7_int)IPPORT_LOGINSERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_EXECSERVER"), s7_make_integer(sc, (s7_int)IPPORT_EXECSERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_SUPDUP"), s7_make_integer(sc, (s7_int)IPPORT_SUPDUP));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_TTYLINK"), s7_make_integer(sc, (s7_int)IPPORT_TTYLINK));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_FINGER"), s7_make_integer(sc, (s7_int)IPPORT_FINGER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_RJE"), s7_make_integer(sc, (s7_int)IPPORT_RJE));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_TFTP"), s7_make_integer(sc, (s7_int)IPPORT_TFTP));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_MTP"), s7_make_integer(sc, (s7_int)IPPORT_MTP));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_WHOIS"), s7_make_integer(sc, (s7_int)IPPORT_WHOIS));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_NAMESERVER"), s7_make_integer(sc, (s7_int)IPPORT_NAMESERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_TIMESERVER"), s7_make_integer(sc, (s7_int)IPPORT_TIMESERVER));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_SMTP"), s7_make_integer(sc, (s7_int)IPPORT_SMTP));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_TELNET"), s7_make_integer(sc, (s7_int)IPPORT_TELNET));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_FTP"), s7_make_integer(sc, (s7_int)IPPORT_FTP));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_NETSTAT"), s7_make_integer(sc, (s7_int)IPPORT_NETSTAT));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_DAYTIME"), s7_make_integer(sc, (s7_int)IPPORT_DAYTIME));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_SYSTAT"), s7_make_integer(sc, (s7_int)IPPORT_SYSTAT));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_DISCARD"), s7_make_integer(sc, (s7_int)IPPORT_DISCARD));
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPORT_ECHO"), s7_make_integer(sc, (s7_int)IPPORT_ECHO));
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_IGN"), s7_make_c_pointer_with_type(sc, (void*)SIG_IGN, s7_make_symbol(sc, "void*"), s7_f(sc)));
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_DFL"), s7_make_c_pointer_with_type(sc, (void*)SIG_DFL, s7_make_symbol(sc, "void*"), s7_f(sc)));
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_ERR"), s7_make_c_pointer_with_type(sc, (void*)SIG_ERR, s7_make_symbol(sc, "void*"), s7_f(sc)));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_SYNTAX"), s7_make_integer(sc, (s7_int)WRDE_SYNTAX));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_CMDSUB"), s7_make_integer(sc, (s7_int)WRDE_CMDSUB));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_BADVAL"), s7_make_integer(sc, (s7_int)WRDE_BADVAL));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_BADCHAR"), s7_make_integer(sc, (s7_int)WRDE_BADCHAR));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_NOSPACE"), s7_make_integer(sc, (s7_int)WRDE_NOSPACE));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_UNDEF"), s7_make_integer(sc, (s7_int)WRDE_UNDEF));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_SHOWERR"), s7_make_integer(sc, (s7_int)WRDE_SHOWERR));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_REUSE"), s7_make_integer(sc, (s7_int)WRDE_REUSE));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_NOCMD"), s7_make_integer(sc, (s7_int)WRDE_NOCMD));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_APPEND"), s7_make_integer(sc, (s7_int)WRDE_APPEND));
  s7_define(sc, cur_env, s7_make_symbol(sc, "WRDE_DOOFFS"), s7_make_integer(sc, (s7_int)WRDE_DOOFFS));
  s7_define(sc, cur_env, s7_make_symbol(sc, "stderr"), s7_make_c_pointer_with_type(sc, (void*)stderr, s7_make_symbol(sc, "FILE*"), s7_f(sc)));
  s7_define(sc, cur_env, s7_make_symbol(sc, "stdout"), s7_make_c_pointer_with_type(sc, (void*)stdout, s7_make_symbol(sc, "FILE*"), s7_f(sc)));
  s7_define(sc, cur_env, s7_make_symbol(sc, "stdin"), s7_make_c_pointer_with_type(sc, (void*)stdin, s7_make_symbol(sc, "FILE*"), s7_f(sc)));

#ifdef _PATH_SERVICES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PATH_SERVICES"), s7_make_string(sc, (char*)_PATH_SERVICES));
#endif
#ifdef _PATH_PROTOCOLS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PATH_PROTOCOLS"), s7_make_string(sc, (char*)_PATH_PROTOCOLS));
#endif
#ifdef _PATH_NSSWITCH_CONF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PATH_NSSWITCH_CONF"), s7_make_string(sc, (char*)_PATH_NSSWITCH_CONF));
#endif
#ifdef _PATH_NETWORKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PATH_NETWORKS"), s7_make_string(sc, (char*)_PATH_NETWORKS));
#endif
#ifdef _PATH_HOSTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PATH_HOSTS"), s7_make_string(sc, (char*)_PATH_HOSTS));
#endif
#ifdef _PATH_HEQUIV
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PATH_HEQUIV"), s7_make_string(sc, (char*)_PATH_HEQUIV));
#endif
#ifdef SHUT_RDWR
  s7_define(sc, cur_env, s7_make_symbol(sc, "SHUT_RDWR"), s7_make_integer(sc, (s7_int)SHUT_RDWR));
#endif
#ifdef SHUT_WR
  s7_define(sc, cur_env, s7_make_symbol(sc, "SHUT_WR"), s7_make_integer(sc, (s7_int)SHUT_WR));
#endif
#ifdef SHUT_RD
  s7_define(sc, cur_env, s7_make_symbol(sc, "SHUT_RD"), s7_make_integer(sc, (s7_int)SHUT_RD));
#endif
#ifdef SOL_IRDA
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_IRDA"), s7_make_integer(sc, (s7_int)SOL_IRDA));
#endif
#ifdef SOL_AAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_AAL"), s7_make_integer(sc, (s7_int)SOL_AAL));
#endif
#ifdef SOL_ATM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_ATM"), s7_make_integer(sc, (s7_int)SOL_ATM));
#endif
#ifdef SOL_PACKET
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_PACKET"), s7_make_integer(sc, (s7_int)SOL_PACKET));
#endif
#ifdef SOL_X25
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_X25"), s7_make_integer(sc, (s7_int)SOL_X25));
#endif
#ifdef SOL_DECNET
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_DECNET"), s7_make_integer(sc, (s7_int)SOL_DECNET));
#endif
#ifdef SOL_RAW
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOL_RAW"), s7_make_integer(sc, (s7_int)SOL_RAW));
#endif
#ifdef IPPROTO_RAW
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_RAW"), s7_make_integer(sc, (s7_int)IPPROTO_RAW));
#endif
#ifdef IPPROTO_UDPLITE
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_UDPLITE"), s7_make_integer(sc, (s7_int)IPPROTO_UDPLITE));
#endif
#ifdef IPPROTO_SCTP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_SCTP"), s7_make_integer(sc, (s7_int)IPPROTO_SCTP));
#endif
#ifdef IPPROTO_COMP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_COMP"), s7_make_integer(sc, (s7_int)IPPROTO_COMP));
#endif
#ifdef IPPROTO_PIM
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_PIM"), s7_make_integer(sc, (s7_int)IPPROTO_PIM));
#endif
#ifdef IPPROTO_ENCAP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_ENCAP"), s7_make_integer(sc, (s7_int)IPPROTO_ENCAP));
#endif
#ifdef IPPROTO_MTP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_MTP"), s7_make_integer(sc, (s7_int)IPPROTO_MTP));
#endif
#ifdef IPPROTO_DSTOPTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_DSTOPTS"), s7_make_integer(sc, (s7_int)IPPROTO_DSTOPTS));
#endif
#ifdef IPPROTO_NONE
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_NONE"), s7_make_integer(sc, (s7_int)IPPROTO_NONE));
#endif
#ifdef IPPROTO_ICMPV6
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_ICMPV6"), s7_make_integer(sc, (s7_int)IPPROTO_ICMPV6));
#endif
#ifdef IPPROTO_AH
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_AH"), s7_make_integer(sc, (s7_int)IPPROTO_AH));
#endif
#ifdef IPPROTO_ESP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_ESP"), s7_make_integer(sc, (s7_int)IPPROTO_ESP));
#endif
#ifdef IPPROTO_GRE
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_GRE"), s7_make_integer(sc, (s7_int)IPPROTO_GRE));
#endif
#ifdef IPPROTO_RSVP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_RSVP"), s7_make_integer(sc, (s7_int)IPPROTO_RSVP));
#endif
#ifdef IPPROTO_FRAGMENT
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_FRAGMENT"), s7_make_integer(sc, (s7_int)IPPROTO_FRAGMENT));
#endif
#ifdef IPPROTO_ROUTING
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_ROUTING"), s7_make_integer(sc, (s7_int)IPPROTO_ROUTING));
#endif
#ifdef IPPROTO_IPV6
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_IPV6"), s7_make_integer(sc, (s7_int)IPPROTO_IPV6));
#endif
#ifdef IPPROTO_DCCP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_DCCP"), s7_make_integer(sc, (s7_int)IPPROTO_DCCP));
#endif
#ifdef IPPROTO_TP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_TP"), s7_make_integer(sc, (s7_int)IPPROTO_TP));
#endif
#ifdef IPPROTO_IDP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_IDP"), s7_make_integer(sc, (s7_int)IPPROTO_IDP));
#endif
#ifdef IPPROTO_UDP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_UDP"), s7_make_integer(sc, (s7_int)IPPROTO_UDP));
#endif
#ifdef IPPROTO_PUP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_PUP"), s7_make_integer(sc, (s7_int)IPPROTO_PUP));
#endif
#ifdef IPPROTO_EGP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_EGP"), s7_make_integer(sc, (s7_int)IPPROTO_EGP));
#endif
#ifdef IPPROTO_TCP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_TCP"), s7_make_integer(sc, (s7_int)IPPROTO_TCP));
#endif
#ifdef IPPROTO_IPIP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_IPIP"), s7_make_integer(sc, (s7_int)IPPROTO_IPIP));
#endif
#ifdef IPPROTO_IGMP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_IGMP"), s7_make_integer(sc, (s7_int)IPPROTO_IGMP));
#endif
#ifdef IPPROTO_ICMP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_ICMP"), s7_make_integer(sc, (s7_int)IPPROTO_ICMP));
#endif
#ifdef IPPROTO_HOPOPTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_HOPOPTS"), s7_make_integer(sc, (s7_int)IPPROTO_HOPOPTS));
#endif
#ifdef IPPROTO_IP
  s7_define(sc, cur_env, s7_make_symbol(sc, "IPPROTO_IP"), s7_make_integer(sc, (s7_int)IPPROTO_IP));
#endif
#ifdef MSG_CMSG_CLOEXEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_CMSG_CLOEXEC"), s7_make_integer(sc, (s7_int)MSG_CMSG_CLOEXEC));
#endif
#ifdef MSG_MORE
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_MORE"), s7_make_integer(sc, (s7_int)MSG_MORE));
#endif
#ifdef MSG_NOSIGNAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_NOSIGNAL"), s7_make_integer(sc, (s7_int)MSG_NOSIGNAL));
#endif
#ifdef MSG_ERRQUEUE
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_ERRQUEUE"), s7_make_integer(sc, (s7_int)MSG_ERRQUEUE));
#endif
#ifdef MSG_RST
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_RST"), s7_make_integer(sc, (s7_int)MSG_RST));
#endif
#ifdef MSG_CONFIRM
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_CONFIRM"), s7_make_integer(sc, (s7_int)MSG_CONFIRM));
#endif
#ifdef MSG_SYN
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_SYN"), s7_make_integer(sc, (s7_int)MSG_SYN));
#endif
#ifdef MSG_FIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_FIN"), s7_make_integer(sc, (s7_int)MSG_FIN));
#endif
#ifdef MSG_WAITALL
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_WAITALL"), s7_make_integer(sc, (s7_int)MSG_WAITALL));
#endif
#ifdef MSG_WAITFORONE
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_WAITFORONE"), s7_make_integer(sc, (s7_int)MSG_WAITFORONE));
#endif
#ifdef MSG_EOR
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_EOR"), s7_make_integer(sc, (s7_int)MSG_EOR));
#endif
#ifdef MSG_DONTWAIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_DONTWAIT"), s7_make_integer(sc, (s7_int)MSG_DONTWAIT));
#endif
#ifdef MSG_TRUNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_TRUNC"), s7_make_integer(sc, (s7_int)MSG_TRUNC));
#endif
#ifdef MSG_PROXY
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_PROXY"), s7_make_integer(sc, (s7_int)MSG_PROXY));
#endif
#ifdef MSG_CTRUNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_CTRUNC"), s7_make_integer(sc, (s7_int)MSG_CTRUNC));
#endif
#ifdef MSG_DONTROUTE
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_DONTROUTE"), s7_make_integer(sc, (s7_int)MSG_DONTROUTE));
#endif
#ifdef MSG_PEEK
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_PEEK"), s7_make_integer(sc, (s7_int)MSG_PEEK));
#endif
#ifdef MSG_OOB
  s7_define(sc, cur_env, s7_make_symbol(sc, "MSG_OOB"), s7_make_integer(sc, (s7_int)MSG_OOB));
#endif
#ifdef AF_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_MAX"), s7_make_integer(sc, (s7_int)AF_MAX));
#endif
#ifdef AF_IEEE802154
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_IEEE802154"), s7_make_integer(sc, (s7_int)AF_IEEE802154));
#endif
#ifdef AF_PHONET
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_PHONET"), s7_make_integer(sc, (s7_int)AF_PHONET));
#endif
#ifdef AF_ISDN
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ISDN"), s7_make_integer(sc, (s7_int)AF_ISDN));
#endif
#ifdef AF_RXRPC
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_RXRPC"), s7_make_integer(sc, (s7_int)AF_RXRPC));
#endif
#ifdef AF_IUCV
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_IUCV"), s7_make_integer(sc, (s7_int)AF_IUCV));
#endif
#ifdef AF_BLUETOOTH
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_BLUETOOTH"), s7_make_integer(sc, (s7_int)AF_BLUETOOTH));
#endif
#ifdef AF_TIPC
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_TIPC"), s7_make_integer(sc, (s7_int)AF_TIPC));
#endif
#ifdef AF_CAN
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_CAN"), s7_make_integer(sc, (s7_int)AF_CAN));
#endif
#ifdef AF_LLC
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_LLC"), s7_make_integer(sc, (s7_int)AF_LLC));
#endif
#ifdef AF_WANPIPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_WANPIPE"), s7_make_integer(sc, (s7_int)AF_WANPIPE));
#endif
#ifdef AF_PPPOX
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_PPPOX"), s7_make_integer(sc, (s7_int)AF_PPPOX));
#endif
#ifdef AF_IRDA
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_IRDA"), s7_make_integer(sc, (s7_int)AF_IRDA));
#endif
#ifdef AF_SNA
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_SNA"), s7_make_integer(sc, (s7_int)AF_SNA));
#endif
#ifdef AF_RDS
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_RDS"), s7_make_integer(sc, (s7_int)AF_RDS));
#endif
#ifdef AF_ATMSVC
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ATMSVC"), s7_make_integer(sc, (s7_int)AF_ATMSVC));
#endif
#ifdef AF_ECONET
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ECONET"), s7_make_integer(sc, (s7_int)AF_ECONET));
#endif
#ifdef AF_ASH
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ASH"), s7_make_integer(sc, (s7_int)AF_ASH));
#endif
#ifdef AF_PACKET
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_PACKET"), s7_make_integer(sc, (s7_int)AF_PACKET));
#endif
#ifdef AF_ROUTE
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ROUTE"), s7_make_integer(sc, (s7_int)AF_ROUTE));
#endif
#ifdef AF_NETLINK
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_NETLINK"), s7_make_integer(sc, (s7_int)AF_NETLINK));
#endif
#ifdef AF_KEY
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_KEY"), s7_make_integer(sc, (s7_int)AF_KEY));
#endif
#ifdef AF_SECURITY
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_SECURITY"), s7_make_integer(sc, (s7_int)AF_SECURITY));
#endif
#ifdef AF_NETBEUI
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_NETBEUI"), s7_make_integer(sc, (s7_int)AF_NETBEUI));
#endif
#ifdef AF_DECnet
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_DECnet"), s7_make_integer(sc, (s7_int)AF_DECnet));
#endif
#ifdef AF_ROSE
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ROSE"), s7_make_integer(sc, (s7_int)AF_ROSE));
#endif
#ifdef AF_INET6
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_INET6"), s7_make_integer(sc, (s7_int)AF_INET6));
#endif
#ifdef AF_X25
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_X25"), s7_make_integer(sc, (s7_int)AF_X25));
#endif
#ifdef AF_ATMPVC
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_ATMPVC"), s7_make_integer(sc, (s7_int)AF_ATMPVC));
#endif
#ifdef AF_BRIDGE
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_BRIDGE"), s7_make_integer(sc, (s7_int)AF_BRIDGE));
#endif
#ifdef AF_NETROM
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_NETROM"), s7_make_integer(sc, (s7_int)AF_NETROM));
#endif
#ifdef AF_APPLETALK
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_APPLETALK"), s7_make_integer(sc, (s7_int)AF_APPLETALK));
#endif
#ifdef AF_IPX
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_IPX"), s7_make_integer(sc, (s7_int)AF_IPX));
#endif
#ifdef AF_AX25
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_AX25"), s7_make_integer(sc, (s7_int)AF_AX25));
#endif
#ifdef AF_INET
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_INET"), s7_make_integer(sc, (s7_int)AF_INET));
#endif
#ifdef AF_FILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_FILE"), s7_make_integer(sc, (s7_int)AF_FILE));
#endif
#ifdef AF_UNIX
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_UNIX"), s7_make_integer(sc, (s7_int)AF_UNIX));
#endif
#ifdef AF_LOCAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_LOCAL"), s7_make_integer(sc, (s7_int)AF_LOCAL));
#endif
#ifdef AF_UNSPEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "AF_UNSPEC"), s7_make_integer(sc, (s7_int)AF_UNSPEC));
#endif
#ifdef PF_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_MAX"), s7_make_integer(sc, (s7_int)PF_MAX));
#endif
#ifdef PF_IEEE802154
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_IEEE802154"), s7_make_integer(sc, (s7_int)PF_IEEE802154));
#endif
#ifdef PF_PHONET
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_PHONET"), s7_make_integer(sc, (s7_int)PF_PHONET));
#endif
#ifdef PF_ISDN
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ISDN"), s7_make_integer(sc, (s7_int)PF_ISDN));
#endif
#ifdef PF_RXRPC
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_RXRPC"), s7_make_integer(sc, (s7_int)PF_RXRPC));
#endif
#ifdef PF_IUCV
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_IUCV"), s7_make_integer(sc, (s7_int)PF_IUCV));
#endif
#ifdef PF_BLUETOOTH
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_BLUETOOTH"), s7_make_integer(sc, (s7_int)PF_BLUETOOTH));
#endif
#ifdef PF_TIPC
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_TIPC"), s7_make_integer(sc, (s7_int)PF_TIPC));
#endif
#ifdef PF_CAN
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_CAN"), s7_make_integer(sc, (s7_int)PF_CAN));
#endif
#ifdef PF_LLC
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_LLC"), s7_make_integer(sc, (s7_int)PF_LLC));
#endif
#ifdef PF_WANPIPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_WANPIPE"), s7_make_integer(sc, (s7_int)PF_WANPIPE));
#endif
#ifdef PF_PPPOX
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_PPPOX"), s7_make_integer(sc, (s7_int)PF_PPPOX));
#endif
#ifdef PF_IRDA
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_IRDA"), s7_make_integer(sc, (s7_int)PF_IRDA));
#endif
#ifdef PF_SNA
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_SNA"), s7_make_integer(sc, (s7_int)PF_SNA));
#endif
#ifdef PF_RDS
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_RDS"), s7_make_integer(sc, (s7_int)PF_RDS));
#endif
#ifdef PF_ATMSVC
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ATMSVC"), s7_make_integer(sc, (s7_int)PF_ATMSVC));
#endif
#ifdef PF_ECONET
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ECONET"), s7_make_integer(sc, (s7_int)PF_ECONET));
#endif
#ifdef PF_ASH
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ASH"), s7_make_integer(sc, (s7_int)PF_ASH));
#endif
#ifdef PF_PACKET
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_PACKET"), s7_make_integer(sc, (s7_int)PF_PACKET));
#endif
#ifdef PF_ROUTE
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ROUTE"), s7_make_integer(sc, (s7_int)PF_ROUTE));
#endif
#ifdef PF_NETLINK
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_NETLINK"), s7_make_integer(sc, (s7_int)PF_NETLINK));
#endif
#ifdef PF_KEY
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_KEY"), s7_make_integer(sc, (s7_int)PF_KEY));
#endif
#ifdef PF_SECURITY
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_SECURITY"), s7_make_integer(sc, (s7_int)PF_SECURITY));
#endif
#ifdef PF_NETBEUI
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_NETBEUI"), s7_make_integer(sc, (s7_int)PF_NETBEUI));
#endif
#ifdef PF_DECnet
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_DECnet"), s7_make_integer(sc, (s7_int)PF_DECnet));
#endif
#ifdef PF_ROSE
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ROSE"), s7_make_integer(sc, (s7_int)PF_ROSE));
#endif
#ifdef PF_INET6
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_INET6"), s7_make_integer(sc, (s7_int)PF_INET6));
#endif
#ifdef PF_X25
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_X25"), s7_make_integer(sc, (s7_int)PF_X25));
#endif
#ifdef PF_ATMPVC
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_ATMPVC"), s7_make_integer(sc, (s7_int)PF_ATMPVC));
#endif
#ifdef PF_BRIDGE
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_BRIDGE"), s7_make_integer(sc, (s7_int)PF_BRIDGE));
#endif
#ifdef PF_NETROM
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_NETROM"), s7_make_integer(sc, (s7_int)PF_NETROM));
#endif
#ifdef PF_APPLETALK
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_APPLETALK"), s7_make_integer(sc, (s7_int)PF_APPLETALK));
#endif
#ifdef PF_IPX
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_IPX"), s7_make_integer(sc, (s7_int)PF_IPX));
#endif
#ifdef PF_AX25
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_AX25"), s7_make_integer(sc, (s7_int)PF_AX25));
#endif
#ifdef PF_INET
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_INET"), s7_make_integer(sc, (s7_int)PF_INET));
#endif
#ifdef PF_FILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_FILE"), s7_make_integer(sc, (s7_int)PF_FILE));
#endif
#ifdef PF_UNIX
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_UNIX"), s7_make_integer(sc, (s7_int)PF_UNIX));
#endif
#ifdef PF_LOCAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_LOCAL"), s7_make_integer(sc, (s7_int)PF_LOCAL));
#endif
#ifdef PF_UNSPEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "PF_UNSPEC"), s7_make_integer(sc, (s7_int)PF_UNSPEC));
#endif
#ifdef SOCK_NONBLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_NONBLOCK"), s7_make_integer(sc, (s7_int)SOCK_NONBLOCK));
#endif
#ifdef SOCK_CLOEXEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_CLOEXEC"), s7_make_integer(sc, (s7_int)SOCK_CLOEXEC));
#endif
#ifdef SOCK_PACKET
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_PACKET"), s7_make_integer(sc, (s7_int)SOCK_PACKET));
#endif
#ifdef SOCK_DCCP
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_DCCP"), s7_make_integer(sc, (s7_int)SOCK_DCCP));
#endif
#ifdef SOCK_SEQPACKET
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_SEQPACKET"), s7_make_integer(sc, (s7_int)SOCK_SEQPACKET));
#endif
#ifdef SOCK_RDM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_RDM"), s7_make_integer(sc, (s7_int)SOCK_RDM));
#endif
#ifdef SOCK_RAW
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_RAW"), s7_make_integer(sc, (s7_int)SOCK_RAW));
#endif
#ifdef SOCK_DGRAM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_DGRAM"), s7_make_integer(sc, (s7_int)SOCK_DGRAM));
#endif
#ifdef SOCK_STREAM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SOCK_STREAM"), s7_make_integer(sc, (s7_int)SOCK_STREAM));
#endif
#ifdef NI_DGRAM
  s7_define(sc, cur_env, s7_make_symbol(sc, "NI_DGRAM"), s7_make_integer(sc, (s7_int)NI_DGRAM));
#endif
#ifdef NI_NAMEREQD
  s7_define(sc, cur_env, s7_make_symbol(sc, "NI_NAMEREQD"), s7_make_integer(sc, (s7_int)NI_NAMEREQD));
#endif
#ifdef NI_NOFQDN
  s7_define(sc, cur_env, s7_make_symbol(sc, "NI_NOFQDN"), s7_make_integer(sc, (s7_int)NI_NOFQDN));
#endif
#ifdef NI_NUMERICSERV
  s7_define(sc, cur_env, s7_make_symbol(sc, "NI_NUMERICSERV"), s7_make_integer(sc, (s7_int)NI_NUMERICSERV));
#endif
#ifdef NI_NUMERICHOST
  s7_define(sc, cur_env, s7_make_symbol(sc, "NI_NUMERICHOST"), s7_make_integer(sc, (s7_int)NI_NUMERICHOST));
#endif
#ifdef EAI_OVERFLOW
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_OVERFLOW"), s7_make_integer(sc, (s7_int)EAI_OVERFLOW));
#endif
#ifdef EAI_SYSTEM
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_SYSTEM"), s7_make_integer(sc, (s7_int)EAI_SYSTEM));
#endif
#ifdef EAI_MEMORY
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_MEMORY"), s7_make_integer(sc, (s7_int)EAI_MEMORY));
#endif
#ifdef EAI_SERVICE
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_SERVICE"), s7_make_integer(sc, (s7_int)EAI_SERVICE));
#endif
#ifdef EAI_SOCKTYPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_SOCKTYPE"), s7_make_integer(sc, (s7_int)EAI_SOCKTYPE));
#endif
#ifdef EAI_FAMILY
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_FAMILY"), s7_make_integer(sc, (s7_int)EAI_FAMILY));
#endif
#ifdef EAI_FAIL
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_FAIL"), s7_make_integer(sc, (s7_int)EAI_FAIL));
#endif
#ifdef EAI_AGAIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_AGAIN"), s7_make_integer(sc, (s7_int)EAI_AGAIN));
#endif
#ifdef EAI_NONAME
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_NONAME"), s7_make_integer(sc, (s7_int)EAI_NONAME));
#endif
#ifdef EAI_BADFLAGS
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAI_BADFLAGS"), s7_make_integer(sc, (s7_int)EAI_BADFLAGS));
#endif
#ifdef AI_NUMERICSERV
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_NUMERICSERV"), s7_make_integer(sc, (s7_int)AI_NUMERICSERV));
#endif
#ifdef AI_ADDRCONFIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_ADDRCONFIG"), s7_make_integer(sc, (s7_int)AI_ADDRCONFIG));
#endif
#ifdef AI_ALL
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_ALL"), s7_make_integer(sc, (s7_int)AI_ALL));
#endif
#ifdef AI_V4MAPPED
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_V4MAPPED"), s7_make_integer(sc, (s7_int)AI_V4MAPPED));
#endif
#ifdef AI_NUMERICHOST
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_NUMERICHOST"), s7_make_integer(sc, (s7_int)AI_NUMERICHOST));
#endif
#ifdef AI_CANONNAME
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_CANONNAME"), s7_make_integer(sc, (s7_int)AI_CANONNAME));
#endif
#ifdef AI_PASSIVE
  s7_define(sc, cur_env, s7_make_symbol(sc, "AI_PASSIVE"), s7_make_integer(sc, (s7_int)AI_PASSIVE));
#endif
#ifdef SIG_SETMASK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_SETMASK"), s7_make_integer(sc, (s7_int)SIG_SETMASK));
#endif
#ifdef SIG_UNBLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_UNBLOCK"), s7_make_integer(sc, (s7_int)SIG_UNBLOCK));
#endif
#ifdef SIG_BLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_BLOCK"), s7_make_integer(sc, (s7_int)SIG_BLOCK));
#endif
#ifdef SA_STACK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_STACK"), s7_make_integer(sc, (s7_int)SA_STACK));
#endif
#ifdef SA_ONESHOT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_ONESHOT"), s7_make_integer(sc, (s7_int)SA_ONESHOT));
#endif
#ifdef SA_NOMASK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_NOMASK"), s7_make_integer(sc, (s7_int)SA_NOMASK));
#endif
#ifdef SA_RESETHAND
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_RESETHAND"), s7_make_integer(sc, (s7_int)SA_RESETHAND));
#endif
#ifdef SA_NODEFER
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_NODEFER"), s7_make_integer(sc, (s7_int)SA_NODEFER));
#endif
#ifdef SA_RESTART
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_RESTART"), s7_make_integer(sc, (s7_int)SA_RESTART));
#endif
#ifdef SA_ONSTACK
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_ONSTACK"), s7_make_integer(sc, (s7_int)SA_ONSTACK));
#endif
#ifdef SA_SIGINFO
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_SIGINFO"), s7_make_integer(sc, (s7_int)SA_SIGINFO));
#endif
#ifdef SA_NOCLDWAIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_NOCLDWAIT"), s7_make_integer(sc, (s7_int)SA_NOCLDWAIT));
#endif
#ifdef SA_NOCLDSTOP
  s7_define(sc, cur_env, s7_make_symbol(sc, "SA_NOCLDSTOP"), s7_make_integer(sc, (s7_int)SA_NOCLDSTOP));
#endif
#ifdef PRIO_USER
  s7_define(sc, cur_env, s7_make_symbol(sc, "PRIO_USER"), s7_make_integer(sc, (s7_int)PRIO_USER));
#endif
#ifdef PRIO_PGRP
  s7_define(sc, cur_env, s7_make_symbol(sc, "PRIO_PGRP"), s7_make_integer(sc, (s7_int)PRIO_PGRP));
#endif
#ifdef PRIO_PROCESS
  s7_define(sc, cur_env, s7_make_symbol(sc, "PRIO_PROCESS"), s7_make_integer(sc, (s7_int)PRIO_PROCESS));
#endif
#ifdef PRIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "PRIO_MAX"), s7_make_integer(sc, (s7_int)PRIO_MAX));
#endif
#ifdef PRIO_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "PRIO_MIN"), s7_make_integer(sc, (s7_int)PRIO_MIN));
#endif
#ifdef RUSAGE_LWP
  s7_define(sc, cur_env, s7_make_symbol(sc, "RUSAGE_LWP"), s7_make_integer(sc, (s7_int)RUSAGE_LWP));
#endif
#ifdef RUSAGE_THREAD
  s7_define(sc, cur_env, s7_make_symbol(sc, "RUSAGE_THREAD"), s7_make_integer(sc, (s7_int)RUSAGE_THREAD));
#endif
#ifdef RUSAGE_CHILDREN
  s7_define(sc, cur_env, s7_make_symbol(sc, "RUSAGE_CHILDREN"), s7_make_integer(sc, (s7_int)RUSAGE_CHILDREN));
#endif
#ifdef RUSAGE_SELF
  s7_define(sc, cur_env, s7_make_symbol(sc, "RUSAGE_SELF"), s7_make_integer(sc, (s7_int)RUSAGE_SELF));
#endif
#ifdef RLIM_SAVED_CUR
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIM_SAVED_CUR"), s7_make_integer(sc, (s7_int)RLIM_SAVED_CUR));
#endif
#ifdef RLIM_SAVED_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIM_SAVED_MAX"), s7_make_integer(sc, (s7_int)RLIM_SAVED_MAX));
#endif
#ifdef RLIM_INFINITY
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIM_INFINITY"), s7_make_integer(sc, (s7_int)RLIM_INFINITY));
#endif
#ifdef RLIM_NLIMITS
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIM_NLIMITS"), s7_make_integer(sc, (s7_int)RLIM_NLIMITS));
#endif
#ifdef RLIMIT_NLIMITS
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_NLIMITS"), s7_make_integer(sc, (s7_int)RLIMIT_NLIMITS));
#endif
#ifdef RLIMIT_RTPRIO
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_RTPRIO"), s7_make_integer(sc, (s7_int)RLIMIT_RTPRIO));
#endif
#ifdef RLIMIT_NICE
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_NICE"), s7_make_integer(sc, (s7_int)RLIMIT_NICE));
#endif
#ifdef RLIMIT_MSGQUEUE
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_MSGQUEUE"), s7_make_integer(sc, (s7_int)RLIMIT_MSGQUEUE));
#endif
#ifdef RLIMIT_SIGPENDING
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_SIGPENDING"), s7_make_integer(sc, (s7_int)RLIMIT_SIGPENDING));
#endif
#ifdef RLIMIT_LOCKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_LOCKS"), s7_make_integer(sc, (s7_int)RLIMIT_LOCKS));
#endif
#ifdef RLIMIT_MEMLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_MEMLOCK"), s7_make_integer(sc, (s7_int)RLIMIT_MEMLOCK));
#endif
#ifdef RLIMIT_NPROC
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_NPROC"), s7_make_integer(sc, (s7_int)RLIMIT_NPROC));
#endif
#ifdef RLIMIT_AS
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_AS"), s7_make_integer(sc, (s7_int)RLIMIT_AS));
#endif
#ifdef RLIMIT_OFILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_OFILE"), s7_make_integer(sc, (s7_int)RLIMIT_OFILE));
#endif
#ifdef RLIMIT_NOFILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_NOFILE"), s7_make_integer(sc, (s7_int)RLIMIT_NOFILE));
#endif
#ifdef RLIMIT_RSS
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_RSS"), s7_make_integer(sc, (s7_int)RLIMIT_RSS));
#endif
#ifdef RLIMIT_CORE
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_CORE"), s7_make_integer(sc, (s7_int)RLIMIT_CORE));
#endif
#ifdef RLIMIT_STACK
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_STACK"), s7_make_integer(sc, (s7_int)RLIMIT_STACK));
#endif
#ifdef RLIMIT_DATA
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_DATA"), s7_make_integer(sc, (s7_int)RLIMIT_DATA));
#endif
#ifdef RLIMIT_FSIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_FSIZE"), s7_make_integer(sc, (s7_int)RLIMIT_FSIZE));
#endif
#ifdef RLIMIT_CPU
  s7_define(sc, cur_env, s7_make_symbol(sc, "RLIMIT_CPU"), s7_make_integer(sc, (s7_int)RLIMIT_CPU));
#endif
#ifdef WNOWAIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "WNOWAIT"), s7_make_integer(sc, (s7_int)WNOWAIT));
#endif
#ifdef WCONTINUED
  s7_define(sc, cur_env, s7_make_symbol(sc, "WCONTINUED"), s7_make_integer(sc, (s7_int)WCONTINUED));
#endif
#ifdef WEXITED
  s7_define(sc, cur_env, s7_make_symbol(sc, "WEXITED"), s7_make_integer(sc, (s7_int)WEXITED));
#endif
#ifdef WSTOPPED
  s7_define(sc, cur_env, s7_make_symbol(sc, "WSTOPPED"), s7_make_integer(sc, (s7_int)WSTOPPED));
#endif
#ifdef WUNTRACED
  s7_define(sc, cur_env, s7_make_symbol(sc, "WUNTRACED"), s7_make_integer(sc, (s7_int)WUNTRACED));
#endif
#ifdef WNOHANG
  s7_define(sc, cur_env, s7_make_symbol(sc, "WNOHANG"), s7_make_integer(sc, (s7_int)WNOHANG));
#endif
#ifdef SIGUNUSED
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGUNUSED"), s7_make_integer(sc, (s7_int)SIGUNUSED));
#endif
#ifdef SIGSYS
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGSYS"), s7_make_integer(sc, (s7_int)SIGSYS));
#endif
#ifdef SIGPWR
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGPWR"), s7_make_integer(sc, (s7_int)SIGPWR));
#endif
#ifdef SIGIO
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGIO"), s7_make_integer(sc, (s7_int)SIGIO));
#endif
#ifdef SIGPOLL
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGPOLL"), s7_make_integer(sc, (s7_int)SIGPOLL));
#endif
#ifdef SIGWINCH
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGWINCH"), s7_make_integer(sc, (s7_int)SIGWINCH));
#endif
#ifdef SIGPROF
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGPROF"), s7_make_integer(sc, (s7_int)SIGPROF));
#endif
#ifdef SIGVTALRM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGVTALRM"), s7_make_integer(sc, (s7_int)SIGVTALRM));
#endif
#ifdef SIGXFSZ
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGXFSZ"), s7_make_integer(sc, (s7_int)SIGXFSZ));
#endif
#ifdef SIGXCPU
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGXCPU"), s7_make_integer(sc, (s7_int)SIGXCPU));
#endif
#ifdef SIGURG
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGURG"), s7_make_integer(sc, (s7_int)SIGURG));
#endif
#ifdef SIGTTOU
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGTTOU"), s7_make_integer(sc, (s7_int)SIGTTOU));
#endif
#ifdef SIGTTIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGTTIN"), s7_make_integer(sc, (s7_int)SIGTTIN));
#endif
#ifdef SIGTSTP
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGTSTP"), s7_make_integer(sc, (s7_int)SIGTSTP));
#endif
#ifdef SIGSTOP
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGSTOP"), s7_make_integer(sc, (s7_int)SIGSTOP));
#endif
#ifdef SIGCONT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGCONT"), s7_make_integer(sc, (s7_int)SIGCONT));
#endif
#ifdef SIGCHLD
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGCHLD"), s7_make_integer(sc, (s7_int)SIGCHLD));
#endif
#ifdef SIGCLD
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGCLD"), s7_make_integer(sc, (s7_int)SIGCLD));
#endif
#ifdef SIGSTKFLT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGSTKFLT"), s7_make_integer(sc, (s7_int)SIGSTKFLT));
#endif
#ifdef SIGTERM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGTERM"), s7_make_integer(sc, (s7_int)SIGTERM));
#endif
#ifdef SIGALRM
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGALRM"), s7_make_integer(sc, (s7_int)SIGALRM));
#endif
#ifdef SIGPIPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGPIPE"), s7_make_integer(sc, (s7_int)SIGPIPE));
#endif
#ifdef SIGUSR2
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGUSR2"), s7_make_integer(sc, (s7_int)SIGUSR2));
#endif
#ifdef SIGSEGV
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGSEGV"), s7_make_integer(sc, (s7_int)SIGSEGV));
#endif
#ifdef SIGUSR1
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGUSR1"), s7_make_integer(sc, (s7_int)SIGUSR1));
#endif
#ifdef SIGKILL
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGKILL"), s7_make_integer(sc, (s7_int)SIGKILL));
#endif
#ifdef SIGFPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGFPE"), s7_make_integer(sc, (s7_int)SIGFPE));
#endif
#ifdef SIGBUS
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGBUS"), s7_make_integer(sc, (s7_int)SIGBUS));
#endif
#ifdef SIGIOT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGIOT"), s7_make_integer(sc, (s7_int)SIGIOT));
#endif
#ifdef SIGABRT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGABRT"), s7_make_integer(sc, (s7_int)SIGABRT));
#endif
#ifdef SIGTRAP
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGTRAP"), s7_make_integer(sc, (s7_int)SIGTRAP));
#endif
#ifdef SIGILL
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGILL"), s7_make_integer(sc, (s7_int)SIGILL));
#endif
#ifdef SIGQUIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGQUIT"), s7_make_integer(sc, (s7_int)SIGQUIT));
#endif
#ifdef SIGINT
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGINT"), s7_make_integer(sc, (s7_int)SIGINT));
#endif
#ifdef SIGHUP
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIGHUP"), s7_make_integer(sc, (s7_int)SIGHUP));
#endif
#ifdef GLOB_NOSYS
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOSYS"), s7_make_integer(sc, (s7_int)GLOB_NOSYS));
#endif
#ifdef GLOB_NOMATCH
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOMATCH"), s7_make_integer(sc, (s7_int)GLOB_NOMATCH));
#endif
#ifdef GLOB_ABORTED
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_ABORTED"), s7_make_integer(sc, (s7_int)GLOB_ABORTED));
#endif
#ifdef GLOB_NOSPACE
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOSPACE"), s7_make_integer(sc, (s7_int)GLOB_NOSPACE));
#endif
#ifdef GLOB_TILDE_CHECK
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_TILDE_CHECK"), s7_make_integer(sc, (s7_int)GLOB_TILDE_CHECK));
#endif
#ifdef GLOB_ONLYDIR
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_ONLYDIR"), s7_make_integer(sc, (s7_int)GLOB_ONLYDIR));
#endif
#ifdef GLOB_TILDE
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_TILDE"), s7_make_integer(sc, (s7_int)GLOB_TILDE));
#endif
#ifdef GLOB_NOMAGIC
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOMAGIC"), s7_make_integer(sc, (s7_int)GLOB_NOMAGIC));
#endif
#ifdef GLOB_BRACE
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_BRACE"), s7_make_integer(sc, (s7_int)GLOB_BRACE));
#endif
#ifdef GLOB_ALTDIRFUNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_ALTDIRFUNC"), s7_make_integer(sc, (s7_int)GLOB_ALTDIRFUNC));
#endif
#ifdef GLOB_MAGCHAR
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_MAGCHAR"), s7_make_integer(sc, (s7_int)GLOB_MAGCHAR));
#endif
#ifdef GLOB_PERIOD
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_PERIOD"), s7_make_integer(sc, (s7_int)GLOB_PERIOD));
#endif
#ifdef GLOB_NOESCAPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOESCAPE"), s7_make_integer(sc, (s7_int)GLOB_NOESCAPE));
#endif
#ifdef GLOB_APPEND
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_APPEND"), s7_make_integer(sc, (s7_int)GLOB_APPEND));
#endif
#ifdef GLOB_NOCHECK
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOCHECK"), s7_make_integer(sc, (s7_int)GLOB_NOCHECK));
#endif
#ifdef GLOB_DOOFFS
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_DOOFFS"), s7_make_integer(sc, (s7_int)GLOB_DOOFFS));
#endif
#ifdef GLOB_NOSORT
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_NOSORT"), s7_make_integer(sc, (s7_int)GLOB_NOSORT));
#endif
#ifdef GLOB_MARK
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_MARK"), s7_make_integer(sc, (s7_int)GLOB_MARK));
#endif
#ifdef GLOB_ERR
  s7_define(sc, cur_env, s7_make_symbol(sc, "GLOB_ERR"), s7_make_integer(sc, (s7_int)GLOB_ERR));
#endif
#ifdef NSS_BUFLEN_PASSWD
  s7_define(sc, cur_env, s7_make_symbol(sc, "NSS_BUFLEN_PASSWD"), s7_make_integer(sc, (s7_int)NSS_BUFLEN_PASSWD));
#endif
#ifdef TCSAFLUSH
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCSAFLUSH"), s7_make_integer(sc, (s7_int)TCSAFLUSH));
#endif
#ifdef TCSADRAIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCSADRAIN"), s7_make_integer(sc, (s7_int)TCSADRAIN));
#endif
#ifdef TCSANOW
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCSANOW"), s7_make_integer(sc, (s7_int)TCSANOW));
#endif
#ifdef TCIOFLUSH
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCIOFLUSH"), s7_make_integer(sc, (s7_int)TCIOFLUSH));
#endif
#ifdef TCOFLUSH
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCOFLUSH"), s7_make_integer(sc, (s7_int)TCOFLUSH));
#endif
#ifdef TCIFLUSH
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCIFLUSH"), s7_make_integer(sc, (s7_int)TCIFLUSH));
#endif
#ifdef TCION
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCION"), s7_make_integer(sc, (s7_int)TCION));
#endif
#ifdef TCIOFF
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCIOFF"), s7_make_integer(sc, (s7_int)TCIOFF));
#endif
#ifdef TCOON
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCOON"), s7_make_integer(sc, (s7_int)TCOON));
#endif
#ifdef TCOOFF
  s7_define(sc, cur_env, s7_make_symbol(sc, "TCOOFF"), s7_make_integer(sc, (s7_int)TCOOFF));
#endif
#ifdef IEXTEN
  s7_define(sc, cur_env, s7_make_symbol(sc, "IEXTEN"), s7_make_integer(sc, (s7_int)IEXTEN));
#endif
#ifdef TOSTOP
  s7_define(sc, cur_env, s7_make_symbol(sc, "TOSTOP"), s7_make_integer(sc, (s7_int)TOSTOP));
#endif
#ifdef NOFLSH
  s7_define(sc, cur_env, s7_make_symbol(sc, "NOFLSH"), s7_make_integer(sc, (s7_int)NOFLSH));
#endif
#ifdef ECHONL
  s7_define(sc, cur_env, s7_make_symbol(sc, "ECHONL"), s7_make_integer(sc, (s7_int)ECHONL));
#endif
#ifdef ECHOK
  s7_define(sc, cur_env, s7_make_symbol(sc, "ECHOK"), s7_make_integer(sc, (s7_int)ECHOK));
#endif
#ifdef ECHOE
  s7_define(sc, cur_env, s7_make_symbol(sc, "ECHOE"), s7_make_integer(sc, (s7_int)ECHOE));
#endif
#ifdef ECHO
  s7_define(sc, cur_env, s7_make_symbol(sc, "ECHO"), s7_make_integer(sc, (s7_int)ECHO));
#endif
#ifdef ICANON
  s7_define(sc, cur_env, s7_make_symbol(sc, "ICANON"), s7_make_integer(sc, (s7_int)ICANON));
#endif
#ifdef ISIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "ISIG"), s7_make_integer(sc, (s7_int)ISIG));
#endif
#ifdef OFDEL
  s7_define(sc, cur_env, s7_make_symbol(sc, "OFDEL"), s7_make_integer(sc, (s7_int)OFDEL));
#endif
#ifdef OFILL
  s7_define(sc, cur_env, s7_make_symbol(sc, "OFILL"), s7_make_integer(sc, (s7_int)OFILL));
#endif
#ifdef ONLRET
  s7_define(sc, cur_env, s7_make_symbol(sc, "ONLRET"), s7_make_integer(sc, (s7_int)ONLRET));
#endif
#ifdef ONOCR
  s7_define(sc, cur_env, s7_make_symbol(sc, "ONOCR"), s7_make_integer(sc, (s7_int)ONOCR));
#endif
#ifdef OCRNL
  s7_define(sc, cur_env, s7_make_symbol(sc, "OCRNL"), s7_make_integer(sc, (s7_int)OCRNL));
#endif
#ifdef ONLCR
  s7_define(sc, cur_env, s7_make_symbol(sc, "ONLCR"), s7_make_integer(sc, (s7_int)ONLCR));
#endif
#ifdef OLCUC
  s7_define(sc, cur_env, s7_make_symbol(sc, "OLCUC"), s7_make_integer(sc, (s7_int)OLCUC));
#endif
#ifdef OPOST
  s7_define(sc, cur_env, s7_make_symbol(sc, "OPOST"), s7_make_integer(sc, (s7_int)OPOST));
#endif
#ifdef IUTF8
  s7_define(sc, cur_env, s7_make_symbol(sc, "IUTF8"), s7_make_integer(sc, (s7_int)IUTF8));
#endif
#ifdef IMAXBEL
  s7_define(sc, cur_env, s7_make_symbol(sc, "IMAXBEL"), s7_make_integer(sc, (s7_int)IMAXBEL));
#endif
#ifdef IXOFF
  s7_define(sc, cur_env, s7_make_symbol(sc, "IXOFF"), s7_make_integer(sc, (s7_int)IXOFF));
#endif
#ifdef IXANY
  s7_define(sc, cur_env, s7_make_symbol(sc, "IXANY"), s7_make_integer(sc, (s7_int)IXANY));
#endif
#ifdef IXON
  s7_define(sc, cur_env, s7_make_symbol(sc, "IXON"), s7_make_integer(sc, (s7_int)IXON));
#endif
#ifdef IUCLC
  s7_define(sc, cur_env, s7_make_symbol(sc, "IUCLC"), s7_make_integer(sc, (s7_int)IUCLC));
#endif
#ifdef ICRNL
  s7_define(sc, cur_env, s7_make_symbol(sc, "ICRNL"), s7_make_integer(sc, (s7_int)ICRNL));
#endif
#ifdef IGNCR
  s7_define(sc, cur_env, s7_make_symbol(sc, "IGNCR"), s7_make_integer(sc, (s7_int)IGNCR));
#endif
#ifdef INLCR
  s7_define(sc, cur_env, s7_make_symbol(sc, "INLCR"), s7_make_integer(sc, (s7_int)INLCR));
#endif
#ifdef ISTRIP
  s7_define(sc, cur_env, s7_make_symbol(sc, "ISTRIP"), s7_make_integer(sc, (s7_int)ISTRIP));
#endif
#ifdef INPCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "INPCK"), s7_make_integer(sc, (s7_int)INPCK));
#endif
#ifdef PARMRK
  s7_define(sc, cur_env, s7_make_symbol(sc, "PARMRK"), s7_make_integer(sc, (s7_int)PARMRK));
#endif
#ifdef IGNPAR
  s7_define(sc, cur_env, s7_make_symbol(sc, "IGNPAR"), s7_make_integer(sc, (s7_int)IGNPAR));
#endif
#ifdef BRKINT
  s7_define(sc, cur_env, s7_make_symbol(sc, "BRKINT"), s7_make_integer(sc, (s7_int)BRKINT));
#endif
#ifdef IGNBRK
  s7_define(sc, cur_env, s7_make_symbol(sc, "IGNBRK"), s7_make_integer(sc, (s7_int)IGNBRK));
#endif
#ifdef VEOL2
  s7_define(sc, cur_env, s7_make_symbol(sc, "VEOL2"), s7_make_integer(sc, (s7_int)VEOL2));
#endif
#ifdef VLNEXT
  s7_define(sc, cur_env, s7_make_symbol(sc, "VLNEXT"), s7_make_integer(sc, (s7_int)VLNEXT));
#endif
#ifdef VWERASE
  s7_define(sc, cur_env, s7_make_symbol(sc, "VWERASE"), s7_make_integer(sc, (s7_int)VWERASE));
#endif
#ifdef VDISCARD
  s7_define(sc, cur_env, s7_make_symbol(sc, "VDISCARD"), s7_make_integer(sc, (s7_int)VDISCARD));
#endif
#ifdef VREPRINT
  s7_define(sc, cur_env, s7_make_symbol(sc, "VREPRINT"), s7_make_integer(sc, (s7_int)VREPRINT));
#endif
#ifdef VEOL
  s7_define(sc, cur_env, s7_make_symbol(sc, "VEOL"), s7_make_integer(sc, (s7_int)VEOL));
#endif
#ifdef VSUSP
  s7_define(sc, cur_env, s7_make_symbol(sc, "VSUSP"), s7_make_integer(sc, (s7_int)VSUSP));
#endif
#ifdef VSTOP
  s7_define(sc, cur_env, s7_make_symbol(sc, "VSTOP"), s7_make_integer(sc, (s7_int)VSTOP));
#endif
#ifdef VSTART
  s7_define(sc, cur_env, s7_make_symbol(sc, "VSTART"), s7_make_integer(sc, (s7_int)VSTART));
#endif
#ifdef VSWTC
  s7_define(sc, cur_env, s7_make_symbol(sc, "VSWTC"), s7_make_integer(sc, (s7_int)VSWTC));
#endif
#ifdef VMIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "VMIN"), s7_make_integer(sc, (s7_int)VMIN));
#endif
#ifdef VTIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "VTIME"), s7_make_integer(sc, (s7_int)VTIME));
#endif
#ifdef VEOF
  s7_define(sc, cur_env, s7_make_symbol(sc, "VEOF"), s7_make_integer(sc, (s7_int)VEOF));
#endif
#ifdef VKILL
  s7_define(sc, cur_env, s7_make_symbol(sc, "VKILL"), s7_make_integer(sc, (s7_int)VKILL));
#endif
#ifdef VERASE
  s7_define(sc, cur_env, s7_make_symbol(sc, "VERASE"), s7_make_integer(sc, (s7_int)VERASE));
#endif
#ifdef VQUIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "VQUIT"), s7_make_integer(sc, (s7_int)VQUIT));
#endif
#ifdef VINTR
  s7_define(sc, cur_env, s7_make_symbol(sc, "VINTR"), s7_make_integer(sc, (s7_int)VINTR));
#endif
#ifdef CLOCK_MONOTONIC_COARSE
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_MONOTONIC_COARSE"), s7_make_integer(sc, (s7_int)CLOCK_MONOTONIC_COARSE));
#endif
#ifdef CLOCK_REALTIME_COARSE
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_REALTIME_COARSE"), s7_make_integer(sc, (s7_int)CLOCK_REALTIME_COARSE));
#endif
#ifdef CLOCK_MONOTONIC_RAW
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_MONOTONIC_RAW"), s7_make_integer(sc, (s7_int)CLOCK_MONOTONIC_RAW));
#endif
#ifdef CLOCK_THREAD_CPUTIME_ID
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_THREAD_CPUTIME_ID"), s7_make_integer(sc, (s7_int)CLOCK_THREAD_CPUTIME_ID));
#endif
#ifdef CLOCK_PROCESS_CPUTIME_ID
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_PROCESS_CPUTIME_ID"), s7_make_integer(sc, (s7_int)CLOCK_PROCESS_CPUTIME_ID));
#endif
#ifdef CLOCK_MONOTONIC
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_MONOTONIC"), s7_make_integer(sc, (s7_int)CLOCK_MONOTONIC));
#endif
#ifdef CLOCK_REALTIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCK_REALTIME"), s7_make_integer(sc, (s7_int)CLOCK_REALTIME));
#endif
#ifdef CLOCKS_PER_SEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "CLOCKS_PER_SEC"), s7_make_integer(sc, (s7_int)CLOCKS_PER_SEC));
#endif
#ifdef S_IFLNK
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFLNK"), s7_make_integer(sc, (s7_int)S_IFLNK));
#endif
#ifdef FTW_NS
  s7_define(sc, cur_env, s7_make_symbol(sc, "FTW_NS"), s7_make_integer(sc, (s7_int)FTW_NS));
#endif
#ifdef FTW_DNR
  s7_define(sc, cur_env, s7_make_symbol(sc, "FTW_DNR"), s7_make_integer(sc, (s7_int)FTW_DNR));
#endif
#ifdef FTW_D
  s7_define(sc, cur_env, s7_make_symbol(sc, "FTW_D"), s7_make_integer(sc, (s7_int)FTW_D));
#endif
#ifdef FTW_F
  s7_define(sc, cur_env, s7_make_symbol(sc, "FTW_F"), s7_make_integer(sc, (s7_int)FTW_F));
#endif
#ifdef _CS_GNU_LIBPTHREAD_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_CS_GNU_LIBPTHREAD_VERSION"), s7_make_integer(sc, (s7_int)_CS_GNU_LIBPTHREAD_VERSION));
#endif
#ifdef _SC_LEVEL4_CACHE_ASSOC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL4_CACHE_ASSOC"), s7_make_integer(sc, (s7_int)_SC_LEVEL4_CACHE_ASSOC));
#endif
#ifdef _SC_LEVEL2_CACHE_ASSOC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL2_CACHE_ASSOC"), s7_make_integer(sc, (s7_int)_SC_LEVEL2_CACHE_ASSOC));
#endif
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_PRIORITY_SCHEDULING"), s7_make_integer(sc, (s7_int)_SC_THREAD_PRIORITY_SCHEDULING));
#endif
#ifdef _CS_GNU_LIBC_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_CS_GNU_LIBC_VERSION"), s7_make_integer(sc, (s7_int)_CS_GNU_LIBC_VERSION));
#endif
#ifdef _CS_PATH
  s7_define(sc, cur_env, s7_make_symbol(sc, "_CS_PATH"), s7_make_integer(sc, (s7_int)_CS_PATH));
#endif
#ifdef _SC_THREAD_ROBUST_PRIO_PROTECT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_ROBUST_PRIO_PROTECT"), s7_make_integer(sc, (s7_int)_SC_THREAD_ROBUST_PRIO_PROTECT));
#endif
#ifdef _SC_THREAD_ROBUST_PRIO_INHERIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_ROBUST_PRIO_INHERIT"), s7_make_integer(sc, (s7_int)_SC_THREAD_ROBUST_PRIO_INHERIT));
#endif
#ifdef _SC_TRACE_USER_EVENT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_USER_EVENT_MAX"), s7_make_integer(sc, (s7_int)_SC_TRACE_USER_EVENT_MAX));
#endif
#ifdef _SC_TRACE_SYS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_SYS_MAX"), s7_make_integer(sc, (s7_int)_SC_TRACE_SYS_MAX));
#endif
#ifdef _SC_TRACE_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_NAME_MAX"), s7_make_integer(sc, (s7_int)_SC_TRACE_NAME_MAX));
#endif
#ifdef _SC_TRACE_EVENT_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_EVENT_NAME_MAX"), s7_make_integer(sc, (s7_int)_SC_TRACE_EVENT_NAME_MAX));
#endif
#ifdef _SC_SS_REPL_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SS_REPL_MAX"), s7_make_integer(sc, (s7_int)_SC_SS_REPL_MAX));
#endif
#ifdef _SC_RAW_SOCKETS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_RAW_SOCKETS"), s7_make_integer(sc, (s7_int)_SC_RAW_SOCKETS));
#endif
#ifdef _SC_IPV6
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_IPV6"), s7_make_integer(sc, (s7_int)_SC_IPV6));
#endif
#ifdef _SC_LEVEL4_CACHE_LINESIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL4_CACHE_LINESIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL4_CACHE_LINESIZE));
#endif
#ifdef _SC_LEVEL4_CACHE_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL4_CACHE_SIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL4_CACHE_SIZE));
#endif
#ifdef _SC_LEVEL3_CACHE_LINESIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL3_CACHE_LINESIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL3_CACHE_LINESIZE));
#endif
#ifdef _SC_LEVEL3_CACHE_ASSOC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL3_CACHE_ASSOC"), s7_make_integer(sc, (s7_int)_SC_LEVEL3_CACHE_ASSOC));
#endif
#ifdef _SC_LEVEL3_CACHE_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL3_CACHE_SIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL3_CACHE_SIZE));
#endif
#ifdef _SC_LEVEL2_CACHE_LINESIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL2_CACHE_LINESIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL2_CACHE_LINESIZE));
#endif
#ifdef _SC_LEVEL2_CACHE_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL2_CACHE_SIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL2_CACHE_SIZE));
#endif
#ifdef _SC_LEVEL1_DCACHE_LINESIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL1_DCACHE_LINESIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL1_DCACHE_LINESIZE));
#endif
#ifdef _SC_LEVEL1_DCACHE_ASSOC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL1_DCACHE_ASSOC"), s7_make_integer(sc, (s7_int)_SC_LEVEL1_DCACHE_ASSOC));
#endif
#ifdef _SC_LEVEL1_DCACHE_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL1_DCACHE_SIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL1_DCACHE_SIZE));
#endif
#ifdef _SC_LEVEL1_ICACHE_LINESIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL1_ICACHE_LINESIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL1_ICACHE_LINESIZE));
#endif
#ifdef _SC_LEVEL1_ICACHE_ASSOC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL1_ICACHE_ASSOC"), s7_make_integer(sc, (s7_int)_SC_LEVEL1_ICACHE_ASSOC));
#endif
#ifdef _SC_LEVEL1_ICACHE_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LEVEL1_ICACHE_SIZE"), s7_make_integer(sc, (s7_int)_SC_LEVEL1_ICACHE_SIZE));
#endif
#ifdef _SC_TRACE_LOG
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_LOG"), s7_make_integer(sc, (s7_int)_SC_TRACE_LOG));
#endif
#ifdef _SC_TRACE_INHERIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_INHERIT"), s7_make_integer(sc, (s7_int)_SC_TRACE_INHERIT));
#endif
#ifdef _SC_TRACE_EVENT_FILTER
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE_EVENT_FILTER"), s7_make_integer(sc, (s7_int)_SC_TRACE_EVENT_FILTER));
#endif
#ifdef _SC_TRACE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TRACE"), s7_make_integer(sc, (s7_int)_SC_TRACE));
#endif
#ifdef _SC_HOST_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_HOST_NAME_MAX"), s7_make_integer(sc, (s7_int)_SC_HOST_NAME_MAX));
#endif
#ifdef _SC_2_PBS_CHECKPOINT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_PBS_CHECKPOINT"), s7_make_integer(sc, (s7_int)_SC_2_PBS_CHECKPOINT));
#endif
#ifdef _SC_STREAMS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_STREAMS"), s7_make_integer(sc, (s7_int)_SC_STREAMS));
#endif
#ifdef _SC_SYMLOOP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SYMLOOP_MAX"), s7_make_integer(sc, (s7_int)_SC_SYMLOOP_MAX));
#endif
#ifdef _SC_2_PBS_TRACK
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_PBS_TRACK"), s7_make_integer(sc, (s7_int)_SC_2_PBS_TRACK));
#endif
#ifdef _SC_2_PBS_MESSAGE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_PBS_MESSAGE"), s7_make_integer(sc, (s7_int)_SC_2_PBS_MESSAGE));
#endif
#ifdef _SC_2_PBS_LOCATE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_PBS_LOCATE"), s7_make_integer(sc, (s7_int)_SC_2_PBS_LOCATE));
#endif
#ifdef _SC_2_PBS_ACCOUNTING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_PBS_ACCOUNTING"), s7_make_integer(sc, (s7_int)_SC_2_PBS_ACCOUNTING));
#endif
#ifdef _SC_2_PBS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_PBS"), s7_make_integer(sc, (s7_int)_SC_2_PBS));
#endif
#ifdef _SC_USER_GROUPS_R
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_USER_GROUPS_R"), s7_make_integer(sc, (s7_int)_SC_USER_GROUPS_R));
#endif
#ifdef _SC_USER_GROUPS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_USER_GROUPS"), s7_make_integer(sc, (s7_int)_SC_USER_GROUPS));
#endif
#ifdef _SC_TYPED_MEMORY_OBJECTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TYPED_MEMORY_OBJECTS"), s7_make_integer(sc, (s7_int)_SC_TYPED_MEMORY_OBJECTS));
#endif
#ifdef _SC_TIMEOUTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TIMEOUTS"), s7_make_integer(sc, (s7_int)_SC_TIMEOUTS));
#endif
#ifdef _SC_SYSTEM_DATABASE_R
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SYSTEM_DATABASE_R"), s7_make_integer(sc, (s7_int)_SC_SYSTEM_DATABASE_R));
#endif
#ifdef _SC_SYSTEM_DATABASE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SYSTEM_DATABASE"), s7_make_integer(sc, (s7_int)_SC_SYSTEM_DATABASE));
#endif
#ifdef _SC_THREAD_SPORADIC_SERVER
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_SPORADIC_SERVER"), s7_make_integer(sc, (s7_int)_SC_THREAD_SPORADIC_SERVER));
#endif
#ifdef _SC_SPORADIC_SERVER
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SPORADIC_SERVER"), s7_make_integer(sc, (s7_int)_SC_SPORADIC_SERVER));
#endif
#ifdef _SC_SPAWN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SPAWN"), s7_make_integer(sc, (s7_int)_SC_SPAWN));
#endif
#ifdef _SC_SIGNALS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SIGNALS"), s7_make_integer(sc, (s7_int)_SC_SIGNALS));
#endif
#ifdef _SC_SHELL
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SHELL"), s7_make_integer(sc, (s7_int)_SC_SHELL));
#endif
#ifdef _SC_REGEX_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_REGEX_VERSION"), s7_make_integer(sc, (s7_int)_SC_REGEX_VERSION));
#endif
#ifdef _SC_REGEXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_REGEXP"), s7_make_integer(sc, (s7_int)_SC_REGEXP));
#endif
#ifdef _SC_SPIN_LOCKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SPIN_LOCKS"), s7_make_integer(sc, (s7_int)_SC_SPIN_LOCKS));
#endif
#ifdef _SC_READER_WRITER_LOCKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_READER_WRITER_LOCKS"), s7_make_integer(sc, (s7_int)_SC_READER_WRITER_LOCKS));
#endif
#ifdef _SC_NETWORKING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NETWORKING"), s7_make_integer(sc, (s7_int)_SC_NETWORKING));
#endif
#ifdef _SC_SINGLE_PROCESS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SINGLE_PROCESS"), s7_make_integer(sc, (s7_int)_SC_SINGLE_PROCESS));
#endif
#ifdef _SC_MULTI_PROCESS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MULTI_PROCESS"), s7_make_integer(sc, (s7_int)_SC_MULTI_PROCESS));
#endif
#ifdef _SC_MONOTONIC_CLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MONOTONIC_CLOCK"), s7_make_integer(sc, (s7_int)_SC_MONOTONIC_CLOCK));
#endif
#ifdef _SC_FILE_SYSTEM
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_FILE_SYSTEM"), s7_make_integer(sc, (s7_int)_SC_FILE_SYSTEM));
#endif
#ifdef _SC_FILE_LOCKING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_FILE_LOCKING"), s7_make_integer(sc, (s7_int)_SC_FILE_LOCKING));
#endif
#ifdef _SC_FILE_ATTRIBUTES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_FILE_ATTRIBUTES"), s7_make_integer(sc, (s7_int)_SC_FILE_ATTRIBUTES));
#endif
#ifdef _SC_PIPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PIPE"), s7_make_integer(sc, (s7_int)_SC_PIPE));
#endif
#ifdef _SC_FIFO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_FIFO"), s7_make_integer(sc, (s7_int)_SC_FIFO));
#endif
#ifdef _SC_FD_MGMT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_FD_MGMT"), s7_make_integer(sc, (s7_int)_SC_FD_MGMT));
#endif
#ifdef _SC_DEVICE_SPECIFIC_R
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_DEVICE_SPECIFIC_R"), s7_make_integer(sc, (s7_int)_SC_DEVICE_SPECIFIC_R));
#endif
#ifdef _SC_DEVICE_SPECIFIC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_DEVICE_SPECIFIC"), s7_make_integer(sc, (s7_int)_SC_DEVICE_SPECIFIC));
#endif
#ifdef _SC_DEVICE_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_DEVICE_IO"), s7_make_integer(sc, (s7_int)_SC_DEVICE_IO));
#endif
#ifdef _SC_THREAD_CPUTIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_CPUTIME"), s7_make_integer(sc, (s7_int)_SC_THREAD_CPUTIME));
#endif
#ifdef _SC_CPUTIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CPUTIME"), s7_make_integer(sc, (s7_int)_SC_CPUTIME));
#endif
#ifdef _SC_CLOCK_SELECTION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CLOCK_SELECTION"), s7_make_integer(sc, (s7_int)_SC_CLOCK_SELECTION));
#endif
#ifdef _SC_C_LANG_SUPPORT_R
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_C_LANG_SUPPORT_R"), s7_make_integer(sc, (s7_int)_SC_C_LANG_SUPPORT_R));
#endif
#ifdef _SC_C_LANG_SUPPORT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_C_LANG_SUPPORT"), s7_make_integer(sc, (s7_int)_SC_C_LANG_SUPPORT));
#endif
#ifdef _SC_BASE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_BASE"), s7_make_integer(sc, (s7_int)_SC_BASE));
#endif
#ifdef _SC_BARRIERS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_BARRIERS"), s7_make_integer(sc, (s7_int)_SC_BARRIERS));
#endif
#ifdef _SC_ADVISORY_INFO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_ADVISORY_INFO"), s7_make_integer(sc, (s7_int)_SC_ADVISORY_INFO));
#endif
#ifdef _SC_NL_TEXTMAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NL_TEXTMAX"), s7_make_integer(sc, (s7_int)_SC_NL_TEXTMAX));
#endif
#ifdef _SC_NL_SETMAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NL_SETMAX"), s7_make_integer(sc, (s7_int)_SC_NL_SETMAX));
#endif
#ifdef _SC_NL_NMAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NL_NMAX"), s7_make_integer(sc, (s7_int)_SC_NL_NMAX));
#endif
#ifdef _SC_NL_MSGMAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NL_MSGMAX"), s7_make_integer(sc, (s7_int)_SC_NL_MSGMAX));
#endif
#ifdef _SC_NL_LANGMAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NL_LANGMAX"), s7_make_integer(sc, (s7_int)_SC_NL_LANGMAX));
#endif
#ifdef _SC_NL_ARGMAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NL_ARGMAX"), s7_make_integer(sc, (s7_int)_SC_NL_ARGMAX));
#endif
#ifdef _SC_USHRT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_USHRT_MAX"), s7_make_integer(sc, (s7_int)_SC_USHRT_MAX));
#endif
#ifdef _SC_ULONG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_ULONG_MAX"), s7_make_integer(sc, (s7_int)_SC_ULONG_MAX));
#endif
#ifdef _SC_UINT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_UINT_MAX"), s7_make_integer(sc, (s7_int)_SC_UINT_MAX));
#endif
#ifdef _SC_UCHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_UCHAR_MAX"), s7_make_integer(sc, (s7_int)_SC_UCHAR_MAX));
#endif
#ifdef _SC_SHRT_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SHRT_MIN"), s7_make_integer(sc, (s7_int)_SC_SHRT_MIN));
#endif
#ifdef _SC_SHRT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SHRT_MAX"), s7_make_integer(sc, (s7_int)_SC_SHRT_MAX));
#endif
#ifdef _SC_SCHAR_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SCHAR_MIN"), s7_make_integer(sc, (s7_int)_SC_SCHAR_MIN));
#endif
#ifdef _SC_SCHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SCHAR_MAX"), s7_make_integer(sc, (s7_int)_SC_SCHAR_MAX));
#endif
#ifdef _SC_SSIZE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SSIZE_MAX"), s7_make_integer(sc, (s7_int)_SC_SSIZE_MAX));
#endif
#ifdef _SC_NZERO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NZERO"), s7_make_integer(sc, (s7_int)_SC_NZERO));
#endif
#ifdef _SC_MB_LEN_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MB_LEN_MAX"), s7_make_integer(sc, (s7_int)_SC_MB_LEN_MAX));
#endif
#ifdef _SC_WORD_BIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_WORD_BIT"), s7_make_integer(sc, (s7_int)_SC_WORD_BIT));
#endif
#ifdef _SC_LONG_BIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LONG_BIT"), s7_make_integer(sc, (s7_int)_SC_LONG_BIT));
#endif
#ifdef _SC_INT_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_INT_MIN"), s7_make_integer(sc, (s7_int)_SC_INT_MIN));
#endif
#ifdef _SC_INT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_INT_MAX"), s7_make_integer(sc, (s7_int)_SC_INT_MAX));
#endif
#ifdef _SC_CHAR_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CHAR_MIN"), s7_make_integer(sc, (s7_int)_SC_CHAR_MIN));
#endif
#ifdef _SC_CHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CHAR_MAX"), s7_make_integer(sc, (s7_int)_SC_CHAR_MAX));
#endif
#ifdef _SC_CHAR_BIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CHAR_BIT"), s7_make_integer(sc, (s7_int)_SC_CHAR_BIT));
#endif
#ifdef _SC_2_UPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_UPE"), s7_make_integer(sc, (s7_int)_SC_2_UPE));
#endif
#ifdef _SC_2_C_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_C_VERSION"), s7_make_integer(sc, (s7_int)_SC_2_C_VERSION));
#endif
#ifdef _SC_2_CHAR_TERM
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_CHAR_TERM"), s7_make_integer(sc, (s7_int)_SC_2_CHAR_TERM));
#endif
#ifdef _SC_PASS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PASS_MAX"), s7_make_integer(sc, (s7_int)_SC_PASS_MAX));
#endif
#ifdef _SC_ATEXIT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_ATEXIT_MAX"), s7_make_integer(sc, (s7_int)_SC_ATEXIT_MAX));
#endif
#ifdef _SC_AVPHYS_PAGES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_AVPHYS_PAGES"), s7_make_integer(sc, (s7_int)_SC_AVPHYS_PAGES));
#endif
#ifdef _SC_PHYS_PAGES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PHYS_PAGES"), s7_make_integer(sc, (s7_int)_SC_PHYS_PAGES));
#endif
#ifdef _SC_NPROCESSORS_ONLN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NPROCESSORS_ONLN"), s7_make_integer(sc, (s7_int)_SC_NPROCESSORS_ONLN));
#endif
#ifdef _SC_NPROCESSORS_CONF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NPROCESSORS_CONF"), s7_make_integer(sc, (s7_int)_SC_NPROCESSORS_CONF));
#endif
#ifdef _SC_THREAD_PROCESS_SHARED
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_PROCESS_SHARED"), s7_make_integer(sc, (s7_int)_SC_THREAD_PROCESS_SHARED));
#endif
#ifdef _SC_THREAD_PRIO_PROTECT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_PRIO_PROTECT"), s7_make_integer(sc, (s7_int)_SC_THREAD_PRIO_PROTECT));
#endif
#ifdef _SC_THREAD_PRIO_INHERIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_PRIO_INHERIT"), s7_make_integer(sc, (s7_int)_SC_THREAD_PRIO_INHERIT));
#endif
#ifdef _SC_THREAD_ATTR_STACKSIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_ATTR_STACKSIZE"), s7_make_integer(sc, (s7_int)_SC_THREAD_ATTR_STACKSIZE));
#endif
#ifdef _SC_THREAD_ATTR_STACKADDR
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_ATTR_STACKADDR"), s7_make_integer(sc, (s7_int)_SC_THREAD_ATTR_STACKADDR));
#endif
#ifdef _SC_THREAD_THREADS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_THREADS_MAX"), s7_make_integer(sc, (s7_int)_SC_THREAD_THREADS_MAX));
#endif
#ifdef _SC_THREAD_STACK_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_STACK_MIN"), s7_make_integer(sc, (s7_int)_SC_THREAD_STACK_MIN));
#endif
#ifdef _SC_THREAD_KEYS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_KEYS_MAX"), s7_make_integer(sc, (s7_int)_SC_THREAD_KEYS_MAX));
#endif
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_DESTRUCTOR_ITERATIONS"), s7_make_integer(sc, (s7_int)_SC_THREAD_DESTRUCTOR_ITERATIONS));
#endif
#ifdef _SC_TTY_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TTY_NAME_MAX"), s7_make_integer(sc, (s7_int)_SC_TTY_NAME_MAX));
#endif
#ifdef _SC_LOGIN_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LOGIN_NAME_MAX"), s7_make_integer(sc, (s7_int)_SC_LOGIN_NAME_MAX));
#endif
#ifdef _SC_GETPW_R_SIZE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_GETPW_R_SIZE_MAX"), s7_make_integer(sc, (s7_int)_SC_GETPW_R_SIZE_MAX));
#endif
#ifdef _SC_GETGR_R_SIZE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_GETGR_R_SIZE_MAX"), s7_make_integer(sc, (s7_int)_SC_GETGR_R_SIZE_MAX));
#endif
#ifdef _SC_THREAD_SAFE_FUNCTIONS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREAD_SAFE_FUNCTIONS"), s7_make_integer(sc, (s7_int)_SC_THREAD_SAFE_FUNCTIONS));
#endif
#ifdef _SC_THREADS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_THREADS"), s7_make_integer(sc, (s7_int)_SC_THREADS));
#endif
#ifdef _SC_T_IOV_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_T_IOV_MAX"), s7_make_integer(sc, (s7_int)_SC_T_IOV_MAX));
#endif
#ifdef _SC_PII_OSI_M
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_OSI_M"), s7_make_integer(sc, (s7_int)_SC_PII_OSI_M));
#endif
#ifdef _SC_PII_OSI_CLTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_OSI_CLTS"), s7_make_integer(sc, (s7_int)_SC_PII_OSI_CLTS));
#endif
#ifdef _SC_PII_OSI_COTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_OSI_COTS"), s7_make_integer(sc, (s7_int)_SC_PII_OSI_COTS));
#endif
#ifdef _SC_PII_INTERNET_DGRAM
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_INTERNET_DGRAM"), s7_make_integer(sc, (s7_int)_SC_PII_INTERNET_DGRAM));
#endif
#ifdef _SC_PII_INTERNET_STREAM
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_INTERNET_STREAM"), s7_make_integer(sc, (s7_int)_SC_PII_INTERNET_STREAM));
#endif
#ifdef _SC_IOV_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_IOV_MAX"), s7_make_integer(sc, (s7_int)_SC_IOV_MAX));
#endif
#ifdef _SC_UIO_MAXIOV
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_UIO_MAXIOV"), s7_make_integer(sc, (s7_int)_SC_UIO_MAXIOV));
#endif
#ifdef _SC_SELECT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SELECT"), s7_make_integer(sc, (s7_int)_SC_SELECT));
#endif
#ifdef _SC_POLL
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_POLL"), s7_make_integer(sc, (s7_int)_SC_POLL));
#endif
#ifdef _SC_PII_OSI
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_OSI"), s7_make_integer(sc, (s7_int)_SC_PII_OSI));
#endif
#ifdef _SC_PII_INTERNET
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_INTERNET"), s7_make_integer(sc, (s7_int)_SC_PII_INTERNET));
#endif
#ifdef _SC_PII_SOCKET
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_SOCKET"), s7_make_integer(sc, (s7_int)_SC_PII_SOCKET));
#endif
#ifdef _SC_PII_XTI
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII_XTI"), s7_make_integer(sc, (s7_int)_SC_PII_XTI));
#endif
#ifdef _SC_PII
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PII"), s7_make_integer(sc, (s7_int)_SC_PII));
#endif
#ifdef _SC_2_LOCALEDEF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_LOCALEDEF"), s7_make_integer(sc, (s7_int)_SC_2_LOCALEDEF));
#endif
#ifdef _SC_2_SW_DEV
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_SW_DEV"), s7_make_integer(sc, (s7_int)_SC_2_SW_DEV));
#endif
#ifdef _SC_2_FORT_RUN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_FORT_RUN"), s7_make_integer(sc, (s7_int)_SC_2_FORT_RUN));
#endif
#ifdef _SC_2_FORT_DEV
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_FORT_DEV"), s7_make_integer(sc, (s7_int)_SC_2_FORT_DEV));
#endif
#ifdef _SC_2_C_DEV
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_C_DEV"), s7_make_integer(sc, (s7_int)_SC_2_C_DEV));
#endif
#ifdef _SC_2_C_BIND
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_C_BIND"), s7_make_integer(sc, (s7_int)_SC_2_C_BIND));
#endif
#ifdef _SC_2_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_2_VERSION"), s7_make_integer(sc, (s7_int)_SC_2_VERSION));
#endif
#ifdef _SC_CHARCLASS_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CHARCLASS_NAME_MAX"), s7_make_integer(sc, (s7_int)_SC_CHARCLASS_NAME_MAX));
#endif
#ifdef _SC_RE_DUP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_RE_DUP_MAX"), s7_make_integer(sc, (s7_int)_SC_RE_DUP_MAX));
#endif
#ifdef _SC_LINE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_LINE_MAX"), s7_make_integer(sc, (s7_int)_SC_LINE_MAX));
#endif
#ifdef _SC_EXPR_NEST_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_EXPR_NEST_MAX"), s7_make_integer(sc, (s7_int)_SC_EXPR_NEST_MAX));
#endif
#ifdef _SC_EQUIV_CLASS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_EQUIV_CLASS_MAX"), s7_make_integer(sc, (s7_int)_SC_EQUIV_CLASS_MAX));
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_COLL_WEIGHTS_MAX"), s7_make_integer(sc, (s7_int)_SC_COLL_WEIGHTS_MAX));
#endif
#ifdef _SC_BC_STRING_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_BC_STRING_MAX"), s7_make_integer(sc, (s7_int)_SC_BC_STRING_MAX));
#endif
#ifdef _SC_BC_SCALE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_BC_SCALE_MAX"), s7_make_integer(sc, (s7_int)_SC_BC_SCALE_MAX));
#endif
#ifdef _SC_BC_DIM_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_BC_DIM_MAX"), s7_make_integer(sc, (s7_int)_SC_BC_DIM_MAX));
#endif
#ifdef _SC_BC_BASE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_BC_BASE_MAX"), s7_make_integer(sc, (s7_int)_SC_BC_BASE_MAX));
#endif
#ifdef _SC_TIMER_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TIMER_MAX"), s7_make_integer(sc, (s7_int)_SC_TIMER_MAX));
#endif
#ifdef _SC_SIGQUEUE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SIGQUEUE_MAX"), s7_make_integer(sc, (s7_int)_SC_SIGQUEUE_MAX));
#endif
#ifdef _SC_SEM_VALUE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SEM_VALUE_MAX"), s7_make_integer(sc, (s7_int)_SC_SEM_VALUE_MAX));
#endif
#ifdef _SC_SEM_NSEMS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SEM_NSEMS_MAX"), s7_make_integer(sc, (s7_int)_SC_SEM_NSEMS_MAX));
#endif
#ifdef _SC_RTSIG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_RTSIG_MAX"), s7_make_integer(sc, (s7_int)_SC_RTSIG_MAX));
#endif
#ifdef _SC_PAGE_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PAGE_SIZE"), s7_make_integer(sc, (s7_int)_SC_PAGE_SIZE));
#endif
#ifdef _SC_PAGESIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PAGESIZE"), s7_make_integer(sc, (s7_int)_SC_PAGESIZE));
#endif
#ifdef _SC_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_VERSION"), s7_make_integer(sc, (s7_int)_SC_VERSION));
#endif
#ifdef _SC_MQ_PRIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MQ_PRIO_MAX"), s7_make_integer(sc, (s7_int)_SC_MQ_PRIO_MAX));
#endif
#ifdef _SC_MQ_OPEN_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MQ_OPEN_MAX"), s7_make_integer(sc, (s7_int)_SC_MQ_OPEN_MAX));
#endif
#ifdef _SC_DELAYTIMER_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_DELAYTIMER_MAX"), s7_make_integer(sc, (s7_int)_SC_DELAYTIMER_MAX));
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_AIO_PRIO_DELTA_MAX"), s7_make_integer(sc, (s7_int)_SC_AIO_PRIO_DELTA_MAX));
#endif
#ifdef _SC_AIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_AIO_MAX"), s7_make_integer(sc, (s7_int)_SC_AIO_MAX));
#endif
#ifdef _SC_AIO_LISTIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_AIO_LISTIO_MAX"), s7_make_integer(sc, (s7_int)_SC_AIO_LISTIO_MAX));
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SHARED_MEMORY_OBJECTS"), s7_make_integer(sc, (s7_int)_SC_SHARED_MEMORY_OBJECTS));
#endif
#ifdef _SC_SEMAPHORES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SEMAPHORES"), s7_make_integer(sc, (s7_int)_SC_SEMAPHORES));
#endif
#ifdef _SC_MESSAGE_PASSING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MESSAGE_PASSING"), s7_make_integer(sc, (s7_int)_SC_MESSAGE_PASSING));
#endif
#ifdef _SC_MEMORY_PROTECTION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MEMORY_PROTECTION"), s7_make_integer(sc, (s7_int)_SC_MEMORY_PROTECTION));
#endif
#ifdef _SC_MEMLOCK_RANGE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MEMLOCK_RANGE"), s7_make_integer(sc, (s7_int)_SC_MEMLOCK_RANGE));
#endif
#ifdef _SC_MEMLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MEMLOCK"), s7_make_integer(sc, (s7_int)_SC_MEMLOCK));
#endif
#ifdef _SC_MAPPED_FILES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_MAPPED_FILES"), s7_make_integer(sc, (s7_int)_SC_MAPPED_FILES));
#endif
#ifdef _SC_FSYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_FSYNC"), s7_make_integer(sc, (s7_int)_SC_FSYNC));
#endif
#ifdef _SC_SYNCHRONIZED_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SYNCHRONIZED_IO"), s7_make_integer(sc, (s7_int)_SC_SYNCHRONIZED_IO));
#endif
#ifdef _SC_PRIORITIZED_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PRIORITIZED_IO"), s7_make_integer(sc, (s7_int)_SC_PRIORITIZED_IO));
#endif
#ifdef _SC_ASYNCHRONOUS_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_ASYNCHRONOUS_IO"), s7_make_integer(sc, (s7_int)_SC_ASYNCHRONOUS_IO));
#endif
#ifdef _SC_TIMERS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TIMERS"), s7_make_integer(sc, (s7_int)_SC_TIMERS));
#endif
#ifdef _SC_PRIORITY_SCHEDULING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_PRIORITY_SCHEDULING"), s7_make_integer(sc, (s7_int)_SC_PRIORITY_SCHEDULING));
#endif
#ifdef _SC_REALTIME_SIGNALS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_REALTIME_SIGNALS"), s7_make_integer(sc, (s7_int)_SC_REALTIME_SIGNALS));
#endif
#ifdef _SC_SAVED_IDS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_SAVED_IDS"), s7_make_integer(sc, (s7_int)_SC_SAVED_IDS));
#endif
#ifdef _SC_JOB_CONTROL
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_JOB_CONTROL"), s7_make_integer(sc, (s7_int)_SC_JOB_CONTROL));
#endif
#ifdef _SC_TZNAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_TZNAME_MAX"), s7_make_integer(sc, (s7_int)_SC_TZNAME_MAX));
#endif
#ifdef _SC_STREAM_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_STREAM_MAX"), s7_make_integer(sc, (s7_int)_SC_STREAM_MAX));
#endif
#ifdef _SC_OPEN_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_OPEN_MAX"), s7_make_integer(sc, (s7_int)_SC_OPEN_MAX));
#endif
#ifdef _SC_NGROUPS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_NGROUPS_MAX"), s7_make_integer(sc, (s7_int)_SC_NGROUPS_MAX));
#endif
#ifdef _SC_CLK_TCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CLK_TCK"), s7_make_integer(sc, (s7_int)_SC_CLK_TCK));
#endif
#ifdef _SC_CHILD_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_CHILD_MAX"), s7_make_integer(sc, (s7_int)_SC_CHILD_MAX));
#endif
#ifdef _SC_ARG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_SC_ARG_MAX"), s7_make_integer(sc, (s7_int)_SC_ARG_MAX));
#endif
#ifdef _PC_2_SYMLINKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_2_SYMLINKS"), s7_make_integer(sc, (s7_int)_PC_2_SYMLINKS));
#endif
#ifdef _PC_SYMLINK_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_SYMLINK_MAX"), s7_make_integer(sc, (s7_int)_PC_SYMLINK_MAX));
#endif
#ifdef _PC_ALLOC_SIZE_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_ALLOC_SIZE_MIN"), s7_make_integer(sc, (s7_int)_PC_ALLOC_SIZE_MIN));
#endif
#ifdef _PC_REC_XFER_ALIGN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_REC_XFER_ALIGN"), s7_make_integer(sc, (s7_int)_PC_REC_XFER_ALIGN));
#endif
#ifdef _PC_REC_MIN_XFER_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_REC_MIN_XFER_SIZE"), s7_make_integer(sc, (s7_int)_PC_REC_MIN_XFER_SIZE));
#endif
#ifdef _PC_REC_MAX_XFER_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_REC_MAX_XFER_SIZE"), s7_make_integer(sc, (s7_int)_PC_REC_MAX_XFER_SIZE));
#endif
#ifdef _PC_REC_INCR_XFER_SIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_REC_INCR_XFER_SIZE"), s7_make_integer(sc, (s7_int)_PC_REC_INCR_XFER_SIZE));
#endif
#ifdef _PC_FILESIZEBITS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_FILESIZEBITS"), s7_make_integer(sc, (s7_int)_PC_FILESIZEBITS));
#endif
#ifdef _PC_SOCK_MAXBUF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_SOCK_MAXBUF"), s7_make_integer(sc, (s7_int)_PC_SOCK_MAXBUF));
#endif
#ifdef _PC_PRIO_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_PRIO_IO"), s7_make_integer(sc, (s7_int)_PC_PRIO_IO));
#endif
#ifdef _PC_ASYNC_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_ASYNC_IO"), s7_make_integer(sc, (s7_int)_PC_ASYNC_IO));
#endif
#ifdef _PC_SYNC_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_SYNC_IO"), s7_make_integer(sc, (s7_int)_PC_SYNC_IO));
#endif
#ifdef _PC_VDISABLE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_VDISABLE"), s7_make_integer(sc, (s7_int)_PC_VDISABLE));
#endif
#ifdef _PC_NO_TRUNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_NO_TRUNC"), s7_make_integer(sc, (s7_int)_PC_NO_TRUNC));
#endif
#ifdef _PC_CHOWN_RESTRICTED
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_CHOWN_RESTRICTED"), s7_make_integer(sc, (s7_int)_PC_CHOWN_RESTRICTED));
#endif
#ifdef _PC_PIPE_BUF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_PIPE_BUF"), s7_make_integer(sc, (s7_int)_PC_PIPE_BUF));
#endif
#ifdef _PC_PATH_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_PATH_MAX"), s7_make_integer(sc, (s7_int)_PC_PATH_MAX));
#endif
#ifdef _PC_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_NAME_MAX"), s7_make_integer(sc, (s7_int)_PC_NAME_MAX));
#endif
#ifdef _PC_MAX_INPUT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_MAX_INPUT"), s7_make_integer(sc, (s7_int)_PC_MAX_INPUT));
#endif
#ifdef _PC_MAX_CANON
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_MAX_CANON"), s7_make_integer(sc, (s7_int)_PC_MAX_CANON));
#endif
#ifdef _PC_LINK_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_PC_LINK_MAX"), s7_make_integer(sc, (s7_int)_PC_LINK_MAX));
#endif
#ifdef STDERR_FILENO
  s7_define(sc, cur_env, s7_make_symbol(sc, "STDERR_FILENO"), s7_make_integer(sc, (s7_int)STDERR_FILENO));
#endif
#ifdef STDOUT_FILENO
  s7_define(sc, cur_env, s7_make_symbol(sc, "STDOUT_FILENO"), s7_make_integer(sc, (s7_int)STDOUT_FILENO));
#endif
#ifdef STDIN_FILENO
  s7_define(sc, cur_env, s7_make_symbol(sc, "STDIN_FILENO"), s7_make_integer(sc, (s7_int)STDIN_FILENO));
#endif
#ifdef _POSIX_TYPED_MEMORY_OBJECTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TYPED_MEMORY_OBJECTS"), s7_make_integer(sc, (s7_int)_POSIX_TYPED_MEMORY_OBJECTS));
#endif
#ifdef _POSIX_TRACE_LOG
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TRACE_LOG"), s7_make_integer(sc, (s7_int)_POSIX_TRACE_LOG));
#endif
#ifdef _POSIX_TRACE_INHERIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TRACE_INHERIT"), s7_make_integer(sc, (s7_int)_POSIX_TRACE_INHERIT));
#endif
#ifdef _POSIX_TRACE_EVENT_FILTER
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TRACE_EVENT_FILTER"), s7_make_integer(sc, (s7_int)_POSIX_TRACE_EVENT_FILTER));
#endif
#ifdef _POSIX_TRACE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TRACE"), s7_make_integer(sc, (s7_int)_POSIX_TRACE));
#endif
#ifdef _POSIX_THREAD_SPORADIC_SERVER
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_SPORADIC_SERVER"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_SPORADIC_SERVER));
#endif
#ifdef _POSIX_SPORADIC_SERVER
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SPORADIC_SERVER"), s7_make_integer(sc, (s7_int)_POSIX_SPORADIC_SERVER));
#endif
#ifdef _POSIX2_CHAR_TERM
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_CHAR_TERM"), s7_make_integer(sc, (s7_int)_POSIX2_CHAR_TERM));
#endif
#ifdef _POSIX_RAW_SOCKETS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_RAW_SOCKETS"), s7_make_integer(sc, (s7_int)_POSIX_RAW_SOCKETS));
#endif
#ifdef _POSIX_IPV6
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_IPV6"), s7_make_integer(sc, (s7_int)_POSIX_IPV6));
#endif
#ifdef _POSIX_ADVISORY_INFO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_ADVISORY_INFO"), s7_make_integer(sc, (s7_int)_POSIX_ADVISORY_INFO));
#endif
#ifdef _POSIX_CLOCK_SELECTION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_CLOCK_SELECTION"), s7_make_integer(sc, (s7_int)_POSIX_CLOCK_SELECTION));
#endif
#ifdef _POSIX_MONOTONIC_CLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MONOTONIC_CLOCK"), s7_make_integer(sc, (s7_int)_POSIX_MONOTONIC_CLOCK));
#endif
#ifdef _POSIX_THREAD_PROCESS_SHARED
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_PROCESS_SHARED"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_PROCESS_SHARED));
#endif
#ifdef _POSIX_MESSAGE_PASSING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MESSAGE_PASSING"), s7_make_integer(sc, (s7_int)_POSIX_MESSAGE_PASSING));
#endif
#ifdef _POSIX_BARRIERS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_BARRIERS"), s7_make_integer(sc, (s7_int)_POSIX_BARRIERS));
#endif
#ifdef _POSIX_TIMERS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TIMERS"), s7_make_integer(sc, (s7_int)_POSIX_TIMERS));
#endif
#ifdef _POSIX_SPAWN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SPAWN"), s7_make_integer(sc, (s7_int)_POSIX_SPAWN));
#endif
#ifdef _POSIX_SPIN_LOCKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SPIN_LOCKS"), s7_make_integer(sc, (s7_int)_POSIX_SPIN_LOCKS));
#endif
#ifdef _POSIX_TIMEOUTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TIMEOUTS"), s7_make_integer(sc, (s7_int)_POSIX_TIMEOUTS));
#endif
#ifdef _POSIX_SHELL
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SHELL"), s7_make_integer(sc, (s7_int)_POSIX_SHELL));
#endif
#ifdef _POSIX_READER_WRITER_LOCKS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_READER_WRITER_LOCKS"), s7_make_integer(sc, (s7_int)_POSIX_READER_WRITER_LOCKS));
#endif
#ifdef _POSIX_REGEXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_REGEXP"), s7_make_integer(sc, (s7_int)_POSIX_REGEXP));
#endif
#ifdef _POSIX_THREAD_CPUTIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_CPUTIME"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_CPUTIME));
#endif
#ifdef _POSIX_CPUTIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_CPUTIME"), s7_make_integer(sc, (s7_int)_POSIX_CPUTIME));
#endif
#ifdef _POSIX_SHARED_MEMORY_OBJECTS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SHARED_MEMORY_OBJECTS"), s7_make_integer(sc, (s7_int)_POSIX_SHARED_MEMORY_OBJECTS));
#endif
#ifdef _POSIX_PRIORITIZED_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_PRIORITIZED_IO"), s7_make_integer(sc, (s7_int)_POSIX_PRIORITIZED_IO));
#endif
#ifdef _POSIX_ASYNC_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_ASYNC_IO"), s7_make_integer(sc, (s7_int)_POSIX_ASYNC_IO));
#endif
#ifdef _POSIX_ASYNCHRONOUS_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_ASYNCHRONOUS_IO"), s7_make_integer(sc, (s7_int)_POSIX_ASYNCHRONOUS_IO));
#endif
#ifdef _POSIX_REALTIME_SIGNALS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_REALTIME_SIGNALS"), s7_make_integer(sc, (s7_int)_POSIX_REALTIME_SIGNALS));
#endif
#ifdef _POSIX_SEMAPHORES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SEMAPHORES"), s7_make_integer(sc, (s7_int)_POSIX_SEMAPHORES));
#endif
#ifdef _POSIX_THREAD_PRIO_PROTECT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_PRIO_PROTECT"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_PRIO_PROTECT));
#endif
#ifdef _POSIX_THREAD_PRIO_INHERIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_PRIO_INHERIT"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_PRIO_INHERIT));
#endif
#ifdef _POSIX_THREAD_ATTR_STACKADDR
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_ATTR_STACKADDR"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_ATTR_STACKADDR));
#endif
#ifdef _POSIX_THREAD_ATTR_STACKSIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_ATTR_STACKSIZE"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_ATTR_STACKSIZE));
#endif
#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_PRIORITY_SCHEDULING"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_PRIORITY_SCHEDULING));
#endif
#ifdef _POSIX_THREAD_SAFE_FUNCTIONS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREAD_SAFE_FUNCTIONS"), s7_make_integer(sc, (s7_int)_POSIX_THREAD_SAFE_FUNCTIONS));
#endif
#ifdef _POSIX_REENTRANT_FUNCTIONS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_REENTRANT_FUNCTIONS"), s7_make_integer(sc, (s7_int)_POSIX_REENTRANT_FUNCTIONS));
#endif
#ifdef _POSIX_THREADS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_THREADS"), s7_make_integer(sc, (s7_int)_POSIX_THREADS));
#endif
#ifdef _POSIX_NO_TRUNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_NO_TRUNC"), s7_make_integer(sc, (s7_int)_POSIX_NO_TRUNC));
#endif
#ifdef _POSIX_VDISABLE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_VDISABLE"), s7_make_integer(sc, (s7_int)_POSIX_VDISABLE));
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_CHOWN_RESTRICTED"), s7_make_integer(sc, (s7_int)_POSIX_CHOWN_RESTRICTED));
#endif
#ifdef _POSIX_MEMORY_PROTECTION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MEMORY_PROTECTION"), s7_make_integer(sc, (s7_int)_POSIX_MEMORY_PROTECTION));
#endif
#ifdef _POSIX_MEMLOCK_RANGE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MEMLOCK_RANGE"), s7_make_integer(sc, (s7_int)_POSIX_MEMLOCK_RANGE));
#endif
#ifdef _POSIX_MEMLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MEMLOCK"), s7_make_integer(sc, (s7_int)_POSIX_MEMLOCK));
#endif
#ifdef _POSIX_MAPPED_FILES
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MAPPED_FILES"), s7_make_integer(sc, (s7_int)_POSIX_MAPPED_FILES));
#endif
#ifdef _POSIX_FSYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_FSYNC"), s7_make_integer(sc, (s7_int)_POSIX_FSYNC));
#endif
#ifdef _POSIX_SYNCHRONIZED_IO
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SYNCHRONIZED_IO"), s7_make_integer(sc, (s7_int)_POSIX_SYNCHRONIZED_IO));
#endif
#ifdef _POSIX_PRIORITY_SCHEDULING
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_PRIORITY_SCHEDULING"), s7_make_integer(sc, (s7_int)_POSIX_PRIORITY_SCHEDULING));
#endif
#ifdef _POSIX_SAVED_IDS
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SAVED_IDS"), s7_make_integer(sc, (s7_int)_POSIX_SAVED_IDS));
#endif
#ifdef _POSIX_JOB_CONTROL
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_JOB_CONTROL"), s7_make_integer(sc, (s7_int)_POSIX_JOB_CONTROL));
#endif
#ifdef _POSIX2_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_VERSION"), s7_make_integer(sc, (s7_int)_POSIX2_VERSION));
#endif
#ifdef _POSIX_VERSION
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_VERSION"), s7_make_integer(sc, (s7_int)_POSIX_VERSION));
#endif
#ifdef LC_IDENTIFICATION
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_IDENTIFICATION"), s7_make_integer(sc, (s7_int)LC_IDENTIFICATION));
#endif
#ifdef LC_MEASUREMENT
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_MEASUREMENT"), s7_make_integer(sc, (s7_int)LC_MEASUREMENT));
#endif
#ifdef LC_TELEPHONE
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_TELEPHONE"), s7_make_integer(sc, (s7_int)LC_TELEPHONE));
#endif
#ifdef LC_ADDRESS
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_ADDRESS"), s7_make_integer(sc, (s7_int)LC_ADDRESS));
#endif
#ifdef LC_NAME
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_NAME"), s7_make_integer(sc, (s7_int)LC_NAME));
#endif
#ifdef LC_PAPER
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_PAPER"), s7_make_integer(sc, (s7_int)LC_PAPER));
#endif
#ifdef LC_ALL
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_ALL"), s7_make_integer(sc, (s7_int)LC_ALL));
#endif
#ifdef LC_MESSAGES
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_MESSAGES"), s7_make_integer(sc, (s7_int)LC_MESSAGES));
#endif
#ifdef LC_MONETARY
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_MONETARY"), s7_make_integer(sc, (s7_int)LC_MONETARY));
#endif
#ifdef LC_COLLATE
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_COLLATE"), s7_make_integer(sc, (s7_int)LC_COLLATE));
#endif
#ifdef LC_TIME
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_TIME"), s7_make_integer(sc, (s7_int)LC_TIME));
#endif
#ifdef LC_NUMERIC
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_NUMERIC"), s7_make_integer(sc, (s7_int)LC_NUMERIC));
#endif
#ifdef LC_CTYPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "LC_CTYPE"), s7_make_integer(sc, (s7_int)LC_CTYPE));
#endif
#ifdef ERANGE
  s7_define(sc, cur_env, s7_make_symbol(sc, "ERANGE"), s7_make_integer(sc, (s7_int)ERANGE));
#endif
#ifdef EDOM
  s7_define(sc, cur_env, s7_make_symbol(sc, "EDOM"), s7_make_integer(sc, (s7_int)EDOM));
#endif
#ifdef EPIPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "EPIPE"), s7_make_integer(sc, (s7_int)EPIPE));
#endif
#ifdef EMLINK
  s7_define(sc, cur_env, s7_make_symbol(sc, "EMLINK"), s7_make_integer(sc, (s7_int)EMLINK));
#endif
#ifdef EROFS
  s7_define(sc, cur_env, s7_make_symbol(sc, "EROFS"), s7_make_integer(sc, (s7_int)EROFS));
#endif
#ifdef ESPIPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "ESPIPE"), s7_make_integer(sc, (s7_int)ESPIPE));
#endif
#ifdef ENOSPC
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOSPC"), s7_make_integer(sc, (s7_int)ENOSPC));
#endif
#ifdef EFBIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "EFBIG"), s7_make_integer(sc, (s7_int)EFBIG));
#endif
#ifdef ETXTBSY
  s7_define(sc, cur_env, s7_make_symbol(sc, "ETXTBSY"), s7_make_integer(sc, (s7_int)ETXTBSY));
#endif
#ifdef ENOTTY
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOTTY"), s7_make_integer(sc, (s7_int)ENOTTY));
#endif
#ifdef EMFILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "EMFILE"), s7_make_integer(sc, (s7_int)EMFILE));
#endif
#ifdef ENFILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENFILE"), s7_make_integer(sc, (s7_int)ENFILE));
#endif
#ifdef EINVAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "EINVAL"), s7_make_integer(sc, (s7_int)EINVAL));
#endif
#ifdef EISDIR
  s7_define(sc, cur_env, s7_make_symbol(sc, "EISDIR"), s7_make_integer(sc, (s7_int)EISDIR));
#endif
#ifdef ENOTDIR
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOTDIR"), s7_make_integer(sc, (s7_int)ENOTDIR));
#endif
#ifdef ENODEV
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENODEV"), s7_make_integer(sc, (s7_int)ENODEV));
#endif
#ifdef EXDEV
  s7_define(sc, cur_env, s7_make_symbol(sc, "EXDEV"), s7_make_integer(sc, (s7_int)EXDEV));
#endif
#ifdef EEXIST
  s7_define(sc, cur_env, s7_make_symbol(sc, "EEXIST"), s7_make_integer(sc, (s7_int)EEXIST));
#endif
#ifdef EBUSY
  s7_define(sc, cur_env, s7_make_symbol(sc, "EBUSY"), s7_make_integer(sc, (s7_int)EBUSY));
#endif
#ifdef ENOTBLK
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOTBLK"), s7_make_integer(sc, (s7_int)ENOTBLK));
#endif
#ifdef EFAULT
  s7_define(sc, cur_env, s7_make_symbol(sc, "EFAULT"), s7_make_integer(sc, (s7_int)EFAULT));
#endif
#ifdef EACCES
  s7_define(sc, cur_env, s7_make_symbol(sc, "EACCES"), s7_make_integer(sc, (s7_int)EACCES));
#endif
#ifdef ENOMEM
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOMEM"), s7_make_integer(sc, (s7_int)ENOMEM));
#endif
#ifdef EAGAIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "EAGAIN"), s7_make_integer(sc, (s7_int)EAGAIN));
#endif
#ifdef ECHILD
  s7_define(sc, cur_env, s7_make_symbol(sc, "ECHILD"), s7_make_integer(sc, (s7_int)ECHILD));
#endif
#ifdef EBADF
  s7_define(sc, cur_env, s7_make_symbol(sc, "EBADF"), s7_make_integer(sc, (s7_int)EBADF));
#endif
#ifdef ENOEXEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOEXEC"), s7_make_integer(sc, (s7_int)ENOEXEC));
#endif
#ifdef E2BIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "E2BIG"), s7_make_integer(sc, (s7_int)E2BIG));
#endif
#ifdef ENXIO
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENXIO"), s7_make_integer(sc, (s7_int)ENXIO));
#endif
#ifdef EIO
  s7_define(sc, cur_env, s7_make_symbol(sc, "EIO"), s7_make_integer(sc, (s7_int)EIO));
#endif
#ifdef EINTR
  s7_define(sc, cur_env, s7_make_symbol(sc, "EINTR"), s7_make_integer(sc, (s7_int)EINTR));
#endif
#ifdef ESRCH
  s7_define(sc, cur_env, s7_make_symbol(sc, "ESRCH"), s7_make_integer(sc, (s7_int)ESRCH));
#endif
#ifdef ENOENT
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOENT"), s7_make_integer(sc, (s7_int)ENOENT));
#endif
#ifdef EPERM
  s7_define(sc, cur_env, s7_make_symbol(sc, "EPERM"), s7_make_integer(sc, (s7_int)EPERM));
#endif
#ifdef EILSEQ
  s7_define(sc, cur_env, s7_make_symbol(sc, "EILSEQ"), s7_make_integer(sc, (s7_int)EILSEQ));
#endif
#ifdef ERFKILL
  s7_define(sc, cur_env, s7_make_symbol(sc, "ERFKILL"), s7_make_integer(sc, (s7_int)ERFKILL));
#endif
#ifdef ENOTRECOVERABLE
  s7_define(sc, cur_env, s7_make_symbol(sc, "ENOTRECOVERABLE"), s7_make_integer(sc, (s7_int)ENOTRECOVERABLE));
#endif
#ifdef EOWNERDEAD
  s7_define(sc, cur_env, s7_make_symbol(sc, "EOWNERDEAD"), s7_make_integer(sc, (s7_int)EOWNERDEAD));
#endif
#ifdef ECANCELED
  s7_define(sc, cur_env, s7_make_symbol(sc, "ECANCELED"), s7_make_integer(sc, (s7_int)ECANCELED));
#endif
#ifdef __GLIBC_MINOR__
  s7_define(sc, cur_env, s7_make_symbol(sc, "__GLIBC_MINOR__"), s7_make_integer(sc, (s7_int)__GLIBC_MINOR__));
#endif
#ifdef __GLIBC__
  s7_define(sc, cur_env, s7_make_symbol(sc, "__GLIBC__"), s7_make_integer(sc, (s7_int)__GLIBC__));
#endif
#ifdef MB_CUR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "MB_CUR_MAX"), s7_make_integer(sc, (s7_int)MB_CUR_MAX));
#endif
#ifdef EXIT_SUCCESS
  s7_define(sc, cur_env, s7_make_symbol(sc, "EXIT_SUCCESS"), s7_make_integer(sc, (s7_int)EXIT_SUCCESS));
#endif
#ifdef EXIT_FAILURE
  s7_define(sc, cur_env, s7_make_symbol(sc, "EXIT_FAILURE"), s7_make_integer(sc, (s7_int)EXIT_FAILURE));
#endif
#ifdef RAND_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "RAND_MAX"), s7_make_integer(sc, (s7_int)RAND_MAX));
#endif
#ifdef P_tmpdir
  s7_define(sc, cur_env, s7_make_symbol(sc, "P_tmpdir"), s7_make_string(sc, (char*)P_tmpdir));
#endif
#ifdef IOV_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "IOV_MAX"), s7_make_integer(sc, (s7_int)IOV_MAX));
#endif
#ifdef FOPEN_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "FOPEN_MAX"), s7_make_integer(sc, (s7_int)FOPEN_MAX));
#endif
#ifdef L_cuserid
  s7_define(sc, cur_env, s7_make_symbol(sc, "L_cuserid"), s7_make_integer(sc, (s7_int)L_cuserid));
#endif
#ifdef L_ctermid
  s7_define(sc, cur_env, s7_make_symbol(sc, "L_ctermid"), s7_make_integer(sc, (s7_int)L_ctermid));
#endif
#ifdef FILENAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "FILENAME_MAX"), s7_make_integer(sc, (s7_int)FILENAME_MAX));
#endif
#ifdef TMP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "TMP_MAX"), s7_make_integer(sc, (s7_int)TMP_MAX));
#endif
#ifdef L_tmpnam
  s7_define(sc, cur_env, s7_make_symbol(sc, "L_tmpnam"), s7_make_integer(sc, (s7_int)L_tmpnam));
#endif
#ifdef EOF
  s7_define(sc, cur_env, s7_make_symbol(sc, "EOF"), s7_make_integer(sc, (s7_int)EOF));
#endif
#ifdef BUFSIZ
  s7_define(sc, cur_env, s7_make_symbol(sc, "BUFSIZ"), s7_make_integer(sc, (s7_int)BUFSIZ));
#endif
#ifdef _IONBF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_IONBF"), s7_make_integer(sc, (s7_int)_IONBF));
#endif
#ifdef _IOLBF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_IOLBF"), s7_make_integer(sc, (s7_int)_IOLBF));
#endif
#ifdef _IOFBF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_IOFBF"), s7_make_integer(sc, (s7_int)_IOFBF));
#endif
#ifdef FNM_NOMATCH
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_NOMATCH"), s7_make_integer(sc, (s7_int)FNM_NOMATCH));
#endif
#ifdef FNM_EXTMATCH
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_EXTMATCH"), s7_make_integer(sc, (s7_int)FNM_EXTMATCH));
#endif
#ifdef FNM_CASEFOLD
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_CASEFOLD"), s7_make_integer(sc, (s7_int)FNM_CASEFOLD));
#endif
#ifdef FNM_LEADING_DIR
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_LEADING_DIR"), s7_make_integer(sc, (s7_int)FNM_LEADING_DIR));
#endif
#ifdef FNM_FILE_NAME
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_FILE_NAME"), s7_make_integer(sc, (s7_int)FNM_FILE_NAME));
#endif
#ifdef FNM_PERIOD
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_PERIOD"), s7_make_integer(sc, (s7_int)FNM_PERIOD));
#endif
#ifdef FNM_NOESCAPE
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_NOESCAPE"), s7_make_integer(sc, (s7_int)FNM_NOESCAPE));
#endif
#ifdef FNM_PATHNAME
  s7_define(sc, cur_env, s7_make_symbol(sc, "FNM_PATHNAME"), s7_make_integer(sc, (s7_int)FNM_PATHNAME));
#endif
#ifdef FE_TOWARDZERO
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_TOWARDZERO"), s7_make_integer(sc, (s7_int)FE_TOWARDZERO));
#endif
#ifdef FE_DOWNWARD
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_DOWNWARD"), s7_make_integer(sc, (s7_int)FE_DOWNWARD));
#endif
#ifdef FE_UPWARD
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_UPWARD"), s7_make_integer(sc, (s7_int)FE_UPWARD));
#endif
#ifdef FE_TONEAREST
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_TONEAREST"), s7_make_integer(sc, (s7_int)FE_TONEAREST));
#endif
#ifdef FE_ALL_EXCEPT
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_ALL_EXCEPT"), s7_make_integer(sc, (s7_int)FE_ALL_EXCEPT));
#endif
#ifdef FE_INVALID
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_INVALID"), s7_make_integer(sc, (s7_int)FE_INVALID));
#endif
#ifdef FE_OVERFLOW
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_OVERFLOW"), s7_make_integer(sc, (s7_int)FE_OVERFLOW));
#endif
#ifdef FE_UNDERFLOW
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_UNDERFLOW"), s7_make_integer(sc, (s7_int)FE_UNDERFLOW));
#endif
#ifdef FE_DIVBYZERO
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_DIVBYZERO"), s7_make_integer(sc, (s7_int)FE_DIVBYZERO));
#endif
#ifdef FE_INEXACT
  s7_define(sc, cur_env, s7_make_symbol(sc, "FE_INEXACT"), s7_make_integer(sc, (s7_int)FE_INEXACT));
#endif
#ifdef POSIX_FADV_NOREUSE
  s7_define(sc, cur_env, s7_make_symbol(sc, "POSIX_FADV_NOREUSE"), s7_make_integer(sc, (s7_int)POSIX_FADV_NOREUSE));
#endif
#ifdef POSIX_FADV_DONTNEED
  s7_define(sc, cur_env, s7_make_symbol(sc, "POSIX_FADV_DONTNEED"), s7_make_integer(sc, (s7_int)POSIX_FADV_DONTNEED));
#endif
#ifdef POSIX_FADV_WILLNEED
  s7_define(sc, cur_env, s7_make_symbol(sc, "POSIX_FADV_WILLNEED"), s7_make_integer(sc, (s7_int)POSIX_FADV_WILLNEED));
#endif
#ifdef POSIX_FADV_SEQUENTIAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "POSIX_FADV_SEQUENTIAL"), s7_make_integer(sc, (s7_int)POSIX_FADV_SEQUENTIAL));
#endif
#ifdef POSIX_FADV_RANDOM
  s7_define(sc, cur_env, s7_make_symbol(sc, "POSIX_FADV_RANDOM"), s7_make_integer(sc, (s7_int)POSIX_FADV_RANDOM));
#endif
#ifdef POSIX_FADV_NORMAL
  s7_define(sc, cur_env, s7_make_symbol(sc, "POSIX_FADV_NORMAL"), s7_make_integer(sc, (s7_int)POSIX_FADV_NORMAL));
#endif
#ifdef F_UNLCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_UNLCK"), s7_make_integer(sc, (s7_int)F_UNLCK));
#endif
#ifdef F_WRLCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_WRLCK"), s7_make_integer(sc, (s7_int)F_WRLCK));
#endif
#ifdef F_RDLCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_RDLCK"), s7_make_integer(sc, (s7_int)F_RDLCK));
#endif
#ifdef FD_CLOEXEC
  s7_define(sc, cur_env, s7_make_symbol(sc, "FD_CLOEXEC"), s7_make_integer(sc, (s7_int)FD_CLOEXEC));
#endif
#ifdef F_SETLKW64
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_SETLKW64"), s7_make_integer(sc, (s7_int)F_SETLKW64));
#endif
#ifdef F_SETLK64
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_SETLK64"), s7_make_integer(sc, (s7_int)F_SETLK64));
#endif
#ifdef F_GETLK64
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_GETLK64"), s7_make_integer(sc, (s7_int)F_GETLK64));
#endif
#ifdef F_SETLKW
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_SETLKW"), s7_make_integer(sc, (s7_int)F_SETLKW));
#endif
#ifdef F_SETLK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_SETLK"), s7_make_integer(sc, (s7_int)F_SETLK));
#endif
#ifdef F_GETLK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_GETLK"), s7_make_integer(sc, (s7_int)F_GETLK));
#endif
#ifdef F_SETFL
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_SETFL"), s7_make_integer(sc, (s7_int)F_SETFL));
#endif
#ifdef F_GETFL
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_GETFL"), s7_make_integer(sc, (s7_int)F_GETFL));
#endif
#ifdef F_SETFD
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_SETFD"), s7_make_integer(sc, (s7_int)F_SETFD));
#endif
#ifdef F_GETFD
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_GETFD"), s7_make_integer(sc, (s7_int)F_GETFD));
#endif
#ifdef F_DUPFD
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_DUPFD"), s7_make_integer(sc, (s7_int)F_DUPFD));
#endif
#ifdef O_LARGEFILE
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_LARGEFILE"), s7_make_integer(sc, (s7_int)O_LARGEFILE));
#endif
#ifdef O_RSYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_RSYNC"), s7_make_integer(sc, (s7_int)O_RSYNC));
#endif
#ifdef O_DSYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_DSYNC"), s7_make_integer(sc, (s7_int)O_DSYNC));
#endif
#ifdef O_ASYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_ASYNC"), s7_make_integer(sc, (s7_int)O_ASYNC));
#endif
#ifdef O_FSYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_FSYNC"), s7_make_integer(sc, (s7_int)O_FSYNC));
#endif
#ifdef O_SYNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_SYNC"), s7_make_integer(sc, (s7_int)O_SYNC));
#endif
#ifdef O_NDELAY
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_NDELAY"), s7_make_integer(sc, (s7_int)O_NDELAY));
#endif
#ifdef O_NONBLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_NONBLOCK"), s7_make_integer(sc, (s7_int)O_NONBLOCK));
#endif
#ifdef O_APPEND
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_APPEND"), s7_make_integer(sc, (s7_int)O_APPEND));
#endif
#ifdef O_TRUNC
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_TRUNC"), s7_make_integer(sc, (s7_int)O_TRUNC));
#endif
#ifdef O_NOCTTY
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_NOCTTY"), s7_make_integer(sc, (s7_int)O_NOCTTY));
#endif
#ifdef O_EXCL
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_EXCL"), s7_make_integer(sc, (s7_int)O_EXCL));
#endif
#ifdef O_CREAT
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_CREAT"), s7_make_integer(sc, (s7_int)O_CREAT));
#endif
#ifdef O_RDWR
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_RDWR"), s7_make_integer(sc, (s7_int)O_RDWR));
#endif
#ifdef O_WRONLY
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_WRONLY"), s7_make_integer(sc, (s7_int)O_WRONLY));
#endif
#ifdef O_RDONLY
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_RDONLY"), s7_make_integer(sc, (s7_int)O_RDONLY));
#endif
#ifdef O_ACCMODE
  s7_define(sc, cur_env, s7_make_symbol(sc, "O_ACCMODE"), s7_make_integer(sc, (s7_int)O_ACCMODE));
#endif
#ifdef F_TEST
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_TEST"), s7_make_integer(sc, (s7_int)F_TEST));
#endif
#ifdef F_TLOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_TLOCK"), s7_make_integer(sc, (s7_int)F_TLOCK));
#endif
#ifdef F_LOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_LOCK"), s7_make_integer(sc, (s7_int)F_LOCK));
#endif
#ifdef F_ULOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_ULOCK"), s7_make_integer(sc, (s7_int)F_ULOCK));
#endif
#ifdef SEEK_END
  s7_define(sc, cur_env, s7_make_symbol(sc, "SEEK_END"), s7_make_integer(sc, (s7_int)SEEK_END));
#endif
#ifdef SEEK_CUR
  s7_define(sc, cur_env, s7_make_symbol(sc, "SEEK_CUR"), s7_make_integer(sc, (s7_int)SEEK_CUR));
#endif
#ifdef SEEK_SET
  s7_define(sc, cur_env, s7_make_symbol(sc, "SEEK_SET"), s7_make_integer(sc, (s7_int)SEEK_SET));
#endif
#ifdef F_OK
  s7_define(sc, cur_env, s7_make_symbol(sc, "F_OK"), s7_make_integer(sc, (s7_int)F_OK));
#endif
#ifdef X_OK
  s7_define(sc, cur_env, s7_make_symbol(sc, "X_OK"), s7_make_integer(sc, (s7_int)X_OK));
#endif
#ifdef W_OK
  s7_define(sc, cur_env, s7_make_symbol(sc, "W_OK"), s7_make_integer(sc, (s7_int)W_OK));
#endif
#ifdef R_OK
  s7_define(sc, cur_env, s7_make_symbol(sc, "R_OK"), s7_make_integer(sc, (s7_int)R_OK));
#endif
#ifdef S_IRWXO
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IRWXO"), s7_make_integer(sc, (s7_int)S_IRWXO));
#endif
#ifdef S_IXOTH
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IXOTH"), s7_make_integer(sc, (s7_int)S_IXOTH));
#endif
#ifdef S_IWOTH
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IWOTH"), s7_make_integer(sc, (s7_int)S_IWOTH));
#endif
#ifdef S_IROTH
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IROTH"), s7_make_integer(sc, (s7_int)S_IROTH));
#endif
#ifdef S_IRWXG
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IRWXG"), s7_make_integer(sc, (s7_int)S_IRWXG));
#endif
#ifdef S_IXGRP
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IXGRP"), s7_make_integer(sc, (s7_int)S_IXGRP));
#endif
#ifdef S_IWGRP
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IWGRP"), s7_make_integer(sc, (s7_int)S_IWGRP));
#endif
#ifdef S_IRGRP
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IRGRP"), s7_make_integer(sc, (s7_int)S_IRGRP));
#endif
#ifdef S_IRWXU
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IRWXU"), s7_make_integer(sc, (s7_int)S_IRWXU));
#endif
#ifdef S_IXUSR
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IXUSR"), s7_make_integer(sc, (s7_int)S_IXUSR));
#endif
#ifdef S_IWUSR
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IWUSR"), s7_make_integer(sc, (s7_int)S_IWUSR));
#endif
#ifdef S_IRUSR
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IRUSR"), s7_make_integer(sc, (s7_int)S_IRUSR));
#endif
#ifdef S_ISGID
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_ISGID"), s7_make_integer(sc, (s7_int)S_ISGID));
#endif
#ifdef S_ISUID
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_ISUID"), s7_make_integer(sc, (s7_int)S_ISUID));
#endif
#ifdef S_IFSOCK
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFSOCK"), s7_make_integer(sc, (s7_int)S_IFSOCK));
#endif
#ifdef __S_IFLNK
  s7_define(sc, cur_env, s7_make_symbol(sc, "__S_IFLNK"), s7_make_integer(sc, (s7_int)__S_IFLNK));
#endif
#ifdef S_IFIFO
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFIFO"), s7_make_integer(sc, (s7_int)S_IFIFO));
#endif
#ifdef S_IFREG
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFREG"), s7_make_integer(sc, (s7_int)S_IFREG));
#endif
#ifdef S_IFBLK
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFBLK"), s7_make_integer(sc, (s7_int)S_IFBLK));
#endif
#ifdef S_IFCHR
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFCHR"), s7_make_integer(sc, (s7_int)S_IFCHR));
#endif
#ifdef S_IFDIR
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFDIR"), s7_make_integer(sc, (s7_int)S_IFDIR));
#endif
#ifdef S_IFMT
  s7_define(sc, cur_env, s7_make_symbol(sc, "S_IFMT"), s7_make_integer(sc, (s7_int)S_IFMT));
#endif
#ifdef __LITTLE_ENDIAN
  s7_define(sc, cur_env, s7_make_symbol(sc, "__LITTLE_ENDIAN"), s7_make_integer(sc, (s7_int)__LITTLE_ENDIAN));
#endif
#ifdef __BIG_ENDIAN
  s7_define(sc, cur_env, s7_make_symbol(sc, "__BIG_ENDIAN"), s7_make_integer(sc, (s7_int)__BIG_ENDIAN));
#endif
#ifdef __BYTE_ORDER
  s7_define(sc, cur_env, s7_make_symbol(sc, "__BYTE_ORDER"), s7_make_integer(sc, (s7_int)__BYTE_ORDER));
#endif
#ifdef WINT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "WINT_MAX"), s7_make_integer(sc, (s7_int)WINT_MAX));
#endif
#ifdef WINT_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "WINT_MIN"), s7_make_integer(sc, (s7_int)WINT_MIN));
#endif
#ifdef WCHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "WCHAR_MAX"), s7_make_integer(sc, (s7_int)WCHAR_MAX));
#endif
#ifdef WCHAR_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "WCHAR_MIN"), s7_make_integer(sc, (s7_int)WCHAR_MIN));
#endif
#ifdef SIZE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIZE_MAX"), s7_make_integer(sc, (s7_int)SIZE_MAX));
#endif
#ifdef SIG_ATOMIC_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_ATOMIC_MAX"), s7_make_integer(sc, (s7_int)SIG_ATOMIC_MAX));
#endif
#ifdef SIG_ATOMIC_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "SIG_ATOMIC_MIN"), s7_make_integer(sc, (s7_int)SIG_ATOMIC_MIN));
#endif
#ifdef PTRDIFF_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "PTRDIFF_MAX"), s7_make_integer(sc, (s7_int)PTRDIFF_MAX));
#endif
#ifdef PTRDIFF_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "PTRDIFF_MIN"), s7_make_integer(sc, (s7_int)PTRDIFF_MIN));
#endif
#ifdef UINTMAX_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINTMAX_MAX"), s7_make_integer(sc, (s7_int)UINTMAX_MAX));
#endif
#ifdef INTMAX_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INTMAX_MAX"), s7_make_integer(sc, (s7_int)INTMAX_MAX));
#endif
#ifdef INTMAX_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INTMAX_MIN"), s7_make_integer(sc, (s7_int)INTMAX_MIN));
#endif
#ifdef UINTPTR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINTPTR_MAX"), s7_make_integer(sc, (s7_int)UINTPTR_MAX));
#endif
#ifdef INTPTR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INTPTR_MAX"), s7_make_integer(sc, (s7_int)INTPTR_MAX));
#endif
#ifdef INTPTR_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INTPTR_MIN"), s7_make_integer(sc, (s7_int)INTPTR_MIN));
#endif
#ifdef UINT_FAST64_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_FAST64_MAX"), s7_make_integer(sc, (s7_int)UINT_FAST64_MAX));
#endif
#ifdef UINT_FAST32_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_FAST32_MAX"), s7_make_integer(sc, (s7_int)UINT_FAST32_MAX));
#endif
#ifdef UINT_FAST16_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_FAST16_MAX"), s7_make_integer(sc, (s7_int)UINT_FAST16_MAX));
#endif
#ifdef UINT_FAST8_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_FAST8_MAX"), s7_make_integer(sc, (s7_int)UINT_FAST8_MAX));
#endif
#ifdef INT_FAST64_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST64_MAX"), s7_make_integer(sc, (s7_int)INT_FAST64_MAX));
#endif
#ifdef INT_FAST32_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST32_MAX"), s7_make_integer(sc, (s7_int)INT_FAST32_MAX));
#endif
#ifdef INT_FAST16_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST16_MAX"), s7_make_integer(sc, (s7_int)INT_FAST16_MAX));
#endif
#ifdef INT_FAST8_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST8_MAX"), s7_make_integer(sc, (s7_int)INT_FAST8_MAX));
#endif
#ifdef INT_FAST64_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST64_MIN"), s7_make_integer(sc, (s7_int)INT_FAST64_MIN));
#endif
#ifdef INT_FAST32_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST32_MIN"), s7_make_integer(sc, (s7_int)INT_FAST32_MIN));
#endif
#ifdef INT_FAST16_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST16_MIN"), s7_make_integer(sc, (s7_int)INT_FAST16_MIN));
#endif
#ifdef INT_FAST8_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_FAST8_MIN"), s7_make_integer(sc, (s7_int)INT_FAST8_MIN));
#endif
#ifdef UINT_LEAST64_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_LEAST64_MAX"), s7_make_integer(sc, (s7_int)UINT_LEAST64_MAX));
#endif
#ifdef UINT_LEAST32_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_LEAST32_MAX"), s7_make_integer(sc, (s7_int)UINT_LEAST32_MAX));
#endif
#ifdef UINT_LEAST16_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_LEAST16_MAX"), s7_make_integer(sc, (s7_int)UINT_LEAST16_MAX));
#endif
#ifdef UINT_LEAST8_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_LEAST8_MAX"), s7_make_integer(sc, (s7_int)UINT_LEAST8_MAX));
#endif
#ifdef INT_LEAST64_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST64_MAX"), s7_make_integer(sc, (s7_int)INT_LEAST64_MAX));
#endif
#ifdef INT_LEAST32_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST32_MAX"), s7_make_integer(sc, (s7_int)INT_LEAST32_MAX));
#endif
#ifdef INT_LEAST16_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST16_MAX"), s7_make_integer(sc, (s7_int)INT_LEAST16_MAX));
#endif
#ifdef INT_LEAST8_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST8_MAX"), s7_make_integer(sc, (s7_int)INT_LEAST8_MAX));
#endif
#ifdef INT_LEAST64_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST64_MIN"), s7_make_integer(sc, (s7_int)INT_LEAST64_MIN));
#endif
#ifdef INT_LEAST32_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST32_MIN"), s7_make_integer(sc, (s7_int)INT_LEAST32_MIN));
#endif
#ifdef INT_LEAST16_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST16_MIN"), s7_make_integer(sc, (s7_int)INT_LEAST16_MIN));
#endif
#ifdef INT_LEAST8_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_LEAST8_MIN"), s7_make_integer(sc, (s7_int)INT_LEAST8_MIN));
#endif
#ifdef UINT64_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT64_MAX"), s7_make_integer(sc, (s7_int)UINT64_MAX));
#endif
#ifdef UINT32_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT32_MAX"), s7_make_integer(sc, (s7_int)UINT32_MAX));
#endif
#ifdef UINT16_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT16_MAX"), s7_make_integer(sc, (s7_int)UINT16_MAX));
#endif
#ifdef UINT8_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT8_MAX"), s7_make_integer(sc, (s7_int)UINT8_MAX));
#endif
#ifdef INT64_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT64_MAX"), s7_make_integer(sc, (s7_int)INT64_MAX));
#endif
#ifdef INT32_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT32_MAX"), s7_make_integer(sc, (s7_int)INT32_MAX));
#endif
#ifdef INT16_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT16_MAX"), s7_make_integer(sc, (s7_int)INT16_MAX));
#endif
#ifdef INT8_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT8_MAX"), s7_make_integer(sc, (s7_int)INT8_MAX));
#endif
#ifdef INT64_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT64_MIN"), s7_make_integer(sc, (s7_int)INT64_MIN));
#endif
#ifdef INT32_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT32_MIN"), s7_make_integer(sc, (s7_int)INT32_MIN));
#endif
#ifdef INT16_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT16_MIN"), s7_make_integer(sc, (s7_int)INT16_MIN));
#endif
#ifdef INT8_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT8_MIN"), s7_make_integer(sc, (s7_int)INT8_MIN));
#endif
#ifdef LDBL_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MIN"), s7_make_real(sc, (s7_double)LDBL_MIN));
#endif
#ifdef DBL_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MIN"), s7_make_real(sc, (s7_double)DBL_MIN));
#endif
#ifdef FLT_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MIN"), s7_make_real(sc, (s7_double)FLT_MIN));
#endif
#ifdef LDBL_EPSILON
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_EPSILON"), s7_make_real(sc, (s7_double)LDBL_EPSILON));
#endif
#ifdef DBL_EPSILON
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_EPSILON"), s7_make_real(sc, (s7_double)DBL_EPSILON));
#endif
#ifdef FLT_EPSILON
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_EPSILON"), s7_make_real(sc, (s7_double)FLT_EPSILON));
#endif
#ifdef LDBL_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MAX"), s7_make_real(sc, (s7_double)LDBL_MAX));
#endif
#ifdef DBL_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MAX"), s7_make_real(sc, (s7_double)DBL_MAX));
#endif
#ifdef FLT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MAX"), s7_make_real(sc, (s7_double)FLT_MAX));
#endif
#ifdef FLT_EVAL_METHOD
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_EVAL_METHOD"), s7_make_integer(sc, (s7_int)FLT_EVAL_METHOD));
#endif
#ifdef FLT_ROUNDS
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_ROUNDS"), s7_make_integer(sc, (s7_int)FLT_ROUNDS));
#endif
#ifdef LDBL_MAX_10_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MAX_10_EXP"), s7_make_integer(sc, (s7_int)LDBL_MAX_10_EXP));
#endif
#ifdef DBL_MAX_10_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MAX_10_EXP"), s7_make_integer(sc, (s7_int)DBL_MAX_10_EXP));
#endif
#ifdef FLT_MAX_10_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MAX_10_EXP"), s7_make_integer(sc, (s7_int)FLT_MAX_10_EXP));
#endif
#ifdef LDBL_MAX_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MAX_EXP"), s7_make_integer(sc, (s7_int)LDBL_MAX_EXP));
#endif
#ifdef DBL_MAX_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MAX_EXP"), s7_make_integer(sc, (s7_int)DBL_MAX_EXP));
#endif
#ifdef FLT_MAX_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MAX_EXP"), s7_make_integer(sc, (s7_int)FLT_MAX_EXP));
#endif
#ifdef LDBL_MIN_10_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MIN_10_EXP"), s7_make_integer(sc, (s7_int)LDBL_MIN_10_EXP));
#endif
#ifdef DBL_MIN_10_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MIN_10_EXP"), s7_make_integer(sc, (s7_int)DBL_MIN_10_EXP));
#endif
#ifdef FLT_MIN_10_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MIN_10_EXP"), s7_make_integer(sc, (s7_int)FLT_MIN_10_EXP));
#endif
#ifdef LDBL_MIN_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MIN_EXP"), s7_make_integer(sc, (s7_int)LDBL_MIN_EXP));
#endif
#ifdef DBL_MIN_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MIN_EXP"), s7_make_integer(sc, (s7_int)DBL_MIN_EXP));
#endif
#ifdef FLT_MIN_EXP
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MIN_EXP"), s7_make_integer(sc, (s7_int)FLT_MIN_EXP));
#endif
#ifdef LDBL_DIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_DIG"), s7_make_integer(sc, (s7_int)LDBL_DIG));
#endif
#ifdef DBL_DIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_DIG"), s7_make_integer(sc, (s7_int)DBL_DIG));
#endif
#ifdef FLT_DIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_DIG"), s7_make_integer(sc, (s7_int)FLT_DIG));
#endif
#ifdef LDBL_MANT_DIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "LDBL_MANT_DIG"), s7_make_integer(sc, (s7_int)LDBL_MANT_DIG));
#endif
#ifdef DBL_MANT_DIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "DBL_MANT_DIG"), s7_make_integer(sc, (s7_int)DBL_MANT_DIG));
#endif
#ifdef FLT_MANT_DIG
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_MANT_DIG"), s7_make_integer(sc, (s7_int)FLT_MANT_DIG));
#endif
#ifdef FLT_RADIX
  s7_define(sc, cur_env, s7_make_symbol(sc, "FLT_RADIX"), s7_make_integer(sc, (s7_int)FLT_RADIX));
#endif
#ifdef RE_DUP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "RE_DUP_MAX"), s7_make_integer(sc, (s7_int)RE_DUP_MAX));
#endif
#ifdef CHARCLASS_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "CHARCLASS_NAME_MAX"), s7_make_integer(sc, (s7_int)CHARCLASS_NAME_MAX));
#endif
#ifdef LINE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "LINE_MAX"), s7_make_integer(sc, (s7_int)LINE_MAX));
#endif
#ifdef EXPR_NEST_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "EXPR_NEST_MAX"), s7_make_integer(sc, (s7_int)EXPR_NEST_MAX));
#endif
#ifdef COLL_WEIGHTS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "COLL_WEIGHTS_MAX"), s7_make_integer(sc, (s7_int)COLL_WEIGHTS_MAX));
#endif
#ifdef BC_STRING_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "BC_STRING_MAX"), s7_make_integer(sc, (s7_int)BC_STRING_MAX));
#endif
#ifdef BC_SCALE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "BC_SCALE_MAX"), s7_make_integer(sc, (s7_int)BC_SCALE_MAX));
#endif
#ifdef BC_DIM_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "BC_DIM_MAX"), s7_make_integer(sc, (s7_int)BC_DIM_MAX));
#endif
#ifdef BC_BASE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "BC_BASE_MAX"), s7_make_integer(sc, (s7_int)BC_BASE_MAX));
#endif
#ifdef _POSIX2_CHARCLASS_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_CHARCLASS_NAME_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_CHARCLASS_NAME_MAX));
#endif
#ifdef _POSIX2_RE_DUP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_RE_DUP_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_RE_DUP_MAX));
#endif
#ifdef _POSIX2_LINE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_LINE_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_LINE_MAX));
#endif
#ifdef _POSIX2_EXPR_NEST_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_EXPR_NEST_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_EXPR_NEST_MAX));
#endif
#ifdef _POSIX2_COLL_WEIGHTS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_COLL_WEIGHTS_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_COLL_WEIGHTS_MAX));
#endif
#ifdef _POSIX2_BC_STRING_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_BC_STRING_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_BC_STRING_MAX));
#endif
#ifdef _POSIX2_BC_SCALE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_BC_SCALE_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_BC_SCALE_MAX));
#endif
#ifdef _POSIX2_BC_DIM_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_BC_DIM_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_BC_DIM_MAX));
#endif
#ifdef _POSIX2_BC_BASE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX2_BC_BASE_MAX"), s7_make_integer(sc, (s7_int)_POSIX2_BC_BASE_MAX));
#endif
#ifdef NGROUPS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "NGROUPS_MAX"), s7_make_integer(sc, (s7_int)NGROUPS_MAX));
#endif
#ifdef SSIZE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "SSIZE_MAX"), s7_make_integer(sc, (s7_int)SSIZE_MAX));
#endif
#ifdef _POSIX_CLOCKRES_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_CLOCKRES_MIN"), s7_make_integer(sc, (s7_int)_POSIX_CLOCKRES_MIN));
#endif
#ifdef _POSIX_UIO_MAXIOV
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_UIO_MAXIOV"), s7_make_integer(sc, (s7_int)_POSIX_UIO_MAXIOV));
#endif
#ifdef _POSIX_HIWAT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_HIWAT"), s7_make_integer(sc, (s7_int)_POSIX_HIWAT));
#endif
#ifdef _POSIX_QLIMIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_QLIMIT"), s7_make_integer(sc, (s7_int)_POSIX_QLIMIT));
#endif
#ifdef _POSIX_TZNAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TZNAME_MAX"), s7_make_integer(sc, (s7_int)_POSIX_TZNAME_MAX));
#endif
#ifdef _POSIX_TTY_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TTY_NAME_MAX"), s7_make_integer(sc, (s7_int)_POSIX_TTY_NAME_MAX));
#endif
#ifdef _POSIX_TIMER_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_TIMER_MAX"), s7_make_integer(sc, (s7_int)_POSIX_TIMER_MAX));
#endif
#ifdef _POSIX_SYMLOOP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SYMLOOP_MAX"), s7_make_integer(sc, (s7_int)_POSIX_SYMLOOP_MAX));
#endif
#ifdef _POSIX_SYMLINK_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SYMLINK_MAX"), s7_make_integer(sc, (s7_int)_POSIX_SYMLINK_MAX));
#endif
#ifdef _POSIX_STREAM_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_STREAM_MAX"), s7_make_integer(sc, (s7_int)_POSIX_STREAM_MAX));
#endif
#ifdef _POSIX_SSIZE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SSIZE_MAX"), s7_make_integer(sc, (s7_int)_POSIX_SSIZE_MAX));
#endif
#ifdef _POSIX_SIGQUEUE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SIGQUEUE_MAX"), s7_make_integer(sc, (s7_int)_POSIX_SIGQUEUE_MAX));
#endif
#ifdef _POSIX_SEM_VALUE_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SEM_VALUE_MAX"), s7_make_integer(sc, (s7_int)_POSIX_SEM_VALUE_MAX));
#endif
#ifdef _POSIX_SEM_NSEMS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_SEM_NSEMS_MAX"), s7_make_integer(sc, (s7_int)_POSIX_SEM_NSEMS_MAX));
#endif
#ifdef _POSIX_RTSIG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_RTSIG_MAX"), s7_make_integer(sc, (s7_int)_POSIX_RTSIG_MAX));
#endif
#ifdef _POSIX_RE_DUP_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_RE_DUP_MAX"), s7_make_integer(sc, (s7_int)_POSIX_RE_DUP_MAX));
#endif
#ifdef _POSIX_PIPE_BUF
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_PIPE_BUF"), s7_make_integer(sc, (s7_int)_POSIX_PIPE_BUF));
#endif
#ifdef _POSIX_PATH_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_PATH_MAX"), s7_make_integer(sc, (s7_int)_POSIX_PATH_MAX));
#endif
#ifdef _POSIX_FD_SETSIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_FD_SETSIZE"), s7_make_integer(sc, (s7_int)_POSIX_FD_SETSIZE));
#endif
#ifdef _POSIX_OPEN_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_OPEN_MAX"), s7_make_integer(sc, (s7_int)_POSIX_OPEN_MAX));
#endif
#ifdef _POSIX_NGROUPS_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_NGROUPS_MAX"), s7_make_integer(sc, (s7_int)_POSIX_NGROUPS_MAX));
#endif
#ifdef _POSIX_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_NAME_MAX"), s7_make_integer(sc, (s7_int)_POSIX_NAME_MAX));
#endif
#ifdef _POSIX_MQ_PRIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MQ_PRIO_MAX"), s7_make_integer(sc, (s7_int)_POSIX_MQ_PRIO_MAX));
#endif
#ifdef _POSIX_MQ_OPEN_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MQ_OPEN_MAX"), s7_make_integer(sc, (s7_int)_POSIX_MQ_OPEN_MAX));
#endif
#ifdef _POSIX_MAX_INPUT
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MAX_INPUT"), s7_make_integer(sc, (s7_int)_POSIX_MAX_INPUT));
#endif
#ifdef _POSIX_MAX_CANON
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_MAX_CANON"), s7_make_integer(sc, (s7_int)_POSIX_MAX_CANON));
#endif
#ifdef _POSIX_LOGIN_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_LOGIN_NAME_MAX"), s7_make_integer(sc, (s7_int)_POSIX_LOGIN_NAME_MAX));
#endif
#ifdef _POSIX_LINK_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_LINK_MAX"), s7_make_integer(sc, (s7_int)_POSIX_LINK_MAX));
#endif
#ifdef _POSIX_HOST_NAME_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_HOST_NAME_MAX"), s7_make_integer(sc, (s7_int)_POSIX_HOST_NAME_MAX));
#endif
#ifdef _POSIX_DELAYTIMER_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_DELAYTIMER_MAX"), s7_make_integer(sc, (s7_int)_POSIX_DELAYTIMER_MAX));
#endif
#ifdef _POSIX_CHILD_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_CHILD_MAX"), s7_make_integer(sc, (s7_int)_POSIX_CHILD_MAX));
#endif
#ifdef _POSIX_ARG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_ARG_MAX"), s7_make_integer(sc, (s7_int)_POSIX_ARG_MAX));
#endif
#ifdef _POSIX_AIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_AIO_MAX"), s7_make_integer(sc, (s7_int)_POSIX_AIO_MAX));
#endif
#ifdef _POSIX_AIO_LISTIO_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "_POSIX_AIO_LISTIO_MAX"), s7_make_integer(sc, (s7_int)_POSIX_AIO_LISTIO_MAX));
#endif
#ifdef ULLONG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "ULLONG_MAX"), s7_make_integer(sc, (s7_int)ULLONG_MAX));
#endif
#ifdef LLONG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "LLONG_MAX"), s7_make_integer(sc, (s7_int)LLONG_MAX));
#endif
#ifdef LLONG_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "LLONG_MIN"), s7_make_integer(sc, (s7_int)LLONG_MIN));
#endif
#ifdef ULONG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "ULONG_MAX"), s7_make_integer(sc, (s7_int)ULONG_MAX));
#endif
#ifdef LONG_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "LONG_MAX"), s7_make_integer(sc, (s7_int)LONG_MAX));
#endif
#ifdef LONG_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "LONG_MIN"), s7_make_integer(sc, (s7_int)LONG_MIN));
#endif
#ifdef UINT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UINT_MAX"), s7_make_integer(sc, (s7_int)UINT_MAX));
#endif
#ifdef INT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_MAX"), s7_make_integer(sc, (s7_int)INT_MAX));
#endif
#ifdef INT_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "INT_MIN"), s7_make_integer(sc, (s7_int)INT_MIN));
#endif
#ifdef USHRT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "USHRT_MAX"), s7_make_integer(sc, (s7_int)USHRT_MAX));
#endif
#ifdef SHRT_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "SHRT_MAX"), s7_make_integer(sc, (s7_int)SHRT_MAX));
#endif
#ifdef SHRT_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "SHRT_MIN"), s7_make_integer(sc, (s7_int)SHRT_MIN));
#endif
#ifdef __WORDSIZE
  s7_define(sc, cur_env, s7_make_symbol(sc, "__WORDSIZE"), s7_make_integer(sc, (s7_int)__WORDSIZE));
#endif
#ifdef CHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "CHAR_MAX"), s7_make_integer(sc, (s7_int)CHAR_MAX));
#endif
#ifdef CHAR_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "CHAR_MIN"), s7_make_integer(sc, (s7_int)CHAR_MIN));
#endif
#ifdef CHAR_BIT
  s7_define(sc, cur_env, s7_make_symbol(sc, "CHAR_BIT"), s7_make_integer(sc, (s7_int)CHAR_BIT));
#endif
#ifdef UCHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "UCHAR_MAX"), s7_make_integer(sc, (s7_int)UCHAR_MAX));
#endif
#ifdef SCHAR_MAX
  s7_define(sc, cur_env, s7_make_symbol(sc, "SCHAR_MAX"), s7_make_integer(sc, (s7_int)SCHAR_MAX));
#endif
#ifdef SCHAR_MIN
  s7_define(sc, cur_env, s7_make_symbol(sc, "SCHAR_MIN"), s7_make_integer(sc, (s7_int)SCHAR_MIN));
#endif

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "recvfrom"),
            s7_make_typed_function(sc, "recvfrom", g_recvfrom, 6, 0, false, "recvfrom", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setsockopt"),
            s7_make_typed_function(sc, "setsockopt", g_setsockopt, 5, 0, false, "setsockopt", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getsockopt"),
            s7_make_typed_function(sc, "getsockopt", g_getsockopt, 5, 0, false, "getsockopt", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "accept"),
            s7_make_typed_function(sc, "accept", g_accept, 3, 0, false, "accept", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpeername"),
            s7_make_typed_function(sc, "getpeername", g_getpeername, 3, 0, false, "getpeername", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getsockname"),
            s7_make_typed_function(sc, "getsockname", g_getsockname, 3, 0, false, "getsockname", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "socketpair"),
            s7_make_typed_function(sc, "socketpair", g_socketpair, 3, 0, false, "socketpair", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "protoent.p_aliases"),
            s7_make_typed_function(sc, "protoent.p_aliases", g_protoent_p_aliases, 1, 0, false, "protoent.p_aliases", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "netent.n_aliases"),
            s7_make_typed_function(sc, "netent.n_aliases", g_netent_n_aliases, 1, 0, false, "netent.n_aliases", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "servent.s_aliases"),
            s7_make_typed_function(sc, "servent.s_aliases", g_servent_s_aliases, 1, 0, false, "servent.s_aliases", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "hostent.h_aliases"),
            s7_make_typed_function(sc, "hostent.h_aliases", g_hostent_h_aliases, 1, 0, false, "hostent.h_aliases", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "protoent.p_proto"),
            s7_make_typed_function(sc, "protoent.p_proto", g_protoent_p_proto, 1, 0, false, "protoent.p_proto", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "servent.s_port"),
            s7_make_typed_function(sc, "servent.s_port", g_servent_s_port, 1, 0, false, "servent.s_port", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "netent.n_net"),
            s7_make_typed_function(sc, "netent.n_net", g_netent_n_net, 1, 0, false, "netent.n_net", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "netent.n_addrtype"),
            s7_make_typed_function(sc, "netent.n_addrtype", g_netent_n_addrtype, 1, 0, false, "netent.n_addrtype", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "hostent.h_length"),
            s7_make_typed_function(sc, "hostent.h_length", g_hostent_h_length, 1, 0, false, "hostent.h_length", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "hostent.h_addrtype"),
            s7_make_typed_function(sc, "hostent.h_addrtype", g_hostent_h_addrtype, 1, 0, false, "hostent.h_addrtype", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "protoent.p_name"),
            s7_make_typed_function(sc, "protoent.p_name", g_protoent_p_name, 1, 0, false, "protoent.p_name", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "servent.s_proto"),
            s7_make_typed_function(sc, "servent.s_proto", g_servent_s_proto, 1, 0, false, "servent.s_proto", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "servent.s_name"),
            s7_make_typed_function(sc, "servent.s_name", g_servent_s_name, 1, 0, false, "servent.s_name", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "netent.n_name"),
            s7_make_typed_function(sc, "netent.n_name", g_netent_n_name, 1, 0, false, "netent.n_name", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "hostent.h_name"),
            s7_make_typed_function(sc, "hostent.h_name", g_hostent_h_name, 1, 0, false, "hostent.h_name", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.ai_next"),
            s7_make_typed_function(sc, "addrinfo.ai_next", g_addrinfo_ai_next, 1, 0, false, "addrinfo.ai_next", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.ai_canonname"),
            s7_make_typed_function(sc, "addrinfo.ai_canonname", g_addrinfo_ai_canonname, 1, 0, false, "addrinfo.ai_canonname", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.set_ai_protocol"),
            s7_make_typed_function(sc, "addrinfo.set_ai_protocol", g_addrinfo_set_ai_protocol, 2, 0, false, "addrinfo.set_ai_protocol", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.ai_protocol"),
            s7_make_typed_function(sc, "addrinfo.ai_protocol", g_addrinfo_ai_protocol, 1, 0, false, "addrinfo.ai_protocol", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.set_ai_socktype"),
            s7_make_typed_function(sc, "addrinfo.set_ai_socktype", g_addrinfo_set_ai_socktype, 2, 0, false, "addrinfo.set_ai_socktype", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.ai_socktype"),
            s7_make_typed_function(sc, "addrinfo.ai_socktype", g_addrinfo_ai_socktype, 1, 0, false, "addrinfo.ai_socktype", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.set_ai_family"),
            s7_make_typed_function(sc, "addrinfo.set_ai_family", g_addrinfo_set_ai_family, 2, 0, false, "addrinfo.set_ai_family", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.ai_family"),
            s7_make_typed_function(sc, "addrinfo.ai_family", g_addrinfo_ai_family, 1, 0, false, "addrinfo.ai_family", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.set_ai_flags"),
            s7_make_typed_function(sc, "addrinfo.set_ai_flags", g_addrinfo_set_ai_flags, 2, 0, false, "addrinfo.set_ai_flags", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.ai_flags"),
            s7_make_typed_function(sc, "addrinfo.ai_flags", g_addrinfo_ai_flags, 1, 0, false, "addrinfo.ai_flags", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "addrinfo.make"),
            s7_make_typed_function(sc, "addrinfo.make", g_addrinfo_make, 0, 0, false, "addrinfo.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getnameinfo"),
            s7_make_typed_function(sc, "getnameinfo", g_getnameinfo, 3, 0, false, "getnameinfo", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getaddrinfo"),
            s7_make_typed_function(sc, "getaddrinfo", g_getaddrinfo, 3, 0, false, "getaddrinfo", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ntohs"),
            s7_make_typed_function(sc, "ntohs", g_ntohs, 1, 0, false, "ntohs", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ntohl"),
            s7_make_typed_function(sc, "ntohl", g_ntohl, 1, 0, false, "ntohl", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "htons"),
            s7_make_typed_function(sc, "htons", g_htons, 1, 0, false, "htons", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "htonl"),
            s7_make_typed_function(sc, "htonl", g_htonl, 1, 0, false, "htonl", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "recvmsg"),
            s7_make_typed_function(sc, "recvmsg", s7_dl_recvmsg, 3, 0, false, "int recvmsg(int void* int)", pl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sendmsg"),
            s7_make_typed_function(sc, "sendmsg", s7_dl_sendmsg, 3, 0, false, "int sendmsg(int void* int)", pl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sendto"),
            s7_make_typed_function(sc, "sendto", s7_dl_sendto, 6, 0, false, "int sendto(int void* int int void* int)", pl_iixiixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "recv"),
            s7_make_typed_function(sc, "recv", s7_dl_recv, 4, 0, false, "int recv(int void* int int)", pcl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "send"),
            s7_make_typed_function(sc, "send", s7_dl_send, 4, 0, false, "int send(int void* int int)", pcl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "connect"),
            s7_make_typed_function(sc, "connect", s7_dl_connect, 3, 0, false, "int connect(int void* int)", pl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "bind"),
            s7_make_typed_function(sc, "bind", s7_dl_bind, 3, 0, false, "int bind(int void* int)", pl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "gai_strerror"),
            s7_make_typed_function(sc, "gai_strerror", s7_dl_gai_strerror, 1, 0, false, "char* gai_strerror(int)", pl_si));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "freeaddrinfo"),
            s7_make_typed_function(sc, "freeaddrinfo", s7_dl_freeaddrinfo, 1, 0, false, "void freeaddrinfo(void*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getprotobynumber"),
            s7_make_typed_function(sc, "getprotobynumber", s7_dl_getprotobynumber, 1, 0, false, "void* getprotobynumber(int)", pl_xi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getprotobyname"),
            s7_make_typed_function(sc, "getprotobyname", s7_dl_getprotobyname, 1, 0, false, "void* getprotobyname(char*)", pl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getservbyport"),
            s7_make_typed_function(sc, "getservbyport", s7_dl_getservbyport, 2, 0, false, "void* getservbyport(int char*)", pl_xis));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getservbyname"),
            s7_make_typed_function(sc, "getservbyname", s7_dl_getservbyname, 2, 0, false, "void* getservbyname(char* char*)", pcl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getnetbyaddr"),
            s7_make_typed_function(sc, "getnetbyaddr", s7_dl_getnetbyaddr, 2, 0, false, "void* getnetbyaddr(int int)", pcl_xi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getnetbyname"),
            s7_make_typed_function(sc, "getnetbyname", s7_dl_getnetbyname, 1, 0, false, "void* getnetbyname(char*)", pl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "gethostbyaddr"),
            s7_make_typed_function(sc, "gethostbyaddr", s7_dl_gethostbyaddr, 3, 0, false, "void* gethostbyaddr(void* int int)", pcl_xxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "gethostbyname"),
            s7_make_typed_function(sc, "gethostbyname", s7_dl_gethostbyname, 1, 0, false, "void* gethostbyname(char*)", pl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "shutdown"),
            s7_make_typed_function(sc, "shutdown", s7_dl_shutdown, 2, 0, false, "int shutdown(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "listen"),
            s7_make_typed_function(sc, "listen", s7_dl_listen, 2, 0, false, "int listen(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "socket"),
            s7_make_typed_function(sc, "socket", s7_dl_socket, 3, 0, false, "int socket(int int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getnetent"),
            s7_make_typed_function(sc, "getnetent", s7_dl_getnetent, 0, 0, false, "void* getnetent(void)", pl_xt));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "endnetent"),
            s7_make_typed_function(sc, "endnetent", s7_dl_endnetent, 0, 0, false, "void endnetent(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setnetent"),
            s7_make_typed_function(sc, "setnetent", s7_dl_setnetent, 1, 0, false, "void setnetent(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getprotoent"),
            s7_make_typed_function(sc, "getprotoent", s7_dl_getprotoent, 0, 0, false, "void* getprotoent(void)", pl_xt));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "endprotoent"),
            s7_make_typed_function(sc, "endprotoent", s7_dl_endprotoent, 0, 0, false, "void endprotoent(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setprotoent"),
            s7_make_typed_function(sc, "setprotoent", s7_dl_setprotoent, 1, 0, false, "void setprotoent(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getservent"),
            s7_make_typed_function(sc, "getservent", s7_dl_getservent, 0, 0, false, "void* getservent(void)", pl_xt));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "endservent"),
            s7_make_typed_function(sc, "endservent", s7_dl_endservent, 0, 0, false, "void endservent(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setservent"),
            s7_make_typed_function(sc, "setservent", s7_dl_setservent, 1, 0, false, "void setservent(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "gethostent"),
            s7_make_typed_function(sc, "gethostent", s7_dl_gethostent, 0, 0, false, "void* gethostent(void)", pl_xt));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "endhostent"),
            s7_make_typed_function(sc, "endhostent", s7_dl_endhostent, 0, 0, false, "void endhostent(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sethostent"),
            s7_make_typed_function(sc, "sethostent", s7_dl_sethostent, 1, 0, false, "void sethostent(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "waitid"),
            s7_make_typed_function(sc, "waitid", s7_dl_waitid, 4, 0, false, "int waitid(int int siginfo_t* int)", pl_iiixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigwaitinfo"),
            s7_make_typed_function(sc, "sigwaitinfo", s7_dl_sigwaitinfo, 2, 0, false, "int sigwaitinfo(sigset_t* siginfo_t*)", pcl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setrlimit"),
            s7_make_typed_function(sc, "setrlimit", s7_dl_setrlimit, 2, 0, false, "int setrlimit(int void*)", pl_iix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getrlimit"),
            s7_make_typed_function(sc, "getrlimit", s7_dl_getrlimit, 2, 0, false, "int getrlimit(int void*)", pl_iix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "signal"),
            s7_make_typed_function(sc, "signal", g_signal, 2, 0, false, "signal", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigset.make"),
            s7_make_typed_function(sc, "sigset.make", g_sigset_make, 0, 0, false, "sigset.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigtimedwait"),
            s7_make_typed_function(sc, "sigtimedwait", g_sigtimedwait, 3, 0, false, "sigtimedwait", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction"),
            s7_make_typed_function(sc, "sigaction", g_sigaction, 3, 0, false, "sigaction", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigwait"),
            s7_make_typed_function(sc, "sigwait", g_sigwait, 1, 0, false, "sigwait", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigqueue"),
            s7_make_typed_function(sc, "sigqueue", g_sigqueue, 3, 0, false, "sigqueue", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "waitpid"),
            s7_make_typed_function(sc, "waitpid", g_waitpid, 2, 0, false, "waitpid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "wait"),
            s7_make_typed_function(sc, "wait", g_wait, 0, 0, false, "wait", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "WIFSTOPPED"),
            s7_make_typed_function(sc, "WIFSTOPPED", g_WIFSTOPPED, 1, 0, false, "WIFSTOPPED", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "WIFSIGNALED"),
            s7_make_typed_function(sc, "WIFSIGNALED", g_WIFSIGNALED, 1, 0, false, "WIFSIGNALED", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "WIFEXITED"),
            s7_make_typed_function(sc, "WIFEXITED", g_WIFEXITED, 1, 0, false, "WIFEXITED", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "WSTOPSIG"),
            s7_make_typed_function(sc, "WSTOPSIG", g_WSTOPSIG, 1, 0, false, "WSTOPSIG", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "WTERMSIG"),
            s7_make_typed_function(sc, "WTERMSIG", g_WTERMSIG, 1, 0, false, "WTERMSIG", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "WEXITSTATUS"),
            s7_make_typed_function(sc, "WEXITSTATUS", g_WEXITSTATUS, 1, 0, false, "WEXITSTATUS", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction.set_sa_flags"),
            s7_make_typed_function(sc, "sigaction.set_sa_flags", g_sigaction_set_sa_flags, 2, 0, false, "sigaction.set_sa_flags", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction.set_sa_handler"),
            s7_make_typed_function(sc, "sigaction.set_sa_handler", g_sigaction_set_sa_handler, 2, 0, false, "sigaction.set_sa_handler", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction.sa_mask"),
            s7_make_typed_function(sc, "sigaction.sa_mask", g_sigaction_sa_mask, 1, 0, false, "sigaction.sa_mask", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction.sa_flags"),
            s7_make_typed_function(sc, "sigaction.sa_flags", g_sigaction_sa_flags, 1, 0, false, "sigaction.sa_flags", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction.sa_handler"),
            s7_make_typed_function(sc, "sigaction.sa_handler", g_sigaction_sa_handler, 1, 0, false, "sigaction.sa_handler", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaction.make"),
            s7_make_typed_function(sc, "sigaction.make", g_sigaction_make, 0, 0, false, "sigaction.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "timespec.tv_nsec"),
            s7_make_typed_function(sc, "timespec.tv_nsec", g_timespec_tv_nsec, 1, 0, false, "timespec.tv_nsec", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "timespec.tv_sec"),
            s7_make_typed_function(sc, "timespec.tv_sec", g_timespec_tv_sec, 1, 0, false, "timespec.tv_sec", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "timespec.make"),
            s7_make_typed_function(sc, "timespec.make", g_timespec_make, 0, 0, false, "timespec.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_addr"),
            s7_make_typed_function(sc, "siginfo.si_addr", g_siginfo_si_addr, 1, 0, false, "siginfo.si_addr", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_ptr"),
            s7_make_typed_function(sc, "siginfo.si_ptr", g_siginfo_si_ptr, 1, 0, false, "siginfo.si_ptr", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_fd"),
            s7_make_typed_function(sc, "siginfo.si_fd", g_siginfo_si_fd, 1, 0, false, "siginfo.si_fd", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_band"),
            s7_make_typed_function(sc, "siginfo.si_band", g_siginfo_si_band, 1, 0, false, "siginfo.si_band", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_timerid"),
            s7_make_typed_function(sc, "siginfo.si_timerid", g_siginfo_si_timerid, 1, 0, false, "siginfo.si_timerid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_overrun"),
            s7_make_typed_function(sc, "siginfo.si_overrun", g_siginfo_si_overrun, 1, 0, false, "siginfo.si_overrun", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_int"),
            s7_make_typed_function(sc, "siginfo.si_int", g_siginfo_si_int, 1, 0, false, "siginfo.si_int", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_value"),
            s7_make_typed_function(sc, "siginfo.si_value", g_siginfo_si_value, 1, 0, false, "siginfo.si_value", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_stime"),
            s7_make_typed_function(sc, "siginfo.si_stime", g_siginfo_si_stime, 1, 0, false, "siginfo.si_stime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_utime"),
            s7_make_typed_function(sc, "siginfo.si_utime", g_siginfo_si_utime, 1, 0, false, "siginfo.si_utime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_status"),
            s7_make_typed_function(sc, "siginfo.si_status", g_siginfo_si_status, 1, 0, false, "siginfo.si_status", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_uid"),
            s7_make_typed_function(sc, "siginfo.si_uid", g_siginfo_si_uid, 1, 0, false, "siginfo.si_uid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_pid"),
            s7_make_typed_function(sc, "siginfo.si_pid", g_siginfo_si_pid, 1, 0, false, "siginfo.si_pid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_code"),
            s7_make_typed_function(sc, "siginfo.si_code", g_siginfo_si_code, 1, 0, false, "siginfo.si_code", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_errno"),
            s7_make_typed_function(sc, "siginfo.si_errno", g_siginfo_si_errno, 1, 0, false, "siginfo.si_errno", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.si_signo"),
            s7_make_typed_function(sc, "siginfo.si_signo", g_siginfo_si_signo, 1, 0, false, "siginfo.si_signo", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "siginfo.make"),
            s7_make_typed_function(sc, "siginfo.make", g_siginfo_make, 0, 0, false, "siginfo.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_stime"),
            s7_make_typed_function(sc, "rusage.ru_stime", g_rusage_ru_stime, 1, 0, false, "rusage.ru_stime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_utime"),
            s7_make_typed_function(sc, "rusage.ru_utime", g_rusage_ru_utime, 1, 0, false, "rusage.ru_utime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_nivcsw"),
            s7_make_typed_function(sc, "rusage.ru_nivcsw", g_rusage_ru_nivcsw, 1, 0, false, "rusage.ru_nivcsw", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_nvcsw"),
            s7_make_typed_function(sc, "rusage.ru_nvcsw", g_rusage_ru_nvcsw, 1, 0, false, "rusage.ru_nvcsw", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_oublock"),
            s7_make_typed_function(sc, "rusage.ru_oublock", g_rusage_ru_oublock, 1, 0, false, "rusage.ru_oublock", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_inblock"),
            s7_make_typed_function(sc, "rusage.ru_inblock", g_rusage_ru_inblock, 1, 0, false, "rusage.ru_inblock", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_majflt"),
            s7_make_typed_function(sc, "rusage.ru_majflt", g_rusage_ru_majflt, 1, 0, false, "rusage.ru_majflt", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_minflt"),
            s7_make_typed_function(sc, "rusage.ru_minflt", g_rusage_ru_minflt, 1, 0, false, "rusage.ru_minflt", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.ru_maxrss"),
            s7_make_typed_function(sc, "rusage.ru_maxrss", g_rusage_ru_maxrss, 1, 0, false, "rusage.ru_maxrss", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getrusage"),
            s7_make_typed_function(sc, "getrusage", g_getrusage, 2, 0, false, "getrusage", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rusage.make"),
            s7_make_typed_function(sc, "rusage.make", g_rusage_make, 0, 0, false, "rusage.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rlimit.rlim_max"),
            s7_make_typed_function(sc, "rlimit.rlim_max", g_rlimit_rlim_max, 1, 0, false, "rlimit.rlim_max", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rlimit.rlim_cur"),
            s7_make_typed_function(sc, "rlimit.rlim_cur", g_rlimit_rlim_cur, 1, 0, false, "rlimit.rlim_cur", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rlimit.make"),
            s7_make_typed_function(sc, "rlimit.make", g_rlimit_make, 0, 0, false, "rlimit.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setpriority"),
            s7_make_typed_function(sc, "setpriority", s7_dl_setpriority, 3, 0, false, "int setpriority(int int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpriority"),
            s7_make_typed_function(sc, "getpriority", s7_dl_getpriority, 2, 0, false, "int getpriority(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigpending"),
            s7_make_typed_function(sc, "sigpending", s7_dl_sigpending, 1, 0, false, "int sigpending(sigset_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigsuspend"),
            s7_make_typed_function(sc, "sigsuspend", s7_dl_sigsuspend, 1, 0, false, "int sigsuspend(sigset_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigprocmask"),
            s7_make_typed_function(sc, "sigprocmask", s7_dl_sigprocmask, 3, 0, false, "int sigprocmask(int sigset_t* sigset_t*)", pcl_iix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigismember"),
            s7_make_typed_function(sc, "sigismember", s7_dl_sigismember, 2, 0, false, "int sigismember(sigset_t* int)", pl_ixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigdelset"),
            s7_make_typed_function(sc, "sigdelset", s7_dl_sigdelset, 2, 0, false, "int sigdelset(sigset_t* int)", pl_ixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigaddset"),
            s7_make_typed_function(sc, "sigaddset", s7_dl_sigaddset, 2, 0, false, "int sigaddset(sigset_t* int)", pl_ixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigfillset"),
            s7_make_typed_function(sc, "sigfillset", s7_dl_sigfillset, 1, 0, false, "int sigfillset(sigset_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sigemptyset"),
            s7_make_typed_function(sc, "sigemptyset", s7_dl_sigemptyset, 1, 0, false, "int sigemptyset(sigset_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "raise"),
            s7_make_typed_function(sc, "raise", s7_dl_raise, 1, 0, false, "int raise(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "kill"),
            s7_make_typed_function(sc, "kill", s7_dl_kill, 2, 0, false, "int kill(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "glob"),
            s7_make_typed_function(sc, "glob", g_glob, 3, 0, false, "glob", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "glob.gl_pathv"),
            s7_make_typed_function(sc, "glob.gl_pathv", g_glob_gl_pathv, 1, 0, false, "glob.gl_pathv", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "glob.gl_pathc"),
            s7_make_typed_function(sc, "glob.gl_pathc", g_glob_gl_pathc, 1, 0, false, "glob.gl_pathc", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "glob.make"),
            s7_make_typed_function(sc, "glob.make", g_glob_make, 0, 0, false, "glob.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "globfree"),
            s7_make_typed_function(sc, "globfree", s7_dl_globfree, 1, 0, false, "void globfree(glob_t*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "wordexp.we_wordv"),
            s7_make_typed_function(sc, "wordexp.we_wordv", g_wordexp_we_wordv, 1, 0, false, "wordexp.we_wordv", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "wordexp.we_wordc"),
            s7_make_typed_function(sc, "wordexp.we_wordc", g_wordexp_we_wordc, 1, 0, false, "wordexp.we_wordc", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "wordexp.make"),
            s7_make_typed_function(sc, "wordexp.make", g_wordexp_make, 0, 0, false, "wordexp.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "wordfree"),
            s7_make_typed_function(sc, "wordfree", s7_dl_wordfree, 1, 0, false, "void wordfree(wordexp_t*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "wordexp"),
            s7_make_typed_function(sc, "wordexp", s7_dl_wordexp, 3, 0, false, "int wordexp(char* wordexp_t* int)", pl_isxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_shell"),
            s7_make_typed_function(sc, "passwd.pw_shell", g_passwd_pw_shell, 1, 0, false, "passwd.pw_shell", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_dir"),
            s7_make_typed_function(sc, "passwd.pw_dir", g_passwd_pw_dir, 1, 0, false, "passwd.pw_dir", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_gecos"),
            s7_make_typed_function(sc, "passwd.pw_gecos", g_passwd_pw_gecos, 1, 0, false, "passwd.pw_gecos", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_gid"),
            s7_make_typed_function(sc, "passwd.pw_gid", g_passwd_pw_gid, 1, 0, false, "passwd.pw_gid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_uid"),
            s7_make_typed_function(sc, "passwd.pw_uid", g_passwd_pw_uid, 1, 0, false, "passwd.pw_uid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_passwd"),
            s7_make_typed_function(sc, "passwd.pw_passwd", g_passwd_pw_passwd, 1, 0, false, "passwd.pw_passwd", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "passwd.pw_name"),
            s7_make_typed_function(sc, "passwd.pw_name", g_passwd_pw_name, 1, 0, false, "passwd.pw_name", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpwnam"),
            s7_make_typed_function(sc, "getpwnam", s7_dl_getpwnam, 1, 0, false, "void* getpwnam(char*)", pl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpwuid"),
            s7_make_typed_function(sc, "getpwuid", s7_dl_getpwuid, 1, 0, false, "void* getpwuid(int)", pl_xi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpwent"),
            s7_make_typed_function(sc, "getpwent", s7_dl_getpwent, 0, 0, false, "void* getpwent(void)", pl_xt));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "endpwent"),
            s7_make_typed_function(sc, "endpwent", s7_dl_endpwent, 0, 0, false, "void endpwent(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setpwent"),
            s7_make_typed_function(sc, "setpwent", s7_dl_setpwent, 0, 0, false, "void setpwent(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "group.gr_mem"),
            s7_make_typed_function(sc, "group.gr_mem", g_group_gr_mem, 1, 0, false, "group.gr_mem", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "group.gr_gid"),
            s7_make_typed_function(sc, "group.gr_gid", g_group_gr_gid, 1, 0, false, "group.gr_gid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "group.gr_passwd"),
            s7_make_typed_function(sc, "group.gr_passwd", g_group_gr_passwd, 1, 0, false, "group.gr_passwd", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "group.gr_name"),
            s7_make_typed_function(sc, "group.gr_name", g_group_gr_name, 1, 0, false, "group.gr_name", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getgrnam"),
            s7_make_typed_function(sc, "getgrnam", g_getgrnam, 1, 0, false, "getgrnam", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getgrgid"),
            s7_make_typed_function(sc, "getgrgid", g_getgrgid, 1, 0, false, "getgrgid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "termios.set_c_cc"),
            s7_make_typed_function(sc, "termios.set_c_cc", g_termios_set_c_cc, 3, 0, false, "termios.set_c_cc", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "termios.set_c_lflag"),
            s7_make_typed_function(sc, "termios.set_c_lflag", g_termios_set_c_lflag, 2, 0, false, "termios.set_c_lflag", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "termios.c_lflag"),
            s7_make_typed_function(sc, "termios.c_lflag", g_termios_c_lflag, 1, 0, false, "termios.c_lflag", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "termios.make"),
            s7_make_typed_function(sc, "termios.make", g_termios_make, 0, 0, false, "termios.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcsetattr"),
            s7_make_typed_function(sc, "tcsetattr", g_tcsetattr, 3, 0, false, "tcsetattr", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcgetattr"),
            s7_make_typed_function(sc, "tcgetattr", g_tcgetattr, 2, 0, false, "tcgetattr", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "cfsetispeed"),
            s7_make_typed_function(sc, "cfsetispeed", g_cfsetispeed, 2, 0, false, "cfsetispeed", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "cfsetospeed"),
            s7_make_typed_function(sc, "cfsetospeed", g_cfsetospeed, 2, 0, false, "cfsetospeed", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "cfgetispeed"),
            s7_make_typed_function(sc, "cfgetispeed", g_cfgetispeed, 1, 0, false, "cfgetispeed", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "cfgetospeed"),
            s7_make_typed_function(sc, "cfgetospeed", g_cfgetospeed, 1, 0, false, "cfgetospeed", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcflow"),
            s7_make_typed_function(sc, "tcflow", s7_dl_tcflow, 2, 0, false, "int tcflow(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcflush"),
            s7_make_typed_function(sc, "tcflush", s7_dl_tcflush, 2, 0, false, "int tcflush(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcdrain"),
            s7_make_typed_function(sc, "tcdrain", s7_dl_tcdrain, 1, 0, false, "int tcdrain(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcsendbreak"),
            s7_make_typed_function(sc, "tcsendbreak", s7_dl_tcsendbreak, 2, 0, false, "int tcsendbreak(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "utime"),
            s7_make_typed_function(sc, "utime", g_utime, 3, 0, false, "utime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clock_nanosleep"),
            s7_make_typed_function(sc, "clock_nanosleep", g_clock_nanosleep, 4, 0, false, "clock_nanosleep", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clock_getcpuclockid"),
            s7_make_typed_function(sc, "clock_getcpuclockid", g_clock_getcpuclockid, 1, 0, false, "clock_getcpuclockid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clock_settime"),
            s7_make_typed_function(sc, "clock_settime", g_clock_settime, 3, 0, false, "clock_settime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clock_gettime"),
            s7_make_typed_function(sc, "clock_gettime", g_clock_gettime, 1, 0, false, "clock_gettime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clock_getres"),
            s7_make_typed_function(sc, "clock_getres", g_clock_getres, 1, 0, false, "clock_getres", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "nanosleep"),
            s7_make_typed_function(sc, "nanosleep", g_nanosleep, 2, 0, false, "nanosleep", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "gettimeofday"),
            s7_make_typed_function(sc, "gettimeofday", g_gettimeofday, 0, 0, false, "gettimeofday", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strftime"),
            s7_make_typed_function(sc, "strftime", g_strftime, 4, 0, false, "strftime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "asctime"),
            s7_make_typed_function(sc, "asctime", g_asctime, 1, 0, false, "asctime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "mktime"),
            s7_make_typed_function(sc, "mktime", g_mktime, 1, 0, false, "mktime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "time.make"),
            s7_make_typed_function(sc, "time.make", g_time_make, 1, 0, false, "time.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "localtime"),
            s7_make_typed_function(sc, "localtime", s7_dl_localtime, 1, 0, false, "tm* localtime(time_t*)", pcl_x));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ctime"),
            s7_make_typed_function(sc, "ctime", s7_dl_ctime, 1, 0, false, "char* ctime(time_t*)", pl_sx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "gmtime"),
            s7_make_typed_function(sc, "gmtime", s7_dl_gmtime, 1, 0, false, "tm* gmtime(time_t*)", pcl_x));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "difftime"),
            s7_make_typed_function(sc, "difftime", s7_dl_difftime, 2, 0, false, "double difftime((time_t integer) (time_t integer))", pcl_di));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "time"),
            s7_make_typed_function(sc, "time", s7_dl_time, 1, 0, false, "int time(time_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clock"),
            s7_make_typed_function(sc, "clock", s7_dl_clock, 0, 0, false, "int clock(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.make"),
            s7_make_typed_function(sc, "stat.make", g_stat_make, 0, 0, false, "stat.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_ctime"),
            s7_make_typed_function(sc, "stat.st_ctime", g_st_ctime, 1, 0, false, "stat.st_ctime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_mtime"),
            s7_make_typed_function(sc, "stat.st_mtime", g_st_mtime, 1, 0, false, "stat.st_mtime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_atime"),
            s7_make_typed_function(sc, "stat.st_atime", g_st_atime, 1, 0, false, "stat.st_atime", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_blocks"),
            s7_make_typed_function(sc, "stat.st_blocks", g_st_blocks, 1, 0, false, "stat.st_blocks", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_blksize"),
            s7_make_typed_function(sc, "stat.st_blksize", g_st_blksize, 1, 0, false, "stat.st_blksize", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_size"),
            s7_make_typed_function(sc, "stat.st_size", g_st_size, 1, 0, false, "stat.st_size", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_rdev"),
            s7_make_typed_function(sc, "stat.st_rdev", g_st_rdev, 1, 0, false, "stat.st_rdev", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_gid"),
            s7_make_typed_function(sc, "stat.st_gid", g_st_gid, 1, 0, false, "stat.st_gid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_uid"),
            s7_make_typed_function(sc, "stat.st_uid", g_st_uid, 1, 0, false, "stat.st_uid", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_nlink"),
            s7_make_typed_function(sc, "stat.st_nlink", g_st_nlink, 1, 0, false, "stat.st_nlink", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_mode"),
            s7_make_typed_function(sc, "stat.st_mode", g_st_mode, 1, 0, false, "stat.st_mode", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_ino"),
            s7_make_typed_function(sc, "stat.st_ino", g_st_ino, 1, 0, false, "stat.st_ino", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat.st_dev"),
            s7_make_typed_function(sc, "stat.st_dev", g_st_dev, 1, 0, false, "stat.st_dev", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISSOCK"),
            s7_make_typed_function(sc, "S_ISSOCK", g_issock, 1, 0, false, "S_ISSOCK", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISLNK"),
            s7_make_typed_function(sc, "S_ISLNK", g_islnk, 1, 0, false, "S_ISLNK", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISFIFO"),
            s7_make_typed_function(sc, "S_ISFIFO", g_isfifo, 1, 0, false, "S_ISFIFO", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISREG"),
            s7_make_typed_function(sc, "S_ISREG", g_isreg, 1, 0, false, "S_ISREG", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISBLK"),
            s7_make_typed_function(sc, "S_ISBLK", g_isblk, 1, 0, false, "S_ISBLK", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISCHR"),
            s7_make_typed_function(sc, "S_ISCHR", g_ischr, 1, 0, false, "S_ISCHR", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "S_ISDIR"),
            s7_make_typed_function(sc, "S_ISDIR", g_isdir, 1, 0, false, "S_ISDIR", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "mkfifo"),
            s7_make_typed_function(sc, "mkfifo", s7_dl_mkfifo, 2, 0, false, "int mkfifo(char* int)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "mknod"),
            s7_make_typed_function(sc, "mknod", s7_dl_mknod, 3, 0, false, "int mknod(char* int int)", pcl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "mkdir"),
            s7_make_typed_function(sc, "mkdir", s7_dl_mkdir, 2, 0, false, "int mkdir(char* int)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "chmod"),
            s7_make_typed_function(sc, "chmod", s7_dl_chmod, 2, 0, false, "int chmod(char* int)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "lstat"),
            s7_make_typed_function(sc, "lstat", g_lstat, 2, 0, false, "lstat", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fstat"),
            s7_make_typed_function(sc, "fstat", g_fstat, 2, 0, false, "fstat", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "stat"),
            s7_make_typed_function(sc, "stat", g_stat, 2, 0, false, "stat", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ftw"),
            s7_make_typed_function(sc, "ftw", g_ftw, 3, 0, false, "ftw", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "read_dir"),
            s7_make_typed_function(sc, "read_dir", s7_dl_read_dir, 1, 0, false, "char* read_dir(DIR*)", pl_sx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rewinddir"),
            s7_make_typed_function(sc, "rewinddir", s7_dl_rewinddir, 1, 0, false, "void rewinddir(DIR*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "closedir"),
            s7_make_typed_function(sc, "closedir", s7_dl_closedir, 1, 0, false, "int closedir(DIR*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "opendir"),
            s7_make_typed_function(sc, "opendir", s7_dl_opendir, 1, 0, false, "DIR* opendir(char*)", pl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getgroups"),
            s7_make_typed_function(sc, "getgroups", g_getgroups, 1, 0, false, "getgroups", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getenvs"),
            s7_make_typed_function(sc, "getenvs", getenvs, 0, 0, false, "(getenvs) returns all the environment variables in an alist", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ftruncate"),
            s7_make_typed_function(sc, "ftruncate", s7_dl_ftruncate, 2, 0, false, "int ftruncate(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "truncate"),
            s7_make_typed_function(sc, "truncate", s7_dl_truncate, 2, 0, false, "int truncate(char* int)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getlogin"),
            s7_make_typed_function(sc, "getlogin", s7_dl_getlogin, 0, 0, false, "char* getlogin(void)", pl_st));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcsetpgrp"),
            s7_make_typed_function(sc, "tcsetpgrp", s7_dl_tcsetpgrp, 2, 0, false, "int tcsetpgrp(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tcgetpgrp"),
            s7_make_typed_function(sc, "tcgetpgrp", s7_dl_tcgetpgrp, 1, 0, false, "int tcgetpgrp(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rmdir"),
            s7_make_typed_function(sc, "rmdir", s7_dl_rmdir, 1, 0, false, "int rmdir(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "unlink"),
            s7_make_typed_function(sc, "unlink", s7_dl_unlink, 1, 0, false, "int unlink(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "link"),
            s7_make_typed_function(sc, "link", s7_dl_link, 2, 0, false, "int link(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isatty"),
            s7_make_typed_function(sc, "isatty", s7_dl_isatty, 1, 0, false, "int isatty(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ttyname"),
            s7_make_typed_function(sc, "ttyname", s7_dl_ttyname, 1, 0, false, "char* ttyname(int)", pl_si));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fork"),
            s7_make_typed_function(sc, "fork", s7_dl_fork, 0, 0, false, "int fork(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setgid"),
            s7_make_typed_function(sc, "setgid", s7_dl_setgid, 1, 0, false, "int setgid(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setuid"),
            s7_make_typed_function(sc, "setuid", s7_dl_setuid, 1, 0, false, "int setuid(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getegid"),
            s7_make_typed_function(sc, "getegid", s7_dl_getegid, 0, 0, false, "int getegid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getgid"),
            s7_make_typed_function(sc, "getgid", s7_dl_getgid, 0, 0, false, "int getgid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "geteuid"),
            s7_make_typed_function(sc, "geteuid", s7_dl_geteuid, 0, 0, false, "int geteuid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getuid"),
            s7_make_typed_function(sc, "getuid", s7_dl_getuid, 0, 0, false, "int getuid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getsid"),
            s7_make_typed_function(sc, "getsid", s7_dl_getsid, 1, 0, false, "int getsid(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setsid"),
            s7_make_typed_function(sc, "setsid", s7_dl_setsid, 0, 0, false, "int setsid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setpgid"),
            s7_make_typed_function(sc, "setpgid", s7_dl_setpgid, 2, 0, false, "int setpgid(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpgid"),
            s7_make_typed_function(sc, "getpgid", s7_dl_getpgid, 1, 0, false, "int getpgid(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getppid"),
            s7_make_typed_function(sc, "getppid", s7_dl_getppid, 0, 0, false, "int getppid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getpid"),
            s7_make_typed_function(sc, "getpid", s7_dl_getpid, 0, 0, false, "int getpid(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "confstr"),
            s7_make_typed_function(sc, "confstr", s7_dl_confstr, 3, 0, false, "size_t confstr(int char* size_t)", pl_iisi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sysconf"),
            s7_make_typed_function(sc, "sysconf", s7_dl_sysconf, 1, 0, false, "int sysconf(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fpathconf"),
            s7_make_typed_function(sc, "fpathconf", s7_dl_fpathconf, 2, 0, false, "int fpathconf(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "pathconf"),
            s7_make_typed_function(sc, "pathconf", s7_dl_pathconf, 2, 0, false, "int pathconf(char* int)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "_exit"),
            s7_make_typed_function(sc, "_exit", s7_dl__exit, 1, 0, false, "void _exit(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "dup2"),
            s7_make_typed_function(sc, "dup2", s7_dl_dup2, 2, 0, false, "int dup2(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "dup"),
            s7_make_typed_function(sc, "dup", s7_dl_dup, 1, 0, false, "int dup(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getcwd"),
            s7_make_typed_function(sc, "getcwd", s7_dl_getcwd, 2, 0, false, "char* getcwd(char* size_t)", pl_ssi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "chdir"),
            s7_make_typed_function(sc, "chdir", s7_dl_chdir, 1, 0, false, "int chdir(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "chown"),
            s7_make_typed_function(sc, "chown", s7_dl_chown, 3, 0, false, "int chown(char* int int)", pcl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "pause"),
            s7_make_typed_function(sc, "pause", s7_dl_pause, 0, 0, false, "int pause(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "sleep"),
            s7_make_typed_function(sc, "sleep", s7_dl_sleep, 1, 0, false, "int sleep(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "alarm"),
            s7_make_typed_function(sc, "alarm", s7_dl_alarm, 1, 0, false, "int alarm(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "pipe"),
            s7_make_typed_function(sc, "pipe", s7_dl_pipe, 1, 0, false, "int pipe(int*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "pwrite"),
            s7_make_typed_function(sc, "pwrite", s7_dl_pwrite, 4, 0, false, "ssize_t pwrite(int void* size_t int)", pcl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "pread"),
            s7_make_typed_function(sc, "pread", s7_dl_pread, 4, 0, false, "ssize_t pread(int void* size_t int)", pcl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "write"),
            s7_make_typed_function(sc, "write", s7_dl_write, 3, 0, false, "ssize_t write(int void* size_t)", pl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "read"),
            s7_make_typed_function(sc, "read", s7_dl_read, 3, 0, false, "ssize_t read(int void* size_t)", pl_iixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "close"),
            s7_make_typed_function(sc, "close", s7_dl_close, 1, 0, false, "int close(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "lseek"),
            s7_make_typed_function(sc, "lseek", s7_dl_lseek, 3, 0, false, "int lseek(int int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "access"),
            s7_make_typed_function(sc, "access", s7_dl_access, 2, 0, false, "int access(char* int)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "uname"),
            s7_make_typed_function(sc, "uname", g_uname, 0, 0, false, "uname", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "localeconv"),
            s7_make_typed_function(sc, "localeconv", g_localeconv, 0, 0, false, "localeconv", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setlocale"),
            s7_make_typed_function(sc, "setlocale", s7_dl_setlocale, 2, 0, false, "char* setlocale(int char*)", pl_sis));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "set_errno"),
            s7_make_typed_function(sc, "set_errno", g_set_errno, 1, 0, false, "set_errno", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "errno"),
            s7_make_typed_function(sc, "errno", g_errno, 0, 0, false, "errno", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "realpath"),
            s7_make_typed_function(sc, "realpath", g_realpath, 2, 0, false, "realpath", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ldiv"),
            s7_make_typed_function(sc, "ldiv", g_ldiv, 1, 0, false, "ldiv", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "div"),
            s7_make_typed_function(sc, "div", g_div, 1, 0, false, "div", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strtoll"),
            s7_make_typed_function(sc, "strtoll", g_strtoll, 2, 0, false, "strtoll", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strtol"),
            s7_make_typed_function(sc, "strtol", g_strtol, 2, 0, false, "strtol", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strtof"),
            s7_make_typed_function(sc, "strtof", g_strtof, 1, 0, false, "strtof", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strtod"),
            s7_make_typed_function(sc, "strtod", g_strtod, 1, 0, false, "strtod", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "free"),
            s7_make_typed_function(sc, "free", g_free, 1, 0, false, "free", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "llabs"),
            s7_make_typed_function(sc, "llabs", g_llabs, 1, 0, false, "llabs", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "labs"),
            s7_make_typed_function(sc, "labs", s7_dl_labs, 1, 0, false, "int labs(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "abs"),
            s7_make_typed_function(sc, "abs", s7_dl_abs, 1, 0, false, "int abs(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "system"),
            s7_make_typed_function(sc, "system", s7_dl_system, 1, 0, false, "int system(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "mkstemp"),
            s7_make_typed_function(sc, "mkstemp", s7_dl_mkstemp, 1, 0, false, "int mkstemp(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "unsetenv"),
            s7_make_typed_function(sc, "unsetenv", s7_dl_unsetenv, 1, 0, false, "int unsetenv(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setenv"),
            s7_make_typed_function(sc, "setenv", s7_dl_setenv, 3, 0, false, "int setenv(char* char* int)", pl_issi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "putenv"),
            s7_make_typed_function(sc, "putenv", s7_dl_putenv, 1, 0, false, "int putenv(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getenv"),
            s7_make_typed_function(sc, "getenv", s7_dl_getenv, 1, 0, false, "char* getenv(char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "exit"),
            s7_make_typed_function(sc, "exit", s7_dl_exit, 1, 0, false, "void exit(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "abort"),
            s7_make_typed_function(sc, "abort", s7_dl_abort, 0, 0, false, "void abort(void)", pcl_t));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "realloc"),
            s7_make_typed_function(sc, "realloc", s7_dl_realloc, 2, 0, false, "void* realloc(void* size_t)", pl_xxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "calloc"),
            s7_make_typed_function(sc, "calloc", s7_dl_calloc, 2, 0, false, "void* calloc(size_t size_t)", pcl_xi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "malloc"),
            s7_make_typed_function(sc, "malloc", s7_dl_malloc, 1, 0, false, "void* malloc(size_t)", pl_xi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "srand"),
            s7_make_typed_function(sc, "srand", s7_dl_srand, 1, 0, false, "void srand(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rand"),
            s7_make_typed_function(sc, "rand", s7_dl_rand, 0, 0, false, "int rand(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setstate"),
            s7_make_typed_function(sc, "setstate", s7_dl_setstate, 1, 0, false, "char* setstate(char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "initstate"),
            s7_make_typed_function(sc, "initstate", s7_dl_initstate, 3, 0, false, "char* initstate(int char* size_t)", pl_sisi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "srandom"),
            s7_make_typed_function(sc, "srandom", s7_dl_srandom, 1, 0, false, "void srandom(int)", pl_ti));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "random"),
            s7_make_typed_function(sc, "random", s7_dl_random, 0, 0, false, "int random(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "atoll"),
            s7_make_typed_function(sc, "atoll", s7_dl_atoll, 1, 0, false, "int atoll(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "atol"),
            s7_make_typed_function(sc, "atol", s7_dl_atol, 1, 0, false, "int atol(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "atoi"),
            s7_make_typed_function(sc, "atoi", s7_dl_atoi, 1, 0, false, "int atoi(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "atof"),
            s7_make_typed_function(sc, "atof", s7_dl_atof, 1, 0, false, "double atof(char*)", pl_ds));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "funlockfile"),
            s7_make_typed_function(sc, "funlockfile", s7_dl_funlockfile, 1, 0, false, "void funlockfile(FILE*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ftrylockfile"),
            s7_make_typed_function(sc, "ftrylockfile", s7_dl_ftrylockfile, 1, 0, false, "int ftrylockfile(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "flockfile"),
            s7_make_typed_function(sc, "flockfile", s7_dl_flockfile, 1, 0, false, "void flockfile(FILE*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ctermid"),
            s7_make_typed_function(sc, "ctermid", s7_dl_ctermid, 1, 0, false, "char* ctermid(char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "pclose"),
            s7_make_typed_function(sc, "pclose", s7_dl_pclose, 1, 0, false, "int pclose(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "popen"),
            s7_make_typed_function(sc, "popen", s7_dl_popen, 2, 0, false, "FILE* popen(char* char*)", pcl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fileno"),
            s7_make_typed_function(sc, "fileno", s7_dl_fileno, 1, 0, false, "int fileno(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "perror"),
            s7_make_typed_function(sc, "perror", s7_dl_perror, 1, 0, false, "void perror(char*)", pl_ts));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ferror"),
            s7_make_typed_function(sc, "ferror", s7_dl_ferror, 1, 0, false, "int ferror(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "feof"),
            s7_make_typed_function(sc, "feof", s7_dl_feof, 1, 0, false, "int feof(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "clearerr"),
            s7_make_typed_function(sc, "clearerr", s7_dl_clearerr, 1, 0, false, "void clearerr(FILE*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fsetpos"),
            s7_make_typed_function(sc, "fsetpos", s7_dl_fsetpos, 2, 0, false, "int fsetpos(FILE* fpos_t*)", pcl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fgetpos"),
            s7_make_typed_function(sc, "fgetpos", s7_dl_fgetpos, 2, 0, false, "int fgetpos(FILE* fpos_t*)", pcl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rewind"),
            s7_make_typed_function(sc, "rewind", s7_dl_rewind, 1, 0, false, "void rewind(FILE*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ftell"),
            s7_make_typed_function(sc, "ftell", s7_dl_ftell, 1, 0, false, "int ftell(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fseek"),
            s7_make_typed_function(sc, "fseek", s7_dl_fseek, 3, 0, false, "int fseek(FILE* int int)", pcl_ixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fwrite"),
            s7_make_typed_function(sc, "fwrite", s7_dl_fwrite, 4, 0, false, "size_t fwrite(void* size_t size_t FILE*)", pl_ixiix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fread"),
            s7_make_typed_function(sc, "fread", s7_dl_fread, 4, 0, false, "size_t fread(void* size_t size_t FILE*)", pl_ixiix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ungetc"),
            s7_make_typed_function(sc, "ungetc", s7_dl_ungetc, 2, 0, false, "int ungetc(int FILE*)", pl_iix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "puts"),
            s7_make_typed_function(sc, "puts", s7_dl_puts, 1, 0, false, "int puts(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fputs"),
            s7_make_typed_function(sc, "fputs", s7_dl_fputs, 2, 0, false, "int fputs(char* FILE*)", pl_isx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fgets"),
            s7_make_typed_function(sc, "fgets", s7_dl_fgets, 3, 0, false, "char* fgets(char* int FILE*)", pl_ssix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "putchar"),
            s7_make_typed_function(sc, "putchar", s7_dl_putchar, 1, 0, false, "int putchar(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "putc"),
            s7_make_typed_function(sc, "putc", s7_dl_putc, 2, 0, false, "int putc(int FILE*)", pl_iix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fputc"),
            s7_make_typed_function(sc, "fputc", s7_dl_fputc, 2, 0, false, "int fputc(int FILE*)", pl_iix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getchar"),
            s7_make_typed_function(sc, "getchar", s7_dl_getchar, 0, 0, false, "int getchar(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "getc"),
            s7_make_typed_function(sc, "getc", s7_dl_getc, 1, 0, false, "int getc(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fgetc"),
            s7_make_typed_function(sc, "fgetc", s7_dl_fgetc, 1, 0, false, "int fgetc(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setlinebuf"),
            s7_make_typed_function(sc, "setlinebuf", s7_dl_setlinebuf, 1, 0, false, "void setlinebuf(FILE*)", pl_tx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setvbuf"),
            s7_make_typed_function(sc, "setvbuf", s7_dl_setvbuf, 4, 0, false, "int setvbuf(FILE* char* int size_t)", pcl_ixsi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "setbuf"),
            s7_make_typed_function(sc, "setbuf", s7_dl_setbuf, 2, 0, false, "void setbuf(FILE* char*)", pl_txs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fdopen"),
            s7_make_typed_function(sc, "fdopen", s7_dl_fdopen, 2, 0, false, "FILE* fdopen(int char*)", pl_xis));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "freopen"),
            s7_make_typed_function(sc, "freopen", s7_dl_freopen, 3, 0, false, "FILE* freopen(char* char* FILE*)", pl_xssx));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fopen"),
            s7_make_typed_function(sc, "fopen", s7_dl_fopen, 2, 0, false, "FILE* fopen(char* char*)", pcl_xs));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fflush"),
            s7_make_typed_function(sc, "fflush", s7_dl_fflush, 1, 0, false, "int fflush(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fclose"),
            s7_make_typed_function(sc, "fclose", s7_dl_fclose, 1, 0, false, "int fclose(FILE*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tmpfile"),
            s7_make_typed_function(sc, "tmpfile", s7_dl_tmpfile, 0, 0, false, "FILE* tmpfile(void)", pl_xt));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "rename"),
            s7_make_typed_function(sc, "rename", s7_dl_rename, 2, 0, false, "int rename(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "remove"),
            s7_make_typed_function(sc, "remove", s7_dl_remove, 1, 0, false, "int remove(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strncasecmp"),
            s7_make_typed_function(sc, "strncasecmp", s7_dl_strncasecmp, 3, 0, false, "int strncasecmp(char* char* size_t)", pl_issi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strcasecmp"),
            s7_make_typed_function(sc, "strcasecmp", s7_dl_strcasecmp, 2, 0, false, "int strcasecmp(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strerror"),
            s7_make_typed_function(sc, "strerror", s7_dl_strerror, 1, 0, false, "char* strerror(int)", pl_si));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strnlen"),
            s7_make_typed_function(sc, "strnlen", s7_dl_strnlen, 2, 0, false, "size_t strnlen(char* size_t)", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strlen"),
            s7_make_typed_function(sc, "strlen", s7_dl_strlen, 1, 0, false, "size_t strlen(char*)", pl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strtok"),
            s7_make_typed_function(sc, "strtok", s7_dl_strtok, 2, 0, false, "char* strtok(char* char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strstr"),
            s7_make_typed_function(sc, "strstr", s7_dl_strstr, 2, 0, false, "char* strstr(char* char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strpbrk"),
            s7_make_typed_function(sc, "strpbrk", s7_dl_strpbrk, 2, 0, false, "char* strpbrk(char* char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strspn"),
            s7_make_typed_function(sc, "strspn", s7_dl_strspn, 2, 0, false, "size_t strspn(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strcspn"),
            s7_make_typed_function(sc, "strcspn", s7_dl_strcspn, 2, 0, false, "size_t strcspn(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strrchr"),
            s7_make_typed_function(sc, "strrchr", s7_dl_strrchr, 2, 0, false, "char* strrchr(char* int)", pl_ssi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strchr"),
            s7_make_typed_function(sc, "strchr", s7_dl_strchr, 2, 0, false, "char* strchr(char* int)", pl_ssi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strxfrm"),
            s7_make_typed_function(sc, "strxfrm", s7_dl_strxfrm, 3, 0, false, "size_t strxfrm(char* char* size_t)", pl_issi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strcoll"),
            s7_make_typed_function(sc, "strcoll", s7_dl_strcoll, 2, 0, false, "int strcoll(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strncmp"),
            s7_make_typed_function(sc, "strncmp", s7_dl_strncmp, 3, 0, false, "int strncmp(char* char* size_t)", pl_issi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strcmp"),
            s7_make_typed_function(sc, "strcmp", s7_dl_strcmp, 2, 0, false, "int strcmp(char* char*)", pcl_is));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strncat"),
            s7_make_typed_function(sc, "strncat", s7_dl_strncat, 3, 0, false, "char* strncat(char* char* size_t)", pl_sssi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strcat"),
            s7_make_typed_function(sc, "strcat", s7_dl_strcat, 2, 0, false, "char* strcat(char* char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strncpy"),
            s7_make_typed_function(sc, "strncpy", s7_dl_strncpy, 3, 0, false, "char* strncpy(char* char* size_t)", pl_sssi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "strcpy"),
            s7_make_typed_function(sc, "strcpy", s7_dl_strcpy, 2, 0, false, "char* strcpy(char* char*)", pcl_s));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "memchr"),
            s7_make_typed_function(sc, "memchr", s7_dl_memchr, 3, 0, false, "void* memchr(void* int size_t)", pcl_xxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "memcmp"),
            s7_make_typed_function(sc, "memcmp", s7_dl_memcmp, 3, 0, false, "int memcmp(void* void* size_t)", pl_ixxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "memset"),
            s7_make_typed_function(sc, "memset", s7_dl_memset, 3, 0, false, "void* memset(void* int size_t)", pcl_xxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "memmove"),
            s7_make_typed_function(sc, "memmove", s7_dl_memmove, 3, 0, false, "void* memmove(void* void* size_t)", pl_xxxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "memcpy"),
            s7_make_typed_function(sc, "memcpy", s7_dl_memcpy, 3, 0, false, "void* memcpy(void* void* size_t)", pl_xxxi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fnmatch"),
            s7_make_typed_function(sc, "fnmatch", s7_dl_fnmatch, 3, 0, false, "int fnmatch(char* char* int)", pl_issi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fenv_t.make"),
            s7_make_typed_function(sc, "fenv_t.make", g_fenv_t_make, 0, 0, false, "fenv_t.make", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "feupdateenv"),
            s7_make_typed_function(sc, "feupdateenv", s7_dl_feupdateenv, 1, 0, false, "int feupdateenv(fenv_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fesetenv"),
            s7_make_typed_function(sc, "fesetenv", s7_dl_fesetenv, 1, 0, false, "int fesetenv(fenv_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "feholdexcept"),
            s7_make_typed_function(sc, "feholdexcept", s7_dl_feholdexcept, 1, 0, false, "int feholdexcept(fenv_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fegetenv"),
            s7_make_typed_function(sc, "fegetenv", s7_dl_fegetenv, 1, 0, false, "int fegetenv(fenv_t*)", pl_ix));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fesetround"),
            s7_make_typed_function(sc, "fesetround", s7_dl_fesetround, 1, 0, false, "int fesetround(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fegetround"),
            s7_make_typed_function(sc, "fegetround", s7_dl_fegetround, 0, 0, false, "int fegetround(void)", pl_it));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fetestexcept"),
            s7_make_typed_function(sc, "fetestexcept", s7_dl_fetestexcept, 1, 0, false, "int fetestexcept(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fesetexceptflag"),
            s7_make_typed_function(sc, "fesetexceptflag", s7_dl_fesetexceptflag, 2, 0, false, "int fesetexceptflag(fexcept_t* int)", pl_ixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "feraiseexcept"),
            s7_make_typed_function(sc, "feraiseexcept", s7_dl_feraiseexcept, 1, 0, false, "int feraiseexcept(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fegetexceptflag"),
            s7_make_typed_function(sc, "fegetexceptflag", s7_dl_fegetexceptflag, 2, 0, false, "int fegetexceptflag(fexcept_t* int)", pl_ixi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "feclearexcept"),
            s7_make_typed_function(sc, "feclearexcept", s7_dl_feclearexcept, 1, 0, false, "int feclearexcept(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "posix_fallocate"),
            s7_make_typed_function(sc, "posix_fallocate", s7_dl_posix_fallocate, 3, 0, false, "int posix_fallocate(int int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "posix_fadvise"),
            s7_make_typed_function(sc, "posix_fadvise", s7_dl_posix_fadvise, 4, 0, false, "int posix_fadvise(int int int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "lockf"),
            s7_make_typed_function(sc, "lockf", s7_dl_lockf, 3, 0, false, "int lockf(int int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "creat"),
            s7_make_typed_function(sc, "creat", s7_dl_creat, 2, 0, false, "int creat(char* (mode_t int))", pl_isi));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "open"),
            s7_make_typed_function(sc, "open", g_c_open, 2, 1, false, "open", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "fcntl"),
            s7_make_typed_function(sc, "fcntl", s7_dl_fcntl, 2, 0, false, "int fcntl(int int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "toupper"),
            s7_make_typed_function(sc, "toupper", s7_dl_toupper, 1, 0, false, "int toupper(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "tolower"),
            s7_make_typed_function(sc, "tolower", s7_dl_tolower, 1, 0, false, "int tolower(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isxdigit"),
            s7_make_typed_function(sc, "isxdigit", s7_dl_isxdigit, 1, 0, false, "int isxdigit(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isupper"),
            s7_make_typed_function(sc, "isupper", s7_dl_isupper, 1, 0, false, "int isupper(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isspace"),
            s7_make_typed_function(sc, "isspace", s7_dl_isspace, 1, 0, false, "int isspace(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "ispunct"),
            s7_make_typed_function(sc, "ispunct", s7_dl_ispunct, 1, 0, false, "int ispunct(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isprint"),
            s7_make_typed_function(sc, "isprint", s7_dl_isprint, 1, 0, false, "int isprint(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isgraph"),
            s7_make_typed_function(sc, "isgraph", s7_dl_isgraph, 1, 0, false, "int isgraph(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "islower"),
            s7_make_typed_function(sc, "islower", s7_dl_islower, 1, 0, false, "int islower(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isdigit"),
            s7_make_typed_function(sc, "isdigit", s7_dl_isdigit, 1, 0, false, "int isdigit(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "iscntrl"),
            s7_make_typed_function(sc, "iscntrl", s7_dl_iscntrl, 1, 0, false, "int iscntrl(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isalpha"),
            s7_make_typed_function(sc, "isalpha", s7_dl_isalpha, 1, 0, false, "int isalpha(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "isalnum"),
            s7_make_typed_function(sc, "isalnum", s7_dl_isalnum, 1, 0, false, "int isalnum(int)", pcl_i));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "string->c-pointer"),
            s7_make_typed_function(sc, "string->c-pointer", g_string_to_c_pointer, 1, 0, false, "string->c-pointer", NULL));

  s7_define(sc, cur_env,
            s7_make_symbol(sc, "c-pointer->string"),
            s7_make_typed_function(sc, "c-pointer->string", g_c_pointer_to_string, 2, 0, false, "c-pointer->string", NULL));

  /* int optimizer connections */
  s7_set_i_ii_function(s7_name_to_value(sc, "shutdown"), shutdown_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "listen"), listen_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "getpriority"), getpriority_i_ii);
  s7_set_i_i_function(s7_name_to_value(sc, "raise"), raise_i_i);
  s7_set_i_ii_function(s7_name_to_value(sc, "kill"), kill_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "tcflow"), tcflow_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "tcflush"), tcflush_i_ii);
  s7_set_i_i_function(s7_name_to_value(sc, "tcdrain"), tcdrain_i_i);
  s7_set_i_ii_function(s7_name_to_value(sc, "tcsendbreak"), tcsendbreak_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "ftruncate"), ftruncate_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "tcsetpgrp"), tcsetpgrp_i_ii);
  s7_set_i_i_function(s7_name_to_value(sc, "tcgetpgrp"), tcgetpgrp_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isatty"), isatty_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "setgid"), setgid_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "setuid"), setuid_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "getsid"), getsid_i_i);
  s7_set_i_ii_function(s7_name_to_value(sc, "setpgid"), setpgid_i_ii);
  s7_set_i_i_function(s7_name_to_value(sc, "getpgid"), getpgid_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "sysconf"), sysconf_i_i);
  s7_set_i_ii_function(s7_name_to_value(sc, "fpathconf"), fpathconf_i_ii);
  s7_set_i_ii_function(s7_name_to_value(sc, "dup2"), dup2_i_ii);
  s7_set_i_i_function(s7_name_to_value(sc, "dup"), dup_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "sleep"), sleep_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "alarm"), alarm_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "close"), close_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "labs"), labs_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "abs"), abs_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "putchar"), putchar_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "fesetround"), fesetround_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "fetestexcept"), fetestexcept_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "feraiseexcept"), feraiseexcept_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "feclearexcept"), feclearexcept_i_i);
  s7_set_i_ii_function(s7_name_to_value(sc, "fcntl"), fcntl_i_ii);
  s7_set_i_i_function(s7_name_to_value(sc, "toupper"), toupper_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "tolower"), tolower_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isxdigit"), isxdigit_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isupper"), isupper_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isspace"), isspace_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "ispunct"), ispunct_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isprint"), isprint_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isgraph"), isgraph_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "islower"), islower_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isdigit"), isdigit_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "iscntrl"), iscntrl_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isalpha"), isalpha_i_i);
  s7_set_i_i_function(s7_name_to_value(sc, "isalnum"), isalnum_i_i);
}
