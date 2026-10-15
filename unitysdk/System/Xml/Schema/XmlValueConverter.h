#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_XMLVALUECONVERTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EED46D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlValueConverter_TypeDefinitionIndex = 2221;

	class XmlValueConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUECONVERTER_CTOR_OFFSET))(this);
		}

	};
}
