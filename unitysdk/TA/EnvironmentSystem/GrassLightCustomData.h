#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_GRASSLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28E0CB0)
#define TA_ENVIRONMENTSYSTEM_GRASSLIGHTCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28E0F90)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int GrassLightCustomData_TypeDefinitionIndex = 16402;

	class GrassLightCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* FoliageMainLightIntensity; // 0x38
		::TA::EnvironmentSystem::ESColor* FoliageMainLightColor; // 0x40
		::TA::EnvironmentSystem::ESFloat* TreeBillboardMainLightIntensity; // 0x48
		::TA::EnvironmentSystem::ESFloat* GrassRoughness; // 0x50
		::TA::EnvironmentSystem::ESFloat* GrassSpecularScale; // 0x58
		::TA::EnvironmentSystem::ESColor* GrassShadowColor; // 0x60
		::TA::EnvironmentSystem::ESFloat* FoliageLightRangeWarp; // 0x68
		::TA::EnvironmentSystem::ESColor* FoliageScatteringColor; // 0x70
		::TA::EnvironmentSystem::ESFloat* FoliageScatteringIntensity; // 0x78
		::TA::EnvironmentSystem::ESColor* FoliageShadowColor; // 0x80
		::TA::EnvironmentSystem::ESFloat* FoliageShadowIntensity; // 0x88
		::TA::EnvironmentSystem::ESFloat* FoliageEdgeLightWidth; // 0x90
		::TA::EnvironmentSystem::ESColor* FoliageEdgeLightColor; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GRASSLIGHTCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GRASSLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
