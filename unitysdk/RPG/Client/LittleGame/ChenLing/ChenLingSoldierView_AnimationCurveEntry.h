#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::LittleGame::ChenLing
{
	struct alignas(8) ChenLingSoldierView_AnimationCurveEntry
	{
		::System::String* Key; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18
	};
}
