#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TransformScreenAdapter_ScreenAdaptionTarget : ::System::Int32
	{
		None = 0,
		Position = 1,
		Scale = 2,
		Rotation = 4,
	};
}
