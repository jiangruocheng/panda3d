/**
 * @file pandabullet.cxx
 * @author enn0x
 * @date 2011-05-10
 */

#include "pandabullet.h"
#include "config_bullet.h"

// By including checkPandaVersion.h, we guarantee that runtime attempts to
// load libpandabullet.so.dll will fail if they inadvertently link with the
// wrong version of libdtool.so.dll.

#include "checkPandaVersion.h"

/**
 * Initializes the library.  This must be called at least once before any of
 * the functions or classes in this library can be used.  Normally it will be
 * called by the static initializers and need not be called explicitly, but
 * special cases exist.
 */
void
init_libpandabullet() {
  init_libbullet();
}
