#ifndef ENIGMA_CONFIG_H
#define ENIGMA_CONFIG_H

#define HAVE_DIRENT_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_LIBCURL 1
#define HAVE_LIBPNG 1
#define HAVE_LIBSDL_IMAGE 1
#define HAVE_LIBSDL_MIXER 1
#define HAVE_LIBSDL_TTF 1
#define HAVE_LIBXERCES_C 1
#define HAVE_MEMORY_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1

#define PACKAGE_NAME "Enigma"
#define PACKAGE_VERSION "1.21"
#define PACKAGE_STRING "Enigma 1.21"
#define PACKAGE_TARNAME "enigma"
#define PACKAGE_BUGREPORT "enigma-devel@nongnu.org"
#define PACKAGE_URL "http://www.nongnu.org/enigma/"

#define SDL_IMG_INIT 1
#define SDL_MIX_INIT 1
#define STDC_HEADERS 1

#ifndef SYSTEM_DATA_DIR
#define SYSTEM_DATA_DIR "."
#endif
#ifndef DOCDIR
#define DOCDIR "./doc"
#endif
#ifndef LOCALEDIR
#define LOCALEDIR "./locale"
#endif

#endif /* ENIGMA_CONFIG_H */
