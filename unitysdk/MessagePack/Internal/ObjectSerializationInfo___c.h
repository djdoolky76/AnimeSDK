#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x174C8060)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x174C80A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_10_OFFSET UNITYSDK_OFFSET(0x174C82B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_11_OFFSET UNITYSDK_OFFSET(0x174C82C0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_12_OFFSET UNITYSDK_OFFSET(0x174C82E0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_13_OFFSET UNITYSDK_OFFSET(0x174C82F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_14_OFFSET UNITYSDK_OFFSET(0x174C8300)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_15_OFFSET UNITYSDK_OFFSET(0x174C8310)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_16_OFFSET UNITYSDK_OFFSET(0x174C8320)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_17_OFFSET UNITYSDK_OFFSET(0x174C8340)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_2_OFFSET UNITYSDK_OFFSET(0x174C81D0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_4_OFFSET UNITYSDK_OFFSET(0x174C8220)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_5_OFFSET UNITYSDK_OFFSET(0x174C8350)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_6_OFFSET UNITYSDK_OFFSET(0x174C8370)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_7_OFFSET UNITYSDK_OFFSET(0x174C8500)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_8_OFFSET UNITYSDK_OFFSET(0x174C80B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_9_OFFSET UNITYSDK_OFFSET(0x174C8140)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c_TypeDefinitionIndex = 7348;

	class ObjectSerializationInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__27_6()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6A0);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet___9__27_9()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::String*>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6A8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet___9__27_14()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6B0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet___9__27_16()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6B8);
		}

		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__27_2()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6C0);
		}

		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>, ::System::Int32, ::System::ValueTuple_2<::System::Object*, ::System::Int32>>** StaticGet___9__27_11()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>, ::System::Int32, ::System::ValueTuple_2<::System::Object*, ::System::Int32>>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6C8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>** StaticGet___9__27_17()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6D8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>, ::System::Int32>** StaticGet___9__27_10()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6E0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>** StaticGet___9__27_15()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6E8);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>** StaticGet___9__27_8()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Type*>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6F0);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Object*, ::System::Int32>, ::System::Object*>** StaticGet___9__27_13()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Object*, ::System::Int32>, ::System::Object*>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E6F8);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__27_5()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E700);
		}

		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>** StaticGet___9__27_4()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E708);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__27_7()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E710);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Object*, ::System::Int32>, ::System::Int32>** StaticGet___9__27_12()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Object*, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2E718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C_CTOR_OFFSET))(this);
		}

		::System::Type* _CreateOrNull_b__27_8(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_8_OFFSET))(this, a1);
		}

		::System::String* _CreateOrNull_b__27_9(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_9_OFFSET))(this, a1);
		}

		::System::Boolean _CreateOrNull_b__27_2(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_2_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_4(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_4_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_10(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_10_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Object*, ::System::Int32> _CreateOrNull_b__27_11(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::System::Object*, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_11_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreateOrNull_b__27_12(::System::ValueTuple_2<::System::Object*, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Object*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_12_OFFSET))(this, a1);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _CreateOrNull_b__27_13(::System::ValueTuple_2<::System::Object*, ::System::Int32> a1)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID, ::System::ValueTuple_2<::System::Object*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_13_OFFSET))(this, a1);
		}

		::System::String* _CreateOrNull_b__27_14(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_14_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> _CreateOrNull_b__27_15(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_15_OFFSET))(this, a1);
		}

		::System::String* _CreateOrNull_b__27_16(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_16_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> _CreateOrNull_b__27_17(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_17_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_5(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_5_OFFSET))(this, a1);
		}

		::System::Int32 _CreateOrNull_b__27_6(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_6_OFFSET))(this, a1);
		}

		::System::Boolean _CreateOrNull_b__27_7(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__CREATEORNULL_B__27_7_OFFSET))(this, a1);
		}

	};
}
