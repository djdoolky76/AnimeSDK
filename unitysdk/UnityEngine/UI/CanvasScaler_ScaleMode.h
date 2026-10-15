#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	enum class CanvasScaler_ScaleMode : ::System::Int32
	{
		ConstantPixelSize = 0,
		ScaleWithScreenSize = 1,
		ConstantPhysicalSize = 2,
	};
}
