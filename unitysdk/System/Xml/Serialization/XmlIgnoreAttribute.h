#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF07390)

namespace System::Xml::Serialization
{
	class XmlIgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
