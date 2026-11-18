#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ParticleLightsCullingOptions_TypeDefinitionIndex = 5707;

	struct alignas(4) ParticleLightsCullingOptions
	{
		::System::Boolean enableParticleLightCountOptimize; // 0x10
		::System::Boolean disableCachedAdditionalLightData; // 0x11
	};
}
