#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKCommandType_TypeDefinitionIndex = 87045;

	enum class FNPCCrowdLookAtIKCommandType : ::System::Byte
	{
		ClearTarget = 0,
		ResolveTarget = 1,
	};
}
