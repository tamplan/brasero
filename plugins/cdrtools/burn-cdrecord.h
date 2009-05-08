/***************************************************************************
 *            cdrecord.h
 *
 *  dim jan 22 15:22:52 2006
 *  Copyright  2006  Rouquier Philippe
 *  brasero-app@wanadoo.fr
 ***************************************************************************/

/*
 *  Brasero is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Brasero is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#ifndef CDRECORD_H
#define CDRECORD_H

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define BRASERO_TYPE_CD_RECORD         (brasero_cdrecord_get_type ())
#define BRASERO_CD_RECORD(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), BRASERO_TYPE_CD_RECORD, BraseroCDRecord))
#define BRASERO_CD_RECORD_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), BRASERO_TYPE_CD_RECORD, BraseroCDRecordClass))
#define BRASERO_IS_CD_RECORD(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), BRASERO_TYPE_CD_RECORD))
#define BRASERO_IS_CD_RECORD_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), BRASERO_TYPE_CD_RECORD))
#define BRASERO_CD_RECORD_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BRASERO_TYPE_CD_RECORD, BraseroCDRecordClass))

G_END_DECLS

#endif /* CDRECORD_H */