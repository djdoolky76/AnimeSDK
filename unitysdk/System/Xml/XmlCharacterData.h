#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
namespace System { class String; }
namespace System::Xml { class XmlDocument; }

#define SYSTEM_XML_XMLCHARACTERDATA_CHECKONDATA_OFFSET UNITYSDK_OFFSET(0x18A60F10)
#define SYSTEM_XML_XMLCHARACTERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x18A5FC80)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x18A5FF60)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x18A60D20)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18A60C10)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x18A60E30)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x18A60DA0)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18A60C90)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCharacterData_TypeDefinitionIndex = 1894;

	class XmlCharacterData : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* data; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_VALUE_OFFSET))(this, a1);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::String* get_Data()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_DATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckOnData(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_CHECKONDATA_OFFSET))(this, a1);
		}

	};
}
