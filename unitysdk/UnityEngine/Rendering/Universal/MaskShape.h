#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaskShape_TypeDefinitionIndex = 27037;

	enum class MaskShape : ::System::UInt32
	{
		Ellipsoid = 1,
		OBB = 0,
	};
}
