#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_CCTOR_OFFSET UNITYSDK_OFFSET(0x20164A50)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_CTOR_OFFSET UNITYSDK_OFFSET(0x2015F550)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x201649F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x20164790)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x20164990)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x201647A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_QNameXdr_TypeDefinitionIndex = 2148;

	class Datatype_QNameXdr : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)UnitySDK::FromName("System.Xml.Schema", "Datatype_QNameXdr")->GetStaticField(0x2C840);
		}

		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)UnitySDK::FromName("System.Xml.Schema", "Datatype_QNameXdr")->GetStaticField(0x2C848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_CCTOR_OFFSET))();
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_LISTVALUETYPE_OFFSET))(this);
		}

	};
}
