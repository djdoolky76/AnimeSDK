#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlendModes_TypeDefinitionIndex = 27393;

	enum class BlendModes : ::System::Int32
	{
		Overlay = 3,
		AlphaBlended = 0,
		Add = 1,
		Multiply = 2,
	};
}
