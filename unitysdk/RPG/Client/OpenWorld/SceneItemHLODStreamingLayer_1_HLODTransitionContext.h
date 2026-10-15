#pragma once
#include "unitysdk/unitysdk.h"
class OIDDJJLHGKO;

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionContext_TypeDefinitionIndex = 73824;

	template <typename T>
	struct alignas(8) SceneItemHLODStreamingLayer_1_HLODTransitionContext
	{
		::OIDDJJLHGKO* CommonCtx; // 0x0
		::System::Boolean IsMainThread; // 0x0
		::System::Boolean ForceStreaming; // 0x0
		::System::Boolean DelayWatch; // 0x0
	};
}
