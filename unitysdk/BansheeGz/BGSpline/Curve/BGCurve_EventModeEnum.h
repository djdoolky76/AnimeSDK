#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	enum class BGCurve_EventModeEnum : ::System::Int32
	{
		Update = 0,
		LateUpdate = 1,
		NoEvents = 2,
	};
}
