#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E19ED10)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19EC00)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeConditionCompareOperator_TypeDefinitionIndex = 57306;

	class RegistrationInfo_Enum_StateTreeConditionCompareOperator : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionCompareOperator_TypeDefinitionIndex)->GetStaticField(0x49470);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeConditionCompareOperator_TypeDefinitionIndex)->GetStaticField(0x49478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_ENUM_STATETREECONDITIONCOMPAREOPERATOR_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
