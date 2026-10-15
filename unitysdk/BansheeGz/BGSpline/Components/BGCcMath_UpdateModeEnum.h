#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	enum class BGCcMath_UpdateModeEnum : ::System::Int32
	{
		Always = 0,
		AabbVisible = 1,
		RendererVisible = 2,
	};
}
