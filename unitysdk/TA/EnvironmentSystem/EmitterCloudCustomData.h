#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector2; }

#define TA_ENVIRONMENTSYSTEM_EMITTERCLOUDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C7B80)
#define TA_ENVIRONMENTSYSTEM_EMITTERCLOUDCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C7E80)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int EmitterCloudCustomData_TypeDefinitionIndex = 16306;

	class EmitterCloudCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* WindIntensity; // 0x38
		::TA::EnvironmentSystem::ESFloat* EmitterRadius; // 0x40
		::TA::EnvironmentSystem::ESVector2* LifetimeRandom; // 0x48
		::TA::EnvironmentSystem::ESVector2* SizeRandom; // 0x50
		::TA::EnvironmentSystem::ESVector2* VelocityRandom; // 0x58
		::TA::EnvironmentSystem::ESFloat* HeightStart; // 0x60
		::TA::EnvironmentSystem::ESFloat* HeightRangeRandom; // 0x68
		::TA::EnvironmentSystem::ESFloat* DepthRangeRandom; // 0x70
		::TA::EnvironmentSystem::ESColor* EmitCloudDepthColor; // 0x78
		::TA::EnvironmentSystem::ESColor* EmitCloudLightColor; // 0x80
		::TA::EnvironmentSystem::ESColor* EmitCloudMiddleColor; // 0x88
		::TA::EnvironmentSystem::ESColor* EmitCloudShadowColor; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_EMITTERCLOUDCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_EMITTERCLOUDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
