#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F4F00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CREATEPROPERTIES_B__64_0_OFFSET UNITYSDK_OFFSET(0x1F6F5570)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F4F40)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETATTRIBUTECONSTRUCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1F6F5510)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__37_0_OFFSET UNITYSDK_OFFSET(0x1F6F5010)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__37_1_OFFSET UNITYSDK_OFFSET(0x1F6F5110)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__34_0_OFFSET UNITYSDK_OFFSET(0x1F6F4F50)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__34_1_OFFSET UNITYSDK_OFFSET(0x1F6F4FB0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c_TypeDefinitionIndex = 7111;

	class DefaultContractResolver___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D30);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D38);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D40);
		}
		static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D48);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D50);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D58);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x5D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSerializableMembers_b__34_0(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__34_0_OFFSET))(this, m);
		}

		::System::Boolean _GetSerializableMembers_b__34_1(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__34_1_OFFSET))(this, m);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* _GetExtensionDataMemberForType_b__37_0(::System::Type* baseType)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__37_0_OFFSET))(this, baseType);
		}

		::System::Boolean _GetExtensionDataMemberForType_b__37_1(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__37_1_OFFSET))(this, m);
		}

		::System::Boolean _GetAttributeConstructor_b__40_0(::System::Reflection::ConstructorInfo* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETATTRIBUTECONSTRUCTOR_B__40_0_OFFSET))(this, c);
		}

		::System::Int32 _CreateProperties_b__64_0(::Newtonsoft::Json::Serialization::JsonProperty* p)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CREATEPROPERTIES_B__64_0_OFFSET))(this, p);
		}
	};
}
