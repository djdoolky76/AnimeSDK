#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoHollowResultPageConfig_LightConfig.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MONOHOLLOWRESULTPAGECONFIG_RESUTLLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0xE547190)

inline static constexpr unsigned int MonoHollowResultPageConfig_ResutlLights_TypeDefinitionIndex = 63410;

class MonoHollowResultPageConfig_ResutlLights : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* peakToEndCurve; // 0x10
	::UnityEngine::AnimationCurve* startToPeakCurve; // 0x18
	::MonoHollowResultPageConfig_LightConfig end; // 0x20
	::System::Single peakToEndDuration; // 0x68
	::System::Single startToPeakDuration; // 0x6C
	::MonoHollowResultPageConfig_LightConfig peakVal; // 0x70
	::MonoHollowResultPageConfig_LightConfig start; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_RESUTLLIGHTS__CTOR_OFFSET))(this);
	}
};
