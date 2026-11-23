#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_WINDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28EC0D0)
#define TA_ENVIRONMENTSYSTEM_WINDCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28EC260)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int WindCustomData_TypeDefinitionIndex = 16401;

	class WindCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* WindDirYaw; // 0x38
		::TA::EnvironmentSystem::ESFloat* WindDirPitch; // 0x40
		::TA::EnvironmentSystem::ESFloat* WindStrength; // 0x48
		::TA::EnvironmentSystem::ESFloat* GustWindStrength; // 0x50
		::TA::EnvironmentSystem::ESFloat* GustWindFrequency; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_WINDCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_WINDCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
