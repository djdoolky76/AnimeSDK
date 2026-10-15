#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	struct alignas(8) Effect_AfterImageNew_MaterialProperty
	{
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
	};
}
