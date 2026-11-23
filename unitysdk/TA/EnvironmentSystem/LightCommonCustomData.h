#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_LIGHTCOMMONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2874EB0)
#define TA_ENVIRONMENTSYSTEM_LIGHTCOMMONCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2874FC0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int LightCommonCustomData_TypeDefinitionIndex = 16085;

	class LightCommonCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* globalEmissionStrength; // 0x38

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_LIGHTCOMMONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_LIGHTCOMMONCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
