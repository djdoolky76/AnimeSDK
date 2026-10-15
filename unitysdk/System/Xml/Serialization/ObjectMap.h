#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SERIALIZATION_OBJECTMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF6BD0)

namespace System::Xml::Serialization
{
	class ObjectMap : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_OBJECTMAP_CTOR_OFFSET))(this);
		}

	};
}
