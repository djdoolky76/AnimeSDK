#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ActionContext.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionWrapperForJob_TypeDefinitionIndex = 92878;

	struct alignas(4) AIActionWrapperForJob
	{
		::NPCCrowd::AI::ActionContext context; // 0x10
		::System::Boolean disableTick; // 0xE0
	};
}
