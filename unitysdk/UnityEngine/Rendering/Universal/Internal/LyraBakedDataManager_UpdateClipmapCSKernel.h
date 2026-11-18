#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_UpdateClipmapCSKernel_TypeDefinitionIndex = 26730;

	enum class LyraBakedDataManager_UpdateClipmapCSKernel : ::System::Int32
	{
		kFillBorders = 17,
		kMinKernelCount = 29,
		kClearTexture = 26,
		kPropagateKernelCount = 1,
		kUpdatePagesKernelCount = 6,
		kCollectPagesKernelCount = 2,
		kUpdatePages = 5,
		kFillBordersKernelCount = 9,
		kCollectPages = 0,
		kClearPages = 11,
		kClearPagesKernelCount = 5,
		kInitUpdatePagesIndirectArgs = 2,
		kPropagate = 16,
		kInitUpdatePagesIndirectArgsKernelCount = 3,
		kClearTextureKernelCount = 3,
	};
}
