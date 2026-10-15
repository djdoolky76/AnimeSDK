#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::TerrainAPI
{
	enum class TerrainUtility_TerrainMap_ErrorCode : ::System::Int32
	{
		OK = 0,
		Overlapping = 1,
		SizeMismatch = 4,
		EdgeAlignmentMismatch = 8,
	};
}
