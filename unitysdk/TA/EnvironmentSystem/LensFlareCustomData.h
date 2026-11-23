#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_LENSFLARECUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28E2F70)
#define TA_ENVIRONMENTSYSTEM_LENSFLARECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28E3110)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int LensFlareCustomData_TypeDefinitionIndex = 16367;

	class LensFlareCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* lensFlareIntensity; // 0x38
		::TA::EnvironmentSystem::ESFloat* lensFlareLineIntensity; // 0x40
		::TA::EnvironmentSystem::ESFloat* lensFlareSize; // 0x48
		::TA::EnvironmentSystem::ESFloat* lensFlareOffset; // 0x50
		::TA::EnvironmentSystem::ESColor* lensFlareColor; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_LENSFLARECUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_LENSFLARECUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
