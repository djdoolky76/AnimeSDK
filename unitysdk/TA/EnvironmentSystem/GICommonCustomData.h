#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ES2DLut; }
namespace TA::EnvironmentSystem { class ESColor; }
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESRamp; }

#define TA_ENVIRONMENTSYSTEM_GICOMMONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28C81F0)
#define TA_ENVIRONMENTSYSTEM_GICOMMONCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28C8400)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int GICommonCustomData_TypeDefinitionIndex = 16319;

	class GICommonCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESColor* ambientColor; // 0x38
		::TA::EnvironmentSystem::ES2DLut* charaAmbientLight; // 0x40
		::TA::EnvironmentSystem::ES2DLut* charaAmbientShadow; // 0x48
		::TA::EnvironmentSystem::ESRamp* charaDiffusion; // 0x50
		::TA::EnvironmentSystem::ESFloat* aoIntensity; // 0x58

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GICOMMONCUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GICOMMONCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
