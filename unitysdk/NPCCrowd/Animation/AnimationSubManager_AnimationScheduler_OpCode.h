#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OpCode_TypeDefinitionIndex = 81197;

	enum class AnimationSubManager_AnimationScheduler_OpCode : ::System::Byte
	{
		Dispatch = 1,
		Complete = 2,
		Process = 0,
	};
}
