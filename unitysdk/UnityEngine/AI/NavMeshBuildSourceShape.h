#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	enum class NavMeshBuildSourceShape : ::System::Int32
	{
		Mesh = 0,
		Terrain = 1,
		Box = 2,
		Sphere = 3,
		Capsule = 4,
		ModifierBox = 5,
	};
}
