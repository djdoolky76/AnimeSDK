#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int EIntersectionResult_TypeDefinitionIndex = 8868;

	enum class EIntersectionResult : ::System::Int32
	{
		InfiniteIntersection = 4,
		Invalid = 0,
		OneIntersection = 2,
		NoIntersection = 1,
		TwoIntersection = 3,
	};
}
