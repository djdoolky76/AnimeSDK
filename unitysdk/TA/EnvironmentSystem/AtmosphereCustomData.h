#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class FAED0374422E783A; }

#define TA_ENVIRONMENTSYSTEM_ATMOSPHERECUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2853D40)
#define TA_ENVIRONMENTSYSTEM_ATMOSPHERECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2854500)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int AtmosphereCustomData_TypeDefinitionIndex = 15994;

	class AtmosphereCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* sunLightIntensity; // 0x38
		::TA::EnvironmentSystem::ESColor* sunLightColor; // 0x40
		::TA::EnvironmentSystem::ESFloat* seaLevel; // 0x48
		::TA::EnvironmentSystem::ESFloat* planetRadius; // 0x50
		::TA::EnvironmentSystem::ESFloat* ozoneLevelCenterHeight; // 0x58
		::TA::EnvironmentSystem::ESFloat* ozoneLevelWidth; // 0x60
		::TA::EnvironmentSystem::ESFloat* atmosphereHeight; // 0x68
		::TA::EnvironmentSystem::ESFloat* multiScatteringFactor; // 0x70
		::TA::EnvironmentSystem::ESFloat* rayleighScatteringScale; // 0x78
		::TA::EnvironmentSystem::ESColor* rayleighScattering; // 0x80
		::TA::EnvironmentSystem::ESFloat* rayleighScatteringScalarHeight; // 0x88
		::TA::EnvironmentSystem::ESFloat* mieScatteringScale; // 0x90
		::TA::EnvironmentSystem::ESColor* mieScattering; // 0x98
		::TA::EnvironmentSystem::ESFloat* mieScatteringScalarHeight; // 0xA0
		::TA::EnvironmentSystem::ESFloat* mieAnisotropy; // 0xA8
		::TA::EnvironmentSystem::ESFloat* mieAbsorptionScale; // 0xB0
		::TA::EnvironmentSystem::ESColor* mieAbsorption; // 0xB8
		::TA::EnvironmentSystem::ESFloat* ozoneAbsorptionScale; // 0xC0
		::TA::EnvironmentSystem::ESColor* ozoneAbsorption; // 0xC8
		::TA::EnvironmentSystem::ESBool* enableAerialPerspective; // 0xD0
		::TA::EnvironmentSystem::ESFloat* maxDistance; // 0xD8
		::TA::EnvironmentSystem::ESFloat* intensityOverTime; // 0xE0
		::UnityEngine::FAED0374422E783A* intensityOverDistance; // 0xE8
		::TA::EnvironmentSystem::ESBool* enableCustomColor; // 0xF0
		::UnityEngine::B196ACFA9D2AE729* colorOverDistance; // 0xF8
		::System::Boolean ForceUpdateLuts; // 0x100

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ATMOSPHERECUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ATMOSPHERECUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
