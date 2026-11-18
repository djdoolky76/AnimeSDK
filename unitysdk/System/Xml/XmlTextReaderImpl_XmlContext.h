#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D1FD0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D1FA0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_XmlContext_TypeDefinitionIndex = 1722;

	class XmlTextReaderImpl_XmlContext : public ::System::Object
	{
	public:
		::System::String* defaultNamespace; // 0x10
		::System::String* xmlLang; // 0x18
		::System::Xml::XmlTextReaderImpl_XmlContext* previousContext; // 0x20
		::System::Xml::XmlSpace xmlSpace; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlTextReaderImpl_XmlContext* previousContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTextReaderImpl_XmlContext*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_XMLCONTEXT__CTOR_1_OFFSET))(this, previousContext);
		}
	};
}
