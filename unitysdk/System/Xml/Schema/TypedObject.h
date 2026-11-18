#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"

namespace System { class String; }
namespace System::Xml::Schema { class TypedObject_DecimalStruct; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E303B20)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DVALUE_OFFSET UNITYSDK_OFFSET(0x1E3039E0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E3039C0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_LISTDVALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x1E30E070)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_SETDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E303570)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30E060)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30DE50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int TypedObject_TypeDefinitionIndex = 1955;

	class TypedObject : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaDatatype* xsdtype; // 0x10
		::System::Object* ovalue; // 0x18
		::System::String* svalue; // 0x20
		::System::Xml::Schema::TypedObject_DecimalStruct* dstruct; // 0x28
		::System::Int32 dim; // 0x30
		::System::Boolean isList; // 0x34

		::System::Void _ctor(::System::Object* obj, ::System::String* svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT__CTOR_OFFSET))(this, obj, svalue, xsdtype);
		}

		::System::Boolean get_IsDecimal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISDECIMAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Decimal>* get_Dvalue()
		{
			return ((::Il2CppArray<::System::Decimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DVALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_TOSTRING_OFFSET))(this);
		}

		::System::Void SetDecimal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_SETDECIMAL_OFFSET))(this);
		}

		::System::Boolean ListDValueEquals(::System::Xml::Schema::TypedObject* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::TypedObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_LISTDVALUEEQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals(::System::Xml::Schema::TypedObject* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::TypedObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_EQUALS_OFFSET))(this, other);
		}
	};
}
