#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_VOLUMETRICFOGCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2880240)
#define TA_ENVIRONMENTSYSTEM_VOLUMETRICFOGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2880610)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int VolumetricFogCustomData_TypeDefinitionIndex = 16100;

	class VolumetricFogCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* volumetricFogColor; // 0x38
		::TA::EnvironmentSystem::ESColor* volumetricFogEmission; // 0x40
		::TA::EnvironmentSystem::ESFloat* volumetricFogDistance; // 0x48
		::TA::EnvironmentSystem::ESFloat* volumetricFogMainlightStrength; // 0x50
		::TA::EnvironmentSystem::ESColor* volumetricFogMainLightTintColor; // 0x58
		::TA::EnvironmentSystem::ESFloat* volumetricFogMainLightTintAlpha; // 0x60
		::TA::EnvironmentSystem::ESFloat* volumetricFogLocallightStrength; // 0x68
		::TA::EnvironmentSystem::ESFloat* volumetricFogGIStrength; // 0x70
		::TA::EnvironmentSystem::ESFloat* volumetricFogPhaseG; // 0x78
		::TA::EnvironmentSystem::ESFloat* volumetricFogPhaseCoeff; // 0x80
		::TA::EnvironmentSystem::ESFloat* volumetricHeightCoeff; // 0x88
		::TA::EnvironmentSystem::ESFloat* volumetricStartHeight; // 0x90
		::TA::EnvironmentSystem::ESFloat* volumetricGlobalFogScale; // 0x98
		::TA::EnvironmentSystem::ESFloat* volumetricFogBlendCoeff; // 0xA0
		::TA::EnvironmentSystem::ESFloat* volumetricMaxDepth; // 0xA8
		::TA::EnvironmentSystem::ESBool* enableLocalFogVolume; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VOLUMETRICFOGCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_VOLUMETRICFOGCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
