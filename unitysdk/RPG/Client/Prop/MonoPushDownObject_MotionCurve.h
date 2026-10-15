#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::Prop
{
	struct alignas(8) MonoPushDownObject_MotionCurve
	{
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Single duration; // 0x18
		::System::Single value; // 0x1C
	};
}
