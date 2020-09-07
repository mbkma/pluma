/*
 * pluma-window-activatable.h
 * This file is part of pluma
 *
 * Copyright (C) 2010 - Steve Frécinaux
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Library General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLUMA_WINDOW_ACTIVATABLE_H
#define PLUMA_WINDOW_ACTIVATABLE_H

#include <glib-object.h>

G_BEGIN_DECLS

#define PLUMA_TYPE_WINDOW_ACTIVATABLE (pluma_window_activatable_get_type ())

G_DECLARE_INTERFACE (PlumaWindowActivatable, pluma_window_activatable, PLUMA, WINDOW_ACTIVATABLE, GObject)

struct _PlumaWindowActivatableInterface
{
	GTypeInterface g_iface;

	/* Virtual public methods */
	void	(*activate)		(PlumaWindowActivatable *activatable);
	void	(*deactivate)		(PlumaWindowActivatable *activatable);
	void	(*update_state)		(PlumaWindowActivatable *activatable);
};

void	 pluma_window_activatable_activate	(PlumaWindowActivatable *activatable);
void	 pluma_window_activatable_deactivate	(PlumaWindowActivatable *activatable);
void	 pluma_window_activatable_update_state	(PlumaWindowActivatable *activatable);

G_END_DECLS

#endif /* PLUMA_WINDOW_ACTIVATABLE_H */
/* ex:set ts=8 noet: */
