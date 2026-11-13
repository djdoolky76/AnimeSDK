#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1C65B7C0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1C65BB50)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C65B4C0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C65A8C0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65A8B0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1C65A9C0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C65A910)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x1C65AC60)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_2_OFFSET UNITYSDK_OFFSET(0x1C65AD10)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1C65AC50)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C65B120)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1C65B1B0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C65B090)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlNumeric2Converter_TypeDefinitionIndex = 2224;

	class XmlNumeric2Converter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CREATE_OFFSET))(a1);
		}

		::System::Double ToDouble(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Double ToDouble_1(::System::Object* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_1_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::Double a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Single ToSingle_1(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_1_OFFSET))(this, a1);
		}

		::System::Single ToSingle_2(::System::Object* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_2_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Double a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_2_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType(::System::Double a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_1(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_2(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_2_OFFSET))(this, a1, a2, a3);
		}

	};
}
