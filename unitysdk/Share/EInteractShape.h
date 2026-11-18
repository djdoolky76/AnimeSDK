#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EInteractShape_TypeDefinitionIndex = 12717;

	enum class EInteractShape : ::System::Int16
	{
		Sphere = 1,
		Cube = 0,
		Sector = 2,
	};
}
