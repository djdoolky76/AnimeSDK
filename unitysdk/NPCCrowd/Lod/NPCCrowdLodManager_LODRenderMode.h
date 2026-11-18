#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderMode_TypeDefinitionIndex = 66189;

	enum class NPCCrowdLodManager_LODRenderMode : ::System::Byte
	{
		GPU = 1,
		GPUSimpleModel = 2,
		Hide = 3,
		CPU = 0,
	};
}
