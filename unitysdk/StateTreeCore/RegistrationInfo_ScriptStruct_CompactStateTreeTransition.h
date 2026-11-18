#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FEFBE40)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEFAF50)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex = 31154;

	class RegistrationInfo_ScriptStruct_CompactStateTreeTransition : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Trigger()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x278D0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_ConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x278D8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x278E0);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_TransitionEnabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x278E8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x278F0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_State()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x278F8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Priority()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27900);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_EventTag()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27908);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Priority_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27910);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27918);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Delay()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27920);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Fallback_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27928);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Fallback()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27930);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Trigger_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27938);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition_TypeDefinitionIndex)->GetStaticField(0x27940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
