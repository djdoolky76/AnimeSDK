#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLNODELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x192C3C00)
#define SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET UNITYSDK_OFFSET(0x192C3BF0)
#define SYSTEM_XML_XMLNODELIST_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192C3B70)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeList_TypeDefinitionIndex = 1917;

	class XmlNodeList : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_CTOR_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void PrivateDisposeNodeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET))(this);
		}

	};
}
