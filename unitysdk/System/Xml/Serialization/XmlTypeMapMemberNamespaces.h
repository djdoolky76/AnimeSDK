#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERNAMESPACES_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF110A0)

namespace System::Xml::Serialization
{
	class XmlTypeMapMemberNamespaces : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERNAMESPACES_CTOR_OFFSET))(this);
		}

	};
}
