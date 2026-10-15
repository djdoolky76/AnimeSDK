#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RecordPropertyType : ::System::Int32
	{
		Acitve = 0,
		LightWeightActive = 1,
		ComponentEnable = 2,
		CanvasGroupAlpha = 3,
		ImageColor = 4,
	};
}
