#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VideoTextureBehavior_VideoCommandType_TypeDefinitionIndex = 75337;

	enum class VideoTextureBehavior_VideoCommandType : ::System::Int32
	{
		None = 0,
		Play = 1,
		Stop = 2,
	};
}
