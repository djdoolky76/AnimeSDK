#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameTargetType_TypeDefinitionIndex = 59132;

	enum class MontageSeqFrameTargetType : ::System::Byte
	{
		None = 0,
		Part = 1,
		Accessory = 2,
	};
}
