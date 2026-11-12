#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x201ACF50)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_FINDPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x201B2CC0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETARRAYNAME_OFFSET UNITYSDK_OFFSET(0x201AAD90)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_1_OFFSET UNITYSDK_OFFSET(0x201B2930)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x201B28D0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_1_OFFSET UNITYSDK_OFFSET(0x201B1200)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x201AA2B0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_PARSEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x201B2E10)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeTranslator_TypeDefinitionIndex = 1995;

	class TypeTranslator : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_nameCache()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Xml.Serialization", "TypeTranslator")->GetStaticField(0x30920);
		}

		static ::System::Collections::Hashtable** StaticGet_primitiveTypes()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Xml.Serialization", "TypeTranslator")->GetStaticField(0x30928);
		}

		static ::System::Collections::Hashtable** StaticGet_nullableTypes()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Xml.Serialization", "TypeTranslator")->GetStaticField(0x30930);
		}

		static ::System::Collections::Hashtable** StaticGet_primitiveArrayTypes()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Xml.Serialization", "TypeTranslator")->GetStaticField(0x30938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_CCTOR_OFFSET))();
		}

		static ::System::Xml::Serialization::TypeData* GetTypeData(::System::Type* a1)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET))(a1);
		}

		static ::System::Xml::Serialization::TypeData* GetTypeData_1(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(::System::String* a1)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET))(a1);
		}

		static ::System::Xml::Serialization::TypeData* GetPrimitiveTypeData_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_1_OFFSET))(a1, a2);
		}

		static ::System::Xml::Serialization::TypeData* FindPrimitiveTypeData(::System::String* a1)
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_FINDPRIMITIVETYPEDATA_OFFSET))(a1);
		}

		static ::System::String* GetArrayName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETARRAYNAME_OFFSET))(a1);
		}

		static ::System::Void ParseArrayType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_PARSEARRAYTYPE_OFFSET))(a1, a2, a3, a4);
		}

	};
}
