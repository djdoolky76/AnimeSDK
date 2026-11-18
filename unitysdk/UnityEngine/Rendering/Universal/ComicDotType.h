#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComicDotType_TypeDefinitionIndex = 26994;

	enum class ComicDotType : ::System::Int32
	{
		Line = 1,
		Quad = 4,
		Custom = 7,
		Dot = 2,
		None = 0,
		Triangle = 3,
		Octagon = 6,
		Star = 5,
	};
}
