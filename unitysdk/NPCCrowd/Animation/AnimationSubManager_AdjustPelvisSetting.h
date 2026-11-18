#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustPelvisSetting_TypeDefinitionIndex = 81136;

	struct alignas(4) AnimationSubManager_AdjustPelvisSetting
	{
		::HHDPDELCDNI LeftFoot; // 0x10
		::HHDPDELCDNI RightFoot; // 0x14
		::HHDPDELCDNI Pelvis; // 0x18
		::System::Single StartAdjustLegRatio; // 0x1C
	};
}
