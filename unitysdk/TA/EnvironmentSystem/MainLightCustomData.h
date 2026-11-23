#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_MAINLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2862FF0)
#define TA_ENVIRONMENTSYSTEM_MAINLIGHTCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2863230)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int MainLightCustomData_TypeDefinitionIndex = 16050;

	class MainLightCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* mainLightColor; // 0x38
		::TA::EnvironmentSystem::ESFloat* mainLightIntensity; // 0x40
		::TA::EnvironmentSystem::ESFloat* mainLightSourceAngle; // 0x48
		::TA::EnvironmentSystem::ESFloat* mainLightSoftSourceAngle; // 0x50
		::TA::EnvironmentSystem::ESFloat* mainLightSpecularScale; // 0x58
		::TA::EnvironmentSystem::ESColor* mainLightPenumbraRampInnerColor; // 0x60
		::TA::EnvironmentSystem::ESColor* mainLightPenumbraRampOuterColor; // 0x68
		::TA::EnvironmentSystem::ESFloat* mainLightPenumbraRampIntensity; // 0x70
		::TA::EnvironmentSystem::ESFloat* mainLightPenumbraRampSizeScale; // 0x78

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MAINLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MAINLIGHTCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
