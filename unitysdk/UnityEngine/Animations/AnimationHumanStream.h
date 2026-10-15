#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationHumanStream_TypeDefinitionIndex = 5748;

	struct alignas(4) AnimationHumanStream
	{
		::System::IntPtr stream; // 0x10
	};
}
