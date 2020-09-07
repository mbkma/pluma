/*
 * pluma-view-activatable.h
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

#ifndef PLUMA_VIEW_ACTIVATABLE_H
#define PLUMA_VIEW_ACTIVATABLE_H

#include <glib-object.h>

G_BEGIN_DECLS

#define PLUMA_TYPE_VIEW_ACTIVATABLE (pluma_view_activatable_get_type ())

G_DECLARE_INTERFACE (PlumaViewActivatable, pluma_view_activatable, PLUMA, VIEW_ACTIVATABLE, GObject)

struct _PlumaViewActivatableInterface
{
	GTypeInterface g_iface;

	/* Virtual public methods */
	void	(*activate)		(PlumaViewActivatable *activatable);
	void	(*deactivate)		(PlumaViewActivatable *activatable);
};

void	 pluma_view_activatable_activate	(PlumaViewActivatable *activatable);
void	 pluma_view_activatable_deactivate	(PlumaViewActivatable *activatable);

G_END_DECLS

#endif /* PLUMA_VIEW_ACTIVATABLE_H */
/* ex:set ts=8 noet: */
