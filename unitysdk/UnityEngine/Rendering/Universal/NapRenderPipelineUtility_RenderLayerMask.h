#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderPipelineUtility_RenderLayerMask_TypeDefinitionIndex = 26289;

	enum class NapRenderPipelineUtility_RenderLayerMask : ::System::Int32
	{
		LayerForDynamicLight = 2,
		LayerForWindAndDetailLayer = 4,
		LayerForStaticLightMap = 1,
		LayerForStencilAlpha = 8,
	};
}
