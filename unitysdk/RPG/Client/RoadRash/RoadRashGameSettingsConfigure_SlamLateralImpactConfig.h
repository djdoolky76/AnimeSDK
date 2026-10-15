#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) RoadRashGameSettingsConfigure_SlamLateralImpactConfig
	{
		::System::Single StartValue; // 0x10
		::System::Single EndValue; // 0x14
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* Curve; // 0x20
	};
}
