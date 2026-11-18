#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SRPBatcherProfiler_SRPBMarkers_TypeDefinitionIndex = 26631;

	enum class SRPBatcherProfiler_SRPBMarkers : ::System::Int32
	{
		kVolumetricFog = 13,
		kStdShadowDraw = 1,
		kSRPSetRenderTarget = 9,
		kSRPBRenderApplyShader = 7,
		kStdShadowApplyShader = 6,
		kRenderIntoDBuffer = 14,
		kSMAA = 12,
		kStdRenderDraw = 0,
		kPrepareBatchRendererGroupNodes = 10,
		kNAPRenderTransparents = 15,
		kSRPBRenderDraw = 2,
		kSRPBShadowApplyShader = 8,
		kNapBloom = 11,
		kStdRenderApplyShader = 5,
		kSRPBShadowDraw = 3,
		kRenderThreadIdle = 4,
	};
}
