#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SERIALIZATION_XMLMEMBERMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D01F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMemberMapping_TypeDefinitionIndex = 1890;

	class XmlMemberMapping : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERMAPPING__CTOR_OFFSET))(this);
		}
	};
}
