#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"
namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEB8F60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EEB8F50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchema_TypeDefinitionIndex = 2183;

	class XmlSchema : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::System::String* id; // 0x10
		static ::System::Int32* StaticGet_globalIdCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XmlSchema")->GetStaticField(0x9DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_CCTOR_OFFSET))();
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ID_OFFSET))(this);
		}

	};
}
