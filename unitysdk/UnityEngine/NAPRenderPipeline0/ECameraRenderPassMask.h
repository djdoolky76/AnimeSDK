#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ECameraRenderPassMask_TypeDefinitionIndex = 5861;

	enum class ECameraRenderPassMask : ::System::UInt32
	{
		None = 0,
		Silhouette = 1,
		EnemyPointToneAndOutline = 2,
		CharacterStencilShadow = 4,
		SceneLocalLight = 8,
		All = 4294967295,
	};
}
