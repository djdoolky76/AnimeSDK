#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_SUNCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28F1E90)
#define TA_ENVIRONMENTSYSTEM_SUNCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28F20C0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int SunCustomData_TypeDefinitionIndex = 16452;

	class SunCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* SunSize; // 0x38
		::TA::EnvironmentSystem::ESColor* SunColor; // 0x40
		::TA::EnvironmentSystem::ESFloat* SunIntensity; // 0x48
		::TA::EnvironmentSystem::ESFloat* SunAlpha; // 0x50
		::TA::EnvironmentSystem::ESFloat* SunEdgeSmoothness; // 0x58
		::TA::EnvironmentSystem::ESFloat* SunTransmisionFalloff; // 0x60
		::TA::EnvironmentSystem::ESFloat* SunTransmisionHeight; // 0x68
		::TA::EnvironmentSystem::ESFloat* SunTransmisionIntensity; // 0x70
		::TA::EnvironmentSystem::ESColor* SunTransmisionColor; // 0x78

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SUNCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SUNCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
