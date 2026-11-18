#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightShape_TypeDefinitionIndex = 27173;

	enum class LightShape : ::System::UInt32
	{
		Point = 0,
		UniformSphere = 6,
		SpotHardEdgeSingle = 3,
		SpotSoftEdge = 1,
		AreaHardEdge = 4,
		AreaSoftEdge = 7,
		SpotHardEdge = 2,
		UniformBox = 5,
	};
}
