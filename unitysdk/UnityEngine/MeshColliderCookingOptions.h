#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class MeshColliderCookingOptions : ::System::Int32
	{
		None = 0,
		InflateConvexMesh = 1,
		CookForFasterSimulation = 2,
		EnableMeshCleaning = 4,
		WeldColocatedVertices = 8,
		UseFastMidphase = 16,
	};
}
