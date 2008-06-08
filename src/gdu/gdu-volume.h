/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*- */
/* gdu-volume.h
 *
 * Copyright (C) 2007 David Zeuthen
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#if !defined (GNOME_DISK_UTILITY_INSIDE_GDU_H) && !defined (GDU_COMPILATION)
#error "Only <gdu/gdu.h> can be included directly, this file may disappear or change contents."
#endif

#ifndef GDU_VOLUME_H
#define GDU_VOLUME_H

#include <gdu/gdu-device.h>

#define GDU_TYPE_VOLUME             (gdu_volume_get_type ())
#define GDU_VOLUME(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), GDU_TYPE_VOLUME, GduVolume))
#define GDU_VOLUME_CLASS(obj)       (G_TYPE_CHECK_CLASS_CAST ((obj), GDU_VOLUME,  GduVolumeClass))
#define GDU_IS_VOLUME(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GDU_TYPE_VOLUME))
#define GDU_IS_VOLUME_CLASS(obj)    (G_TYPE_CHECK_CLASS_TYPE ((obj), GDU_TYPE_VOLUME))
#define GDU_VOLUME_GET_CLASS        (G_TYPE_INSTANCE_GET_CLASS ((obj), GDU_TYPE_VOLUME, GduVolumeClass))

typedef struct _GduVolumeClass       GduVolumeClass;
typedef struct _GduVolume            GduVolume;

struct _GduVolumePrivate;
typedef struct _GduVolumePrivate     GduVolumePrivate;

struct _GduVolume
{
        GObject parent;

        /* private */
        GduVolumePrivate *priv;
};

struct _GduVolumeClass
{
        GObjectClass parent_class;
};

GType        gdu_volume_get_type              (void);

#endif /* GDU_VOLUME_H */
