#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) SceneViewDrawModeSetting
	{
		::System::Int32 DrawMode; // 0x10
		::System::Int32 OverDrawOpaqueMat; // 0x14
		::System::Int32 OverDrawTransparentMat; // 0x18
		::System::Int32 MipMapMat; // 0x1C
		::System::Int32 CsmVisualizerMat; // 0x20
		::System::Int32 ClusterLightingDebugMat; // 0x24
		::System::Int32 ClusterLightingDebugCompute; // 0x28
		::System::Int32 CaptureBoundaryMat; // 0x2C
	};
}
