/*
 * baobab-prefs.h
 * This file is part of baobab
 *
 * Copyright (C) 2005-2006 Fabio Marzocca  <thesaltydog@gmail.com>
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
 * Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA
 */

#ifndef __BAOBAB_PROPS_H__
#define __BAOBAB_PROPS_H__

/* props model columns */
enum
{
	COL_CHECK,
	COL_DEVICE,
	COL_MOUNT,
	COL_TYPE,
	COL_FS_SIZE,
	COL_FS_AVAIL,
	TOT_COLUMNS
};

void props_notify (GConfClient *client,
		   guint cnxn_id,
		   GConfEntry *entry,
		   gpointer user_data);	

void create_props (void);

#endif /* __BAOBAB_PROPS_H__ */
