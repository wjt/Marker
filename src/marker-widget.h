/*
 * marker-widget.h
 *
 * Copyright (C) 2017 - 2018 Fabio Colacio
 *
 * Marker is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 *
 * Marker is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with Marker; see the file LICENSE.md. If not,
 * see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __MARKER_WIDGET_H__
#define __MARKER_WIDGET_H__

void                 marker_widget_combo_box_set_string_model    (GtkComboBox        *combo_box,
                                                                  GtkTreeModel       *list);
void                 marker_widget_populate_combo_box_with_strings
                                                                 (GtkComboBox        *combo_box,
                                                                  GList              *list);
char                *marker_widget_combo_box_get_active_str      (GtkComboBox        *combo_box);
void                 marker_widget_combo_box_set_active_str      (GtkComboBox        *combo_box,
                                                                  const char         *str,
                                                                  int                 model_len);

#endif
