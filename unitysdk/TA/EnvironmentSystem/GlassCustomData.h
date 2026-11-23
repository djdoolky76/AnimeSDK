#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }

#define TA_ENVIRONMENTSYSTEM_GLASSCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x288A630)
#define TA_ENVIRONMENTSYSTEM_GLASSCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x288A800)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int GlassCustomData_TypeDefinitionIndex = 16177;

	class GlassCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* GlassColor; // 0x38
		::TA::EnvironmentSystem::ESFloat* GlassColorIntensity; // 0x40
		::TA::EnvironmentSystem::ESColor* InteriorCurtainColor; // 0x48
		::TA::EnvironmentSystem::ESFloat* InteriorCurtainColorIntensity; // 0x50

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GLASSCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GLASSCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
