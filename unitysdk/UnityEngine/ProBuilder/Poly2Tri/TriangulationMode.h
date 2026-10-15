#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::Poly2Tri
{
	enum class TriangulationMode : ::System::Int32
	{
		Unconstrained = 0,
		Constrained = 1,
		Polygon = 2,
	};
}
