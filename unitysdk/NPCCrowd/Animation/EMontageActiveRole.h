#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int EMontageActiveRole_TypeDefinitionIndex = 57125;

	enum class EMontageActiveRole : ::System::Int32
	{
		Fallback = 1,
		None = 0,
		Overlay = 2,
		External = 3,
	};
}
