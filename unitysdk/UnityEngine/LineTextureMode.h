#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LineTextureMode_TypeDefinitionIndex = 5253;

	enum class LineTextureMode : ::System::Int32
	{
		Stretch = 0,
		Tile = 1,
		DistributePerSegment = 2,
		RepeatPerSegment = 3,
		TileInv = 4,
		Fixed = 5,
	};
}
