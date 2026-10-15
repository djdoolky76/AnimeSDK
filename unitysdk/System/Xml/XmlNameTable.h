#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLNAMETABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4D3D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNameTable_TypeDefinitionIndex = 1963;

	class XmlNameTable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE_CTOR_OFFSET))(this);
		}

	};
}
