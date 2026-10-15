#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	enum class BGCurve_ForceChangedEventModeEnum : ::System::Int32
	{
		Off = 0,
		EditorOnly = 1,
		EditorAndRuntime = 2,
	};
}
