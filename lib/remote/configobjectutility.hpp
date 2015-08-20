/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012-2015 Icinga Development Team (http://www.icinga.org)    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef CONFIGOBJECTUTILITY_H
#define CONFIGOBJECTUTILITY_H

#include "remote/i2-remote.hpp"
#include "base/array.hpp"
#include "base/configobject.hpp"
#include "base/dictionary.hpp"
#include "base/type.hpp"

namespace icinga
{

/**
 * Helper functions.
 *
 * @ingroup remote
 */
class I2_REMOTE_API ConfigObjectUtility
{

public:
	static String GetConfigDir(void);
	
	static bool CreateObject(const Type::Ptr& type, const String& fullName,
	    const Array::Ptr& templates, const Dictionary::Ptr& attrs,
	    const Array::Ptr& errors);
	    
	static bool DeleteObject(const ConfigObject::Ptr& object, const Array::Ptr& errors);
	
private:
	static String EscapeName(const String& name);
};

}

#endif /* CONFIGOBJECTUTILITY_H */