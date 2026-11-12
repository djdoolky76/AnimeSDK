#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/SchemaTypes.h"
#include "unitysdk/System/Object.h"
namespace System { class InvalidOperationException; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Xml::Schema { class XmlSchemaPatternFacet; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x201AC510)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CONVERTFORASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x201AB030)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CREATEMISSINGADDMETHODEXCEPTION_OFFSET UNITYSDK_OFFSET(0x201AC300)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201AA430)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x201AA410)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GETGENERICLISTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x201ABD20)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GETINDEXERPROPERTY_OFFSET UNITYSDK_OFFSET(0x201AC0C0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x201AB180)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_HASPUBLICCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x201AC500)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x201AB1A0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISLISTTYPE_OFFSET UNITYSDK_OFFSET(0x201A41D0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x201AB270)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x201AB1D0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISXSDTYPE_OFFSET UNITYSDK_OFFSET(0x201AB1C0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPEDATA_OFFSET UNITYSDK_OFFSET(0x201AACC0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x201AB480)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x201AB190)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x201AB150)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x201AB170)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x201AB160)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_LOOKUPTYPECONVERTOR_OFFSET UNITYSDK_OFFSET(0x201AAEB0)
#define SYSTEM_XML_SERIALIZATION_TYPEDATA_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x201AB470)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeData_TypeDefinitionIndex = 1993;

	class TypeData : public ::System::Object
	{
	public:
		::System::Type* listItemType; // 0x10
		::System::String* fullTypeName; // 0x18
		::System::Xml::Schema::XmlSchemaPatternFacet* facet; // 0x20
		::System::String* typeName; // 0x28
		::System::Reflection::MethodInfo* typeConvertor; // 0x30
		::System::Xml::Serialization::TypeData* listItemTypeData; // 0x38
		::System::Xml::Serialization::TypeData* mappedType; // 0x40
		::System::String* elementName; // 0x48
		::System::Type* type; // 0x50
		::System::Xml::Serialization::SchemaTypes sType; // 0x58
		::System::Boolean nullableOverride; // 0x5C
		::System::Boolean hasPublicConstructor; // 0x5D
		static ::Il2CppArray<::System::String*>** StaticGet_keywords()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Xml.Serialization", "TypeData")->GetStaticField(0x30810);
		}

		::System::Void _ctor(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::String* a2, ::System::Boolean a3, ::System::Xml::Serialization::TypeData* a4, ::System::Xml::Schema::XmlSchemaPatternFacet* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Xml::Serialization::TypeData*, ::System::Xml::Schema::XmlSchemaPatternFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CCTOR_OFFSET))();
		}

		::System::Void LookupTypeConvertor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_LOOKUPTYPECONVERTOR_OFFSET))(this);
		}

		::System::Void ConvertForAssignment(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CONVERTFORASSIGNMENT_OFFSET))(this, a1);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_XmlType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_XMLTYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_FullTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_FULLTYPENAME_OFFSET))(this);
		}

		::System::Xml::Serialization::SchemaTypes get_SchemaType()
		{
			return ((::System::Xml::Serialization::SchemaTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Boolean get_IsListType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISLISTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsComplexType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISCOMPLEXTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISVALUETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void set_IsNullable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_SET_ISNULLABLE_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::TypeData* get_ListItemTypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPEDATA_OFFSET))(this);
		}

		::System::Type* get_ListItemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_LISTITEMTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsXsdType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_ISXSDTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasPublicConstructor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GET_HASPUBLICCONSTRUCTOR_OFFSET))(this);
		}

		static ::System::Reflection::PropertyInfo* GetIndexerProperty(::System::Type* a1)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GETINDEXERPROPERTY_OFFSET))(a1);
		}

		static ::System::InvalidOperationException* CreateMissingAddMethodException(::System::Type* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::InvalidOperationException*(*)(::System::Type*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_CREATEMISSINGADDMETHODEXCEPTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetGenericListItemType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEDATA_GETGENERICLISTITEMTYPE_OFFSET))(a1);
		}

	};
}
