#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	enum class NavMeshCollectGeometry : ::System::Int32
	{
		RenderMeshes = 0,
		PhysicsColliders = 1,
	};
}
