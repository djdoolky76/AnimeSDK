#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Xml { class XmlTextReaderImpl_XmlContext; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFA15E0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA15B0)

namespace System::Xml
{
	class XmlTextReaderImpl_XmlContext : public ::System::Object
	{
	public:
		::System::Xml::XmlTextReaderImpl_XmlContext* previousContext; // 0x10
		::System::String* xmlLang; // 0x18
		::System::String* defaultNamespace; // 0x20
		::System::Xml::XmlSpace xmlSpace; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlTextReaderImpl_XmlContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTextReaderImpl_XmlContext*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT_CTOR_1_OFFSET))(this, a1);
		}

	};
}
