#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaAttDef; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_ATTRIBUTECONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F64FE70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_AttributeContent_TypeDefinitionIndex = 2101;

	class XdrBuilder_AttributeContent : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaAttDef* _AttDef; // 0x10
		::System::Object* _Default; // 0x18
		::System::Xml::XmlQualifiedName* _Name; // 0x20
		::System::String* _Prefix; // 0x28
		::System::UInt32 _MaxVal; // 0x30
		::System::UInt32 _MinLength; // 0x34
		::System::Boolean _Global; // 0x38
		::System::Boolean _HasDataType; // 0x39
		::System::Boolean _EnumerationRequired; // 0x3A
		::System::Boolean _Required; // 0x3B
		::System::UInt32 _MinVal; // 0x3C
		::System::UInt32 _MaxLength; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ATTRIBUTECONTENT__CTOR_OFFSET))(this);
		}
	};
}
