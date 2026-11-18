#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameLoopMode_TypeDefinitionIndex = 86641;

	enum class MontageSeqFrameLoopMode : ::System::Byte
	{
		Once = 1,
		Loop = 0,
	};
}
