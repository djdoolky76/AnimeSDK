#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPreUpdateProcessor_BlendShapeRefreshResult_TypeDefinitionIndex = 81236;

	enum class AnimationSubManager_CollectPreUpdateProcessor_BlendShapeRefreshResult : ::System::Int32
	{
		Retry = 1,
		Completed = 0,
		Failed = 2,
	};
}
