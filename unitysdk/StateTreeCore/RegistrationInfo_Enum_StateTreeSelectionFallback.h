#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESELECTIONFALLBACK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAF3690)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESELECTIONFALLBACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF3580)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeSelectionFallback_TypeDefinitionIndex = 31153;

	class RegistrationInfo_Enum_StateTreeSelectionFallback : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeSelectionFallback_TypeDefinitionIndex)->GetStaticField(0x27CD0);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeSelectionFallback_TypeDefinitionIndex)->GetStaticField(0x27CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESELECTIONFALLBACK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREESELECTIONFALLBACK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
