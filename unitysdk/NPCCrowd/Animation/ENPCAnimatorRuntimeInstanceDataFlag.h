#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCAnimatorRuntimeInstanceDataFlag_TypeDefinitionIndex = 75106;

	enum class ENPCAnimatorRuntimeInstanceDataFlag : ::System::Byte
	{
		DrivenByStateMachine = 4,
		IsStarted = 2,
		None = 0,
		Looping = 1,
	};
}
