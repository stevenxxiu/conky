/* Conky, a system monitor, based on torsmo
 *
 * Copyright (c) 2009 Toni Spets
 * Copyright (c) 2005-2009 Brenden Matthews, Philip Kovacs, et. al.
 *	(see AUTHORS)
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LUA_H_
#define LUA_H_

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

/* initialize lua stuff */
void llua_init(void);
/* load a lua script */
void llua_load(const char *script);
/* call a function with args, and return a string from it (must be free'd) */
char *llua_getstring(const char *args);
/* call a function with args, and return a string from it (must be free'd) */
char *llua_getstring_read(const char *function, const char *arg);
/* call a function with args, and put the result in ret */
int llua_getnumber(const char *args, double *ret);
/* close lua stuff */
void llua_close(void);
#ifdef HAVE_SYS_INOTIFY_H
/* check our lua inotify status */
void llua_inotify_query(int wd, int mask);
#endif /* HAVE_SYS_INOTIFY_H */

#endif /* LUA_H_*/
