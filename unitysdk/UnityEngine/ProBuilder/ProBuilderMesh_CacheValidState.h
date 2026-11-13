#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_CacheValidState_TypeDefinitionIndex = 45480;

	enum class ProBuilderMesh_CacheValidState : ::System::Byte
	{
		SharedVertex = 1,
		SharedTexture = 2,
	};
}
