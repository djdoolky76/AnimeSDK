#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class ColliderType : ::System::Int32
	{
		None = 0,
		BoxCollider = 1,
		MeshCollider = 2,
	};
}
