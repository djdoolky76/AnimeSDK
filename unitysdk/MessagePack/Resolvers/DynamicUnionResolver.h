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

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BBD02F0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBD1FD0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBD0BC0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1BBCF780)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCE180)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCF770)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_ISZEROSTARTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1BBD3A70)

namespace MessagePack::Resolvers
{
	class DynamicUnionResolver : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_getResolverFromOptions()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26650);
		}

		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getSerialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26658);
		}

		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26660);
		}

		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26668);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_objectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26670);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_intIntKeyValuePairConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26678);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_keyMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26680);
		}

		static ::System::Reflection::MethodInfo** StaticGet_objectGetType()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26688);
		}

		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26690);
		}

		static ::System::Type** StaticGet_refKvp()
		{
			return (::System::Type**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26698);
		}

		static ::MessagePack::Resolvers::DynamicUnionResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicUnionResolver**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266A0);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_typeMapDictionaryConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266A8);
		}

		static ::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_getDeserialize()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266B0);
		}

		static ::System::Reflection::ConstructorInfo** StaticGet_invalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266B8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_keyMapDictionaryTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266C0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_getFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266C8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetKey()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266D0);
		}

		static ::System::Reflection::FieldInfo** StaticGet_runtimeTypeHandleEqualityComparer()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266D8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_getTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266E0);
		}

		static ::System::Type** StaticGet_refMessagePackReader()
		{
			return (::System::Type**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266E8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_typeMapDictionaryAdd()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266F0);
		}

		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x266F8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_intIntKeyValuePairGetValue()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x26700);
		}

		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)UnitySDK::FromName("MessagePack.Resolvers", "DynamicUnionResolver")->GetStaticField(0x83F0);
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
