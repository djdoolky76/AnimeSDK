#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/NamespaceResolver.h"
namespace System { class String; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_ELEMENTWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x3E8D510)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x3F91F10)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHANCESTORS_OFFSET UNITYSDK_OFFSET(0x3F91FC0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHELEMENT_OFFSET UNITYSDK_OFFSET(0x3F91FD0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEELEMENT_OFFSET UNITYSDK_OFFSET(0x3F91F00)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x3F91FE0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x3F91FF0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x3F92000)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int ElementWriter_TypeDefinitionIndex = 3898;

	struct alignas(8) ElementWriter
	{
		::System::Xml::XmlWriter* writer; // 0x10
		::System::Xml::Linq::NamespaceResolver resolver; // 0x18
		::System::Void _ctor(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_CTOR_OFFSET))(this, a1);
		}

		::System::Void WriteElement(::System::Xml::Linq::XElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEELEMENT_OFFSET))(this, a1);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::XNamespace*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_GETPREFIXOFNAMESPACE_OFFSET))(this, a1, a2);
		}

		::System::Void PushAncestors(::System::Xml::Linq::XElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHANCESTORS_OFFSET))(this, a1);
		}

		::System::Void PushElement(::System::Xml::Linq::XElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHELEMENT_OFFSET))(this, a1);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::Xml::Linq::XElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1);
		}

	};
}
