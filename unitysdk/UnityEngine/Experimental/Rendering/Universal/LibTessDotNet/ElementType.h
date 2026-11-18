#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ElementType_TypeDefinitionIndex = 26531;

	enum class ElementType : ::System::Int32
	{
		ConnectedPolygons = 1,
		BoundaryContours = 2,
		Polygons = 0,
	};
}
