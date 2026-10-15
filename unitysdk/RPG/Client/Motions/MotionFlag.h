#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MotionFlag_TypeDefinitionIndex = 73536;

	enum class MotionFlag : ::System::UInt16
	{
		Transform = 0,
		Text = 1,
	};
}
