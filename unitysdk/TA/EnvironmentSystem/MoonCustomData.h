#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESRamp; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_MOONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x288F8E0)
#define TA_ENVIRONMENTSYSTEM_MOONCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x288FC10)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int MoonCustomData_TypeDefinitionIndex = 16188;

	class MoonCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* moonSize; // 0x38
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* moonTex; // 0x40
		::TA::EnvironmentSystem::ESRamp* moonColorRampTex; // 0x48
		::TA::EnvironmentSystem::ESFloat* moonPhase; // 0x50
		::TA::EnvironmentSystem::ESFloat* moonPhaseSmoothness; // 0x58
		::TA::EnvironmentSystem::ESFloat* moonFresnelWidth; // 0x60
		::TA::EnvironmentSystem::ESFloat* moonFresnelSmoothness; // 0x68
		::TA::EnvironmentSystem::ESColor* moonFresnelColor; // 0x70
		::TA::EnvironmentSystem::ESFloat* moonIntensity; // 0x78
		::TA::EnvironmentSystem::ESFloat* moonHaloRange; // 0x80
		::TA::EnvironmentSystem::ESColor* moonHaloColor; // 0x88
		::TA::EnvironmentSystem::ESFloat* moonHaloColorIntensity; // 0x90
		::TA::EnvironmentSystem::ESFloat* moonAlpha; // 0x98

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MOONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MOONCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
