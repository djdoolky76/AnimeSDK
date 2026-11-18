#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLCHILDENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAB4010)
#define SYSTEM_XML_XMLCHILDENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EAB3F10)
#define SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAB3FA0)
#define SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EAB3EB0)
#define SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EAB3F70)
#define SYSTEM_XML_XMLCHILDENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB3E70)

namespace System::Xml
{
	inline static constexpr unsigned int XmlChildEnumerator_TypeDefinitionIndex = 1753;

	class XmlChildEnumerator : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* child; // 0x10
		::System::Xml::XmlNode* container; // 0x18
		::System::Boolean isFirst; // 0x20

		::System::Void _ctor(::System::Xml::XmlNode* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR__CTOR_OFFSET))(this, container);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_Current()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
