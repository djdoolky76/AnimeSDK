#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class ProBuilderMesh_CacheValidState : ::System::Byte
	{
		SharedVertex = 1,
		SharedTexture = 2,
	};
}
