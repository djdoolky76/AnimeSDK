#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1EAB3E40)
#define SYSTEM_XML_XPATH_XPATHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB3E60)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathItem_TypeDefinitionIndex = 1845;

	class XPathItem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM__CTOR_OFFSET))(this);
		}

		::System::Object* ValueAs(::System::Type* returnType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET))(this, returnType);
		}
	};
}
