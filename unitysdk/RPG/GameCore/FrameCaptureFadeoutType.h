#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameCaptureFadeoutType_TypeDefinitionIndex = 25193;

	enum class FrameCaptureFadeoutType : ::System::Int32
	{
		Default = 0,
		Dissolve = 1,
		Nihilux = 2,
	};
}
