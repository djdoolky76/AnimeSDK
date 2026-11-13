#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ProceduralShapeType_TypeDefinitionIndex = 74786;

	enum class ProceduralShapeType : ::System::Int32
	{
		Rectangle = 0,
		Circle = 1,
		Polygon = 2,
	};
}
