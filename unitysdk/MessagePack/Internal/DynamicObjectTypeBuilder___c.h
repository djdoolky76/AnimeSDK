#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Emit/Label.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD2BEB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2BEF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CD2BF00)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x1CD2BF20)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__5_0_OFFSET UNITYSDK_OFFSET(0x1CD2BF40)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_0_OFFSET UNITYSDK_OFFSET(0x1CD2C130)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_1_OFFSET UNITYSDK_OFFSET(0x1CD2C160)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_0_OFFSET UNITYSDK_OFFSET(0x1CD2C190)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_1_OFFSET UNITYSDK_OFFSET(0x1CD2C1B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_B__16_1_OFFSET UNITYSDK_OFFSET(0x1CD2C1D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_B__25_0_OFFSET UNITYSDK_OFFSET(0x1CD2C2F0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1CD2C390)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_0_OFFSET UNITYSDK_OFFSET(0x1CD2C1F0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_1_OFFSET UNITYSDK_OFFSET(0x1CD2C230)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1CD2BF70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_1_OFFSET UNITYSDK_OFFSET(0x1CD2BFB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_2_OFFSET UNITYSDK_OFFSET(0x1CD2C070)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_3_OFFSET UNITYSDK_OFFSET(0x1CD2C090)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_4_OFFSET UNITYSDK_OFFSET(0x1CD2C0B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_5_OFFSET UNITYSDK_OFFSET(0x1CD2C0D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_6_OFFSET UNITYSDK_OFFSET(0x1CD2C0F0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_7_OFFSET UNITYSDK_OFFSET(0x1CD2C110)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x1CD2C430)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_1_OFFSET UNITYSDK_OFFSET(0x1CD2C510)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_2_OFFSET UNITYSDK_OFFSET(0x1CD2C880)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_3_OFFSET UNITYSDK_OFFSET(0x1CD2CB20)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_4_OFFSET UNITYSDK_OFFSET(0x1CD2CC70)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c_TypeDefinitionIndex = 7330;

	class DynamicObjectTypeBuilder___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x48FD0);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x48FD8);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x48FE0);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x48FE8);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x48FF0);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x48FF8);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49000);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49008);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_7()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49010);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49018);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49020);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49028);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49030);
		}

		static ::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49038);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49040);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49048);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49050);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49058);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_6()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49060);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49068);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x49070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildConstructor_b__4_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildConstructor_b__4_1(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_1_OFFSET))(this, a1);
		}

		::System::Boolean _BuildCustomFormatterField_b__5_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildSerialize_b__6_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildSerialize_b__6_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_1_OFFSET))(this, a1);
		}

		::System::Boolean _BuildSerialize_b__6_2(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_2_OFFSET))(this, a1);
		}

		::System::Int32 _BuildSerialize_b__6_3(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_3_OFFSET))(this, a1);
		}

		::System::Boolean _BuildSerialize_b__6_4(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_4_OFFSET))(this, a1);
		}

		::System::Int32 _BuildSerialize_b__6_5(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_5_OFFSET))(this, a1);
		}

		::System::Boolean _BuildSerialize_b__6_6(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_6_OFFSET))(this, a1);
		}

		::System::Boolean _BuildSerialize_b__6_7(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_7_OFFSET))(this, a1);
		}

		::System::Boolean _BuildDeserializeInternalAssignFieldFromLocalVariableIntKey_b__12_0(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_0_OFFSET))(this, a1);
		}

		::System::Int32 _BuildDeserializeInternalAssignFieldFromLocalVariableIntKey_b__12_1(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_1_OFFSET))(this, a1);
		}

		::System::Int32 _BuildDeserializeInternalDeserializationInfoArrayIntKey_b__15_0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_0_OFFSET))(this, a1);
		}

		::System::Int32 _BuildDeserializeInternalDeserializationInfoArrayIntKey_b__15_1(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_1_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label _BuildDeserializeInternalDeserializeLoopIntKey_b__16_1(::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean _BuildDeserializeInternalOnAfterDeserialize_b__20_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildDeserializeInternalOnAfterDeserialize_b__20_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_1_OFFSET))(this, a1);
		}

		::System::Boolean _BuildDeserializeInternalDeserializeValueAssignDirectly_b__25_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildDeserializeInternalDeserializeValueAssignLocalVariable_b__26_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__49_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_0_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* __cctor_b__49_1(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_1_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* __cctor_b__49_2(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__49_3(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__49_4(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_4_OFFSET))(this, a1);
		}

	};
}
