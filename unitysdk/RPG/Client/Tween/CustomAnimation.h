#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::Tween
{
	struct alignas(8) CustomAnimation
	{
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
	};
}
