#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLNAMETABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7AF30)

namespace System::Xml
{
	class XmlNameTable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE_CTOR_OFFSET))(this);
		}

	};
}
