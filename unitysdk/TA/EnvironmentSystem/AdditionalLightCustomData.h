#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector2; }

#define TA_ENVIRONMENTSYSTEM_ADDITIONALLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C1E20)
#define TA_ENVIRONMENTSYSTEM_ADDITIONALLIGHTCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C1FF0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int AdditionalLightCustomData_TypeDefinitionIndex = 16301;

	class AdditionalLightCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* alldayLightIntensity; // 0x38
		::TA::EnvironmentSystem::ESVector2* dayLightTime; // 0x40
		::TA::EnvironmentSystem::ESVector2* nightLightTime; // 0x48
		::TA::EnvironmentSystem::ESBool* enableOverrideIntensity; // 0x50
		::TA::EnvironmentSystem::ESFloat* overrideIntensity; // 0x58

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ADDITIONALLIGHTCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ADDITIONALLIGHTCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
