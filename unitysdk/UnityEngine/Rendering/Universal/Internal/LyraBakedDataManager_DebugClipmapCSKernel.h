#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_DebugClipmapCSKernel_TypeDefinitionIndex = 26746;

	enum class LyraBakedDataManager_DebugClipmapCSKernel : ::System::Int32
	{
		kInitSceneVoxelVisualizationBuffer = 0,
		kDiffSceneVoxelClipmap = 3,
		kUnpackSectorSceneVoxelForDebug = 1,
		kMinKernelCount = 10,
		kFullCompressSceneVoxelClipmap = 2,
		kClearVoxelVisualizationIndirectDrawBuffer = 9,
	};
}
