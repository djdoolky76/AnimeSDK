#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Object.h"
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class DefaultContractResolverState; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class IValueProvider; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonLinqContract; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonPrimitiveContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonPropertyCollection; }
namespace Newtonsoft::Json::Serialization { class JsonStringContract; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x184205A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x18422630)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1841E100)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18419A50)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET UNITYSDK_OFFSET(0x1841FDD0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1841CCD0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET UNITYSDK_OFFSET(0x1841FA60)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET UNITYSDK_OFFSET(0x1841F9E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x184214C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET UNITYSDK_OFFSET(0x18416F10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET UNITYSDK_OFFSET(0x1841F880)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18420F50)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1841A3B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18421570)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET UNITYSDK_OFFSET(0x184218A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET UNITYSDK_OFFSET(0x1841FD30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x18415870)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x18415980)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18417AD0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET UNITYSDK_OFFSET(0x1841B5C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET UNITYSDK_OFFSET(0x18419660)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x18420BA0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1841B310)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET UNITYSDK_OFFSET(0x184188E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x184184E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x184225A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x18415E30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x18415A20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x18415920)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18415960)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET UNITYSDK_OFFSET(0x18415950)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x184158F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x18415940)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET UNITYSDK_OFFSET(0x184175C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x18420870)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x184203F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1841C3F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET UNITYSDK_OFFSET(0x1841B3A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET UNITYSDK_OFFSET(0x1841B160)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x18415A70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET UNITYSDK_OFFSET(0x18422510)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x18422500)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET UNITYSDK_OFFSET(0x18418AE0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET UNITYSDK_OFFSET(0x18421BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1841A990)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x18415930)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18415970)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET UNITYSDK_OFFSET(0x18416BE0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1841C3E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1841C3D0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_TypeDefinitionIndex = 9713;

	class DefaultContractResolver : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::DefaultContractResolverState* _instanceState; // 0x10
		::System::Reflection::BindingFlags _DefaultMembersSearchFlags_k__BackingField; // 0x18
		::System::Boolean _IgnoreSerializableAttribute_k__BackingField; // 0x1C
		::System::Boolean _IgnoreSerializableInterface_k__BackingField; // 0x1D
		::System::Boolean _sharedCache; // 0x1E
		::System::Boolean _SerializeCompilerGeneratedMembers_k__BackingField; // 0x1F
		static ::Newtonsoft::Json::Serialization::DefaultContractResolverState** StaticGet__sharedState()
		{
			return (::Newtonsoft::Json::Serialization::DefaultContractResolverState**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "DefaultContractResolver")->GetStaticField(0x29900);
		}

		static ::Newtonsoft::Json::Serialization::IContractResolver** StaticGet__instance()
		{
			return (::Newtonsoft::Json::Serialization::IContractResolver**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "DefaultContractResolver")->GetStaticField(0x29908);
		}

		static ::System::Object** StaticGet_TypeContractCacheLock()
		{
			return (::System::Object**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "DefaultContractResolver")->GetStaticField(0x29910);
		}

		static ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>** StaticGet_BuiltInConverters()
		{
			return (::Il2CppArray<::Newtonsoft::Json::JsonConverter*>**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "DefaultContractResolver")->GetStaticField(0x29918);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Serialization::IContractResolver* get_Instance()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET))();
		}

		::System::Reflection::BindingFlags get_DefaultMembersSearchFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(this);
		}

		::System::Void set_DefaultMembersSearchFlags(::System::Reflection::BindingFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(this, a1);
		}

		::System::Boolean get_SerializeCompilerGeneratedMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET))(this);
		}

		::System::Boolean get_IgnoreSerializableInterface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreSerializableAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IgnoreSerializableAttribute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::DefaultContractResolverState* GetState()
		{
			return ((::Newtonsoft::Json::Serialization::DefaultContractResolverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSTATE_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* GetSerializableMembers(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean ShouldSerializeEntityMember(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonObjectContract* CreateObjectContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonObjectContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET))(this, a1);
		}

		::System::Reflection::MemberInfo* GetExtensionDataMemberForType(::System::Type* a1)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET))(this, a1);
		}

		static ::System::Void SetExtensionDataDelegates(::Newtonsoft::Json::Serialization::JsonObjectContract* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET))(a1, a2);
		}

		::System::Reflection::ConstructorInfo* GetAttributeConstructor(::System::Type* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Reflection::ConstructorInfo* GetParameterizedConstructor(::System::Type* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>* CreateConstructorParameters(::System::Reflection::ConstructorInfo* a1, ::Newtonsoft::Json::Serialization::JsonPropertyCollection* a2)
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>*(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Newtonsoft::Json::Serialization::JsonPropertyCollection*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreatePropertyFromConstructorParameter(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Reflection::ParameterInfo* a2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::JsonConverter* ResolveContractConverter(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET))(this, a1);
		}

		::System::Func_1<::System::Object*>* GetDefaultCreator(::System::Type* a1)
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET))(this, a1);
		}

		::System::Void InitializeContract(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET))(this, a1);
		}

		::System::Void ResolveCallbackMethods(::Newtonsoft::Json::Serialization::JsonContract* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET))(this, a1, a2);
		}

		::System::Void GetCallbackMethodsForType(::System::Type* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean ShouldSkipDeserialized(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET))(a1);
		}

		static ::System::Boolean ShouldSkipSerializing(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::Type*>* GetClassHierarchyForType(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonDictionaryContract* CreateDictionaryContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonDictionaryContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* CreateArrayContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonPrimitiveContract* CreatePrimitiveContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonPrimitiveContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonLinqContract* CreateLinqContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonLinqContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonISerializableContract* CreateISerializableContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonISerializableContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonStringContract* CreateStringContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonStringContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* CreateContract(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET))(this, a1);
		}

		static ::System::Boolean IsJsonPrimitiveType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsIConvertible(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET))(a1);
		}

		static ::System::Boolean CanConvertToString(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET))(a1);
		}

		static ::System::Boolean IsValidCallback(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4, ::System::Type* a5)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetClrTypeFullName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET))(a1);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>* CreateProperties(::System::Type* a1, ::Newtonsoft::Json::MemberSerialization a2)
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::JsonProperty*>*(*)(::PVOID, ::System::Type*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* CreateMemberValueProvider(::System::Reflection::MemberInfo* a1)
		{
			return ((::Newtonsoft::Json::Serialization::IValueProvider*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* a1, ::Newtonsoft::Json::MemberSerialization a2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void SetPropertySettingsFromAttributes(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Object* a2, ::System::String* a3, ::System::Type* a4, ::Newtonsoft::Json::MemberSerialization a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*, ::System::Type*, ::Newtonsoft::Json::MemberSerialization, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Predicate_1<::System::Object*>* CreateShouldSerializeTest(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET))(this, a1);
		}

		::System::Void SetIsSpecifiedActions(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Reflection::MemberInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ResolvePropertyName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::String* ResolveDictionaryKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET))(this, a1);
		}

		::System::String* GetResolvedPropertyName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET))(this, a1);
		}

	};
}
