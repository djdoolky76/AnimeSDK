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

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x174C1890)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x174C18D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x174C18E0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x174C1900)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__5_0_OFFSET UNITYSDK_OFFSET(0x174C1920)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_0_OFFSET UNITYSDK_OFFSET(0x174C1B10)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALASSIGNFIELDFROMLOCALVARIABLEINTKEY_B__12_1_OFFSET UNITYSDK_OFFSET(0x174C1B40)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_0_OFFSET UNITYSDK_OFFSET(0x174C1B70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZATIONINFOARRAYINTKEY_B__15_1_OFFSET UNITYSDK_OFFSET(0x174C1B90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_B__16_1_OFFSET UNITYSDK_OFFSET(0x174C1BB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNDIRECTLY_B__25_0_OFFSET UNITYSDK_OFFSET(0x174C1CD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALDESERIALIZEVALUEASSIGNLOCALVARIABLE_B__26_0_OFFSET UNITYSDK_OFFSET(0x174C1D70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_0_OFFSET UNITYSDK_OFFSET(0x174C1BD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZEINTERNALONAFTERDESERIALIZE_B__20_1_OFFSET UNITYSDK_OFFSET(0x174C1C10)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_0_OFFSET UNITYSDK_OFFSET(0x174C1950)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_1_OFFSET UNITYSDK_OFFSET(0x174C1990)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_2_OFFSET UNITYSDK_OFFSET(0x174C1A50)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_3_OFFSET UNITYSDK_OFFSET(0x174C1A70)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_4_OFFSET UNITYSDK_OFFSET(0x174C1A90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_5_OFFSET UNITYSDK_OFFSET(0x174C1AB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_6_OFFSET UNITYSDK_OFFSET(0x174C1AD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__6_7_OFFSET UNITYSDK_OFFSET(0x174C1AF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x174C1E10)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_1_OFFSET UNITYSDK_OFFSET(0x174C1EF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_2_OFFSET UNITYSDK_OFFSET(0x174C2260)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_3_OFFSET UNITYSDK_OFFSET(0x174C2500)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C___CCTOR_B__49_4_OFFSET UNITYSDK_OFFSET(0x174C2650)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c_TypeDefinitionIndex = 7330;

	class DynamicObjectTypeBuilder___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD00);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD08);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD10);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD18);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD20);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD28);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD30);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD38);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_6()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD40);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD48);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD50);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD58);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD60);
		}

		static ::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Reflection::Emit::Label>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD68);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD70);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD78);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD80);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD88);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD90);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__6_7()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DD98);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DDA0);
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
