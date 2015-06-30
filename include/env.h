#pragma once
/*
 * WARNING: Auto-generated file from env.h.in
 *
 * This file is part of the libCEC(R) library.
 *
 * libCEC(R) is Copyright (C) 2011-2015 Pulse-Eight Limited.  All rights reserved.
 * libCEC(R) is an original work, containing original code.
 *
 * libCEC(R) is a trademark of Pulse-Eight Limited.
 *
 * This program is dual-licensed; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *
 * Alternatively, you can license this library under a commercial license,
 * please contact Pulse-Eight Licensing for more information.
 *
 * For more information contact:
 * Pulse-Eight Licensing       <license@pulse-eight.com>
 *     http://www.pulse-eight.com/
 *     http://www.pulse-eight.net/
 */

#include "cectypes.h"
#include "platform/os.h"

#ifdef UNUSED
#elif defined(__GNUC__)
#define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
#define UNUSED(x) /*@unused@*/ x
#else
#define UNUSED(x) x
#endif

/* Define to 1 for xrandr support */
//#cmakedefine HAVE_RANDR @HAVE_RANDR@

/* Define to 1 for lockdev support */
//#cmakedefine HAVE_LOCKDEV @HAVE_LOCKDEV@

/* Define to 1 for udev support */
//#cmakedefine HAVE_LIBUDEV @HAVE_LIBUDEV@

/* Define to 1 for Pulse-Eight CEC Adapter detection support */
//#cmakedefine HAVE_P8_USB_DETECT @HAVE_P8_USB_DETECT@

/* Define to 1 for Raspberry Pi support */
//#cmakedefine HAVE_RPI_API @HAVE_RPI_API@

/* Define to 1 for TDA995x support */
//#cmakedefine HAVE_TDA995X_API @HAVE_TDA995X_API@

/* Define to 1 for Exynos support */
//#cmakedefine HAVE_TDA995X_API @HAVE_TDA995X_API@

/* Define to 1 for nVidia EDID parsing support (on selected models) */
//#cmakedefine HAVE_NVIDIA_EDID_PARSER @HAVE_NVIDIA_EDID_PARSER@

/* Define to 1 for Python support */
//#cmakedefine HAVE_PYTHON @HAVE_PYTHON@

/* information about how libCEC was compiled */
#define LIB_INFO ("@LIB_INFO@")
