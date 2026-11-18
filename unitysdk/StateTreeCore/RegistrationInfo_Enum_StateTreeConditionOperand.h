#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONOPERAND_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F2DCF90)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONOPERAND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2DCE80)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeConditionOperand_TypeDefinitionIndex = 31141;

	class RegistrationInfo_Enum_StateTreeConditionOperand : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionOperand_TypeDefinitionIndex)->GetStaticField(0x27650);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionOperand_TypeDefinitionIndex)->GetStaticField(0x27658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONOPERAND__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREECONDITIONOPERAND_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
