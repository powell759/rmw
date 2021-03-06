/*
 * purging_rmw.h
 *
 * This file is part of rmw (https://github.com/andy5995/rmw/wiki)
 *
 *  Copyright (C) 2012-2016  Andy Alt (andy400-dev@yahoo.com)
 *
 * This program is free software; you can redistribute it and/or modify
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#include "rmw.h"
#include "strings_rmw.h"
#include "primary_funcs.h"

#define RMDIR_MAX_DEPTH 32
#define NOT_WRITEABLE 101
#define MAX_DEPTH_REACHED 201

int
rmdir_recursive (char *path, short unsigned level);

int
purge (const short purge_after, const struct waste_containers *waste, char *time_now,
       const int waste_dirs_total);

bool
is_time_to_purge (const char *HOMEDIR, bool force);
