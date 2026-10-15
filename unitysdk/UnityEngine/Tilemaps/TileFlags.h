#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Tilemaps
{
	enum class TileFlags : ::System::Int32
	{
		None = 0,
		LockColor = 1,
		LockTransform = 2,
		InstantiateGameObjectRuntimeOnly = 4,
		LockAll = 3,
	};
}
