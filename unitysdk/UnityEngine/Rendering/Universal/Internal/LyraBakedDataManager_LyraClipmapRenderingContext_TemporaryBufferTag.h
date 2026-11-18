#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag_TypeDefinitionIndex = 26733;

	enum class LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag : ::System::Int32
	{
		DummyPageToSectorCoord = 5,
		PendingPagesAllocator = 2,
		UpdateRegions = 0,
		TempBufferCount = 8,
		PendingPages = 1,
		IndirectArgs = 3,
		BorderBuffer = 6,
		PageToSectorCoord = 4,
		EmissionBorderBuffer = 7,
	};
}
