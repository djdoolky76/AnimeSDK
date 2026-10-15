#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	enum class QuickBase_DirectAction : ::System::Int32
	{
		None = 0,
		Rotate = 1,
		RotateLocal = 2,
		Translate = 3,
		TranslateLocal = 4,
		Scale = 5,
	};
}
