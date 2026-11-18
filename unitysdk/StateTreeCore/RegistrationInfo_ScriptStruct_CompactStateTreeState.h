#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FE09680)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE07BD0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex = 31156;

	class RegistrationInfo_ScriptStruct_CompactStateTreeState : public ::System::Object
	{
	public:
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_LinkedAsset()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27800);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_EnterConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27808);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterTemplateIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27810);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27818);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27820);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27828);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_SelectionBehavior_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27830);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27838);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27840);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Enabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27848);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_EnterConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27850);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_SelectionBehavior()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27858);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenEnd()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27860);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TasksNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27868);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27870);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TransitionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27878);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_InstanceDataNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27880);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27888);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ParameterDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27890);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterBindingsBatch()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27898);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x278A0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parent()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x278A8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x278B0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TransitionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x278B8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_LinkedState()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x278C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
