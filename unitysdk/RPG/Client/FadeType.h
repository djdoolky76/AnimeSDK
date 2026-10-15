#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FadeType : ::System::Int32
	{
		Opacity = 0,
		Disppear = 1,
		Animator = 2,
		Animation = 3,
		Dissolve = 4,
	};
}
