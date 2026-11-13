#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class MemberHolder; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7317C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CHECKSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1A731CA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1A733AD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORARRAY_OFFSET UNITYSDK_OFFSET(0x1A733E30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORNONARRAYTYPES_OFFSET UNITYSDK_OFFSET(0x1A734140)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1A733D40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETENABLEUNSAFETYPEFORWARDERS_OFFSET UNITYSDK_OFFSET(0x1A732F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A7334C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETPARENTTYPES_OFFSET UNITYSDK_OFFSET(0x1A732730)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_1_OFFSET UNITYSDK_OFFSET(0x1A732A60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A731920)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETTYPEFROMASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1A733850)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A732C70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_INTERNALGETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A731CC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRINGNOTHROW_OFFSET UNITYSDK_OFFSET(0x1A7339C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A733940)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A732E70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_POPULATEOBJECTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A7331A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_SERIALIZATIONSETVALUE_OFFSET UNITYSDK_OFFSET(0x1A732FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_UNSAFETYPEFORWARDERSISENABLED_OFFSET UNITYSDK_OFFSET(0x1A732F10)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterServices_TypeDefinitionIndex = 1097;

	class FormatterServices : public ::System::Object
	{
	public:
		static ::System::Reflection::Binder** StaticGet_s_binder()
		{
			return (::System::Reflection::Binder**)UnitySDK::FromName("System.Runtime.Serialization", "FormatterServices")->GetStaticField(0x18B90);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet_advancedTypes()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.Runtime.Serialization", "FormatterServices")->GetStaticField(0x18B98);
		}

		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::Il2CppArray<::System::Reflection::MemberInfo*>*>** StaticGet_m_MemberInfoTable()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::Il2CppArray<::System::Reflection::MemberInfo*>*>**)UnitySDK::FromName("System.Runtime.Serialization", "FormatterServices")->GetStaticField(0x18BA0);
		}

		static ::System::Boolean* StaticGet_unsafeTypeForwardersIsEnabled()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Runtime.Serialization", "FormatterServices")->GetStaticField(0x58E0);
		}

		static ::System::Boolean* StaticGet_unsafeTypeForwardersIsEnabledInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Runtime.Serialization", "FormatterServices")->GetStaticField(0x58E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* GetSerializableMembers(::System::RuntimeType* a1)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET))(a1);
		}

		static ::System::Boolean CheckSerializable(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CHECKSERIALIZABLE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* InternalGetSerializableMembers(::System::RuntimeType* a1)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_INTERNALGETSERIALIZABLEMEMBERS_OFFSET))(a1);
		}

		static ::System::Boolean GetParentTypes(::System::RuntimeType* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETPARENTTYPES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* GetSerializableMembers_1(::System::Type* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_1_OFFSET))(a1, a2);
		}

		static ::System::Object* GetUninitializedObject(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETUNINITIALIZEDOBJECT_OFFSET))(a1);
		}

		static ::System::Object* nativeGetUninitializedObject(::System::RuntimeType* a1)
		{
			return ((::System::Object*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETUNINITIALIZEDOBJECT_OFFSET))(a1);
		}

		static ::System::Boolean GetEnableUnsafeTypeForwarders()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETENABLEUNSAFETYPEFORWARDERS_OFFSET))();
		}

		static ::System::Boolean UnsafeTypeForwardersIsEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_UNSAFETYPEFORWARDERSISENABLED_OFFSET))();
		}

		static ::System::Void SerializationSetValue(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_SERIALIZATIONSETVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* PopulateObjectMembers(::System::Object* a1, ::Il2CppArray<::System::Reflection::MemberInfo*>* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_POPULATEOBJECTMEMBERS_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Object*>* GetObjectData(::System::Object* a1, ::Il2CppArray<::System::Reflection::MemberInfo*>* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::Il2CppArray<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETOBJECTDATA_OFFSET))(a1, a2);
		}

		static ::System::Type* GetTypeFromAssembly(::System::Reflection::Assembly* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::System::Reflection::Assembly*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETTYPEFROMASSEMBLY_OFFSET))(a1, a2);
		}

		static ::System::Reflection::Assembly* LoadAssemblyFromString(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRING_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRINGNOTHROW_OFFSET))(a1);
		}

		static ::System::String* GetClrAssemblyName(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRASSEMBLYNAME_OFFSET))(a1, a2);
		}

		static ::System::String* GetClrTypeFullName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAME_OFFSET))(a1);
		}

		static ::System::String* GetClrTypeFullNameForArray(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORARRAY_OFFSET))(a1);
		}

		static ::System::String* GetClrTypeFullNameForNonArrayTypes(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORNONARRAYTYPES_OFFSET))(a1);
		}

	};
}
