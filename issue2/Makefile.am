AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = poleobj
poleobj_SOURCES = main.c
poleobj_DEPENDENCIES = libpoleobj.la
lib_LTLIBRARIES = libpoleobj.la
libpoleobj_la_SOURCES = pole.c obj.c
poleobj_LDADD = "-dlopen" libpoleobj.la
libpoleobj_la_LDFLAGS = -version-info 1:0:0
