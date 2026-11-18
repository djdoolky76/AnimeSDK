#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLNAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D0190)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNameTable_TypeDefinitionIndex = 1831;

	class XmlNameTable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE__CTOR_OFFSET))(this);
		}
	};
}
