#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Emit/Label.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class UnionAttribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5CA70)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5CAB0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__12_1_OFFSET UNITYSDK_OFFSET(0x1CD5D790)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__11_1_OFFSET UNITYSDK_OFFSET(0x1CD5D770)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CD5D750)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1CD5CAC0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x1CD5CBA0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_2_OFFSET UNITYSDK_OFFSET(0x1CD5CF10)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_3_OFFSET UNITYSDK_OFFSET(0x1CD5D220)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_4_OFFSET UNITYSDK_OFFSET(0x1CD5D2C0)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_5_OFFSET UNITYSDK_OFFSET(0x1CD5D410)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_6_OFFSET UNITYSDK_OFFSET(0x1CD5D560)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_7_OFFSET UNITYSDK_OFFSET(0x1CD5D6B0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver___c_TypeDefinitionIndex = 7276;

	class DynamicUnionResolver___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Resolvers", "<>c")->GetStaticField(0x4F3C0);
		}

		static ::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::MessagePack::UnionAttribute*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Resolvers", "<>c")->GetStaticField(0x4F3C8);
		}

		static ::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>**)UnitySDK::FromName("MessagePack.Resolvers", "<>c")->GetStaticField(0x4F3D0);
		}

		static ::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>**)UnitySDK::FromName("MessagePack.Resolvers", "<>c")->GetStaticField(0x4F3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__5_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_0_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* __cctor_b__5_1(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_1_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* __cctor_b__5_2(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_3(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_4(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_4_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_5(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_5_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_6(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_6_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__5_7(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C___CCTOR_B__5_7_OFFSET))(this, a1);
		}

		::System::Int32 _BuildType_b__9_0(::MessagePack::UnionAttribute* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDTYPE_B__9_0_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label _BuildSerialize_b__11_1(::System::Object* a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDSERIALIZE_B__11_1_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label _BuildDeserialize_b__12_1(::System::Object* a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__BUILDDESERIALIZE_B__12_1_OFFSET))(this, a1);
		}

	};
}
