#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace UnityEngine::Rendering
{
	struct alignas(8) BatchRendererCullingOutput
	{
		::Unity::Jobs::JobHandle cullingJobsFence; // 0x10
		::PVOID cullingPlanes; // 0x20
		::PVOID batchVisibility; // 0x28
		::PVOID visibleIndices; // 0x30
		::System::Int32 cullingPlanesCount; // 0x38
		::System::Int32 batchVisibilityCount; // 0x3C
		::System::Int32 visibleIndicesCount; // 0x40
	};
}
