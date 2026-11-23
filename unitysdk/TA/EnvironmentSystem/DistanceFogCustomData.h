#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESBool; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_DISTANCEFOGCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C5DC0)
#define TA_ENVIRONMENTSYSTEM_DISTANCEFOGCUSTOMDATA_GETDISTANCEFOGENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x28C6060)
#define TA_ENVIRONMENTSYSTEM_DISTANCEFOGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C61A0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int DistanceFogCustomData_TypeDefinitionIndex = 16344;

	class DistanceFogCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* linearFogColor; // 0x38
		::TA::EnvironmentSystem::ESFloat* distanceFogDensity; // 0x40
		::TA::EnvironmentSystem::ESFloat* distanceFogStartDistance; // 0x48
		::TA::EnvironmentSystem::ESBool* enableLinearDistanceFog; // 0x50
		::TA::EnvironmentSystem::ESFloat* distanceFogEndDistance; // 0x58

		::System::Single GetDistanceFogEndDistance(::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_DISTANCEFOGCUSTOMDATA_GETDISTANCEFOGENDDISTANCE_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_DISTANCEFOGCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_DISTANCEFOGCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
