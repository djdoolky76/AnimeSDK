#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1DA606E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA60B60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DA60D70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_FINDINDEXBYVALUE_OFFSET UNITYSDK_OFFSET(0x1DA60960)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DA60F00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DA60D50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DA60DF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1DA60EA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_INSERT_OFFSET UNITYSDK_OFFSET(0x1DA607A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DA60C00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REPLACE_OFFSET UNITYSDK_OFFSET(0x1DA609C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA60620)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_TypeDefinitionIndex = 2172;

	class XmlSchemaObjectTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* entries; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* table; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_ADD_OFFSET))(this, name, value);
		}

		::System::Void Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_INSERT_OFFSET))(this, name, value);
		}

		::System::Void Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REPLACE_OFFSET))(this, name, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Remove(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REMOVE_OFFSET))(this, name);
		}

		::System::Int32 FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_FINDINDEXBYVALUE_OFFSET))(this, xso);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CONTAINS_OFFSET))(this, name);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_ITEM_OFFSET))(this, name);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_VALUES_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
