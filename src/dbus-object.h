// Copyright (c) 2006 Nigel Tao.
// Licenced under the GNU General Public Licence (GPL) version 2.

#ifndef SUPERSWITCHER_DBUS_OBJECT_H
#define SUPERSWITCHER_DBUS_OBJECT_H

#include <glib.h>

#include "forward_declarations.h"

#ifdef HAVE_DBUS_GLIB
gboolean    init_superswitcher_dbus   (void);
#endif

#endif
