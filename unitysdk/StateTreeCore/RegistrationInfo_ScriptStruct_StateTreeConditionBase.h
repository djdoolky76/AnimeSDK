#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class Int8PropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FF499A0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF492B0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex = 30962;

	class RegistrationInfo_ScriptStruct_StateTreeConditionBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BC0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BC8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Operand()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BD0);
		}
		static ::UnrealTypes::Int8PropertyParams** StaticGet_Property_DeltaIndent()
		{
			return (::UnrealTypes::Int8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BD8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Operand_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BE0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_EvaluationMode_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BE8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_EvaluationMode()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BF0);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x27BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
