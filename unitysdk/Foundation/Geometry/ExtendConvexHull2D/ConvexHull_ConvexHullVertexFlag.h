#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertexFlag_TypeDefinitionIndex = 8897;

	enum class ConvexHull_ConvexHullVertexFlag : ::System::Int32
	{
		LineMask = 60,
		Line3 = 32,
		None = 0,
		EllipseBits = 2,
		EllipseMask = 3,
		Ellipse0 = 1,
		TotalBits = 6,
		Ellipse1 = 2,
		Line0 = 4,
		LineBits = 4,
		Line1 = 8,
		Line2 = 16,
	};
}
