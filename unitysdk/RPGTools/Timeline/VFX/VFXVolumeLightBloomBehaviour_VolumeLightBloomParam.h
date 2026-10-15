#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPGTools::Timeline::VFX
{
	struct alignas(4) VFXVolumeLightBloomBehaviour_VolumeLightBloomParam
	{
		::System::Single LightRadius; // 0x10
		::UnityEngine::Color ScatterColor; // 0x14
		::System::Single ScatterIntensity; // 0x24
		::System::Single FalloffPower; // 0x28
	};
}
