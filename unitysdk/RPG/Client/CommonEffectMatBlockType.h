#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CommonEffectMatBlockType : ::System::Int32
	{
		Float = 0,
		Color = 1,
		Vector = 2,
		Texture = 3,
		Keyword = 4,
		Compound = 5,
	};
}
