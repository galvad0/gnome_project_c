/* gnome_project_c-window.h
 *
 * Copyright 2022 galvad0
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
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GNOME_PROJECT_C_TYPE_WINDOW (gnome_project_c_window_get_type())

G_DECLARE_FINAL_TYPE (GnomeProjectCWindow, gnome_project_c_window, GNOME_PROJECT_C, WINDOW, GtkApplicationWindow)

G_END_DECLS
