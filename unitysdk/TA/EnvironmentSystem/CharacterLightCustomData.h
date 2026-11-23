#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector3; }

#define TA_ENVIRONMENTSYSTEM_CHARACTERLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C49F0)
#define TA_ENVIRONMENTSYSTEM_CHARACTERLIGHTCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C4BE0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int CharacterLightCustomData_TypeDefinitionIndex = 16325;

	class CharacterLightCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* characterLightColor; // 0x38
		::TA::EnvironmentSystem::ESFloat* characterLightIntensity; // 0x40
		::TA::EnvironmentSystem::ESBool* enableCharacterBloomIntensityControl; // 0x48
		::TA::EnvironmentSystem::ESFloat* characterBloomIntensity; // 0x50
		::TA::EnvironmentSystem::ESBool* syncCharacterWithMainLight; // 0x58
		::TA::EnvironmentSystem::ESVector3* characterLightDirection; // 0x60

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CHARACTERLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CHARACTERLIGHTCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
