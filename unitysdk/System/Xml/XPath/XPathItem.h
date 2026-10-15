#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_XML_XPATH_XPATHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3FB70)
#define SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1EF3FAE0)

namespace System::Xml::XPath
{
	class XPathItem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_CTOR_OFFSET))(this);
		}

		::System::Object* ValueAs(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET))(this, a1);
		}

	};
}
