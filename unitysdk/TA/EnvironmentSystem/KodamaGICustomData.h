#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_KODAMAGICUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C98A0)
#define TA_ENVIRONMENTSYSTEM_KODAMAGICUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C9E40)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int KodamaGICustomData_TypeDefinitionIndex = 16331;

	class KodamaGICustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* kodamaGIAmbientColor; // 0x38
		::TA::EnvironmentSystem::ESColor* kodamaGIIndoorAmbientColor; // 0x40
		::TA::EnvironmentSystem::ESFloat* giSkyLightDirectStrength; // 0x48
		::TA::EnvironmentSystem::ESFloat* giSkyLightIndirectStrength; // 0x50
		::TA::EnvironmentSystem::ESColor* ambientSkyGIColor; // 0x58
		::TA::EnvironmentSystem::ESColor* ambientEquatorGIColor; // 0x60
		::TA::EnvironmentSystem::ESColor* ambientGroundGIColor; // 0x68
		::TA::EnvironmentSystem::ESFloat* ambientLerpAtmosphere; // 0x70
		::TA::EnvironmentSystem::ESFloat* giSunLightStrength; // 0x78
		::TA::EnvironmentSystem::ESColor* giSunLightTint; // 0x80
		::TA::EnvironmentSystem::ESFloat* giMainLightStrengthControlRatio; // 0x88
		::TA::EnvironmentSystem::ESFloat* giMetalicIndirectDiffuseControlRatio; // 0x90
		::TA::EnvironmentSystem::ESFloat* giLocalLightStrength; // 0x98
		::TA::EnvironmentSystem::ESFloat* aoIntensity; // 0xA0
		::TA::EnvironmentSystem::ESFloat* aoRadius; // 0xA8
		::TA::EnvironmentSystem::ESFloat* aoCharacterStrength; // 0xB0
		::TA::EnvironmentSystem::ESBool* enableSSGI; // 0xB8

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_KODAMAGICUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_KODAMAGICUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
