#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_STARCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x287D8A0)
#define TA_ENVIRONMENTSYSTEM_STARCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x287DBC0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int StarCustomData_TypeDefinitionIndex = 16073;

	class StarCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* starBrightness; // 0x38
		::TA::EnvironmentSystem::ESFloat* starDensity; // 0x40
		::TA::EnvironmentSystem::ESColor* starsColor; // 0x48
		::TA::EnvironmentSystem::ESFloat* starDirHorizenFade; // 0x50
		::TA::EnvironmentSystem::ESFloat* starRotationSpeed; // 0x58
		::TA::EnvironmentSystem::ESFloat* starTilling; // 0x60
		::TA::EnvironmentSystem::ESFloat* twinkleAmount; // 0x68
		::TA::EnvironmentSystem::ESFloat* twinkleSpeed; // 0x70
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* starsMap; // 0x78
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* starsNoise; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_STARCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_STARCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
