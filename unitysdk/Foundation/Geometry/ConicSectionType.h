#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSectionType_TypeDefinitionIndex = 8713;

	enum class ConicSectionType : ::System::Int32
	{
		IntersectingLines = 2,
		ParallelLines = 1,
		SingularPoint = 0,
		Hyperbola = 5,
		Parabola = 4,
		Ellipse = 3,
	};
}
