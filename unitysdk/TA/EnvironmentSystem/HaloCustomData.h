#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_HALOCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x288A970)
#define TA_ENVIRONMENTSYSTEM_HALOCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x288AA90)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int HaloCustomData_TypeDefinitionIndex = 16189;

	class HaloCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* haloSize; // 0x38
		::TA::EnvironmentSystem::ESColor* haloColor; // 0x40
		::TA::EnvironmentSystem::ESFloat* haloIntensity; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HALOCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_HALOCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
