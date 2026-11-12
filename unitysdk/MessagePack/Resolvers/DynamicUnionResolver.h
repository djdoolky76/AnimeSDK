#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class UnionAttribute; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace MessagePack::Resolvers { class DynamicUnionResolver; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class MethodBuilder; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1CD59260)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD5AF40)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD59B30)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1CD586F0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD570F0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD586E0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1CD5C9E0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_TypeDefinitionIndex = 7272;

	class DynamicUnionResolver : public ::System::Object
	{
	public:
		static ::System::Reflection::ConstructorInfo** StaticGet_keyMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AEF0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AEF8);
		}

		static ::System::Type** StaticGet_refKvp()
		{
			return (::System::Type**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF00);
		}

		static ::System::Reflection::FieldInfo** StaticGet_runtimeTypeHandleEqualityComparer()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF08);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_invalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF10);
		}

		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetValue()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF18);
		}

		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF20);
		}

		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF28);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_typeMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF30);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF38);
		}

		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF40);
		}

		static ::System::Reflection::MethodInfo** StaticGet_objectGetType()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF48);
		}

		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF50);
		}

		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF58);
		}

		static ::System::Reflection::MethodInfo** StaticGet_getTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF60);
		}

		static ::MessagePack::Resolvers::DynamicUnionResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF68);
		}

		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF70);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_intIntKeyValuePairConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF78);
		}

		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF80);
		}

		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF88);
		}

		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF90);
		}

		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AF98);
		}

		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetKey()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x4AFA0);
		}

		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0xF410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Reflection::TypeInfo* BuildType(::System::Type* a1)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET))(a1);
		}

		static ::System::Void BuildConstructor(::System::Type* a1, ::Il2CppArray<::MessagePack::UnionAttribute*>* a2, ::System::Reflection::ConstructorInfo* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::FieldBuilder* a5, ::System::Reflection::Emit::ILGenerator* a6)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BuildSerialize(::System::Type* a1, ::Il2CppArray<::MessagePack::UnionAttribute*>* a2, ::System::Reflection::Emit::MethodBuilder* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::ILGenerator* a5)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BuildDeserialize(::System::Type* a1, ::Il2CppArray<::MessagePack::UnionAttribute*>* a2, ::System::Reflection::Emit::MethodBuilder* a3, ::System::Reflection::Emit::FieldBuilder* a4, ::System::Reflection::Emit::ILGenerator* a5)
		{
			return ((::System::Void(*)(::System::Type*, ::Il2CppArray<::MessagePack::UnionAttribute*>*, ::System::Reflection::Emit::MethodBuilder*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsZeroStartSequential(::Il2CppArray<::MessagePack::UnionAttribute*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MessagePack::UnionAttribute*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET))(a1);
		}

	};
}
