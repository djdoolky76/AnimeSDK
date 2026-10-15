#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations
{
	struct alignas(4) AnimationHumanStream
	{
		::System::IntPtr stream; // 0x10
	};
}
