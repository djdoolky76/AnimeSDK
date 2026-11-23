#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESVector2; }
namespace TA::EnvironmentSystem { template <typename T> class ESTex_1; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_RAINRIPPLECUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x2865070)
#define TA_ENVIRONMENTSYSTEM_RAINRIPPLECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28652D0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int RainRippleCustomData_TypeDefinitionIndex = 16023;

	class RainRippleCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* rainRippleUniformTiling; // 0x38
		::TA::EnvironmentSystem::ESVector2* rainRippleNoiseTiling; // 0x40
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* rainRippleTex; // 0x48
		::TA::EnvironmentSystem::ESTex_1<::UnityEngine::Texture2D*>* rainRippleNoiseTex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_RAINRIPPLECUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_RAINRIPPLECUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
