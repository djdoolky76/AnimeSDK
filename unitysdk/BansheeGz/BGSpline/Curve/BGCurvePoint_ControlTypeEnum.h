#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	enum class BGCurvePoint_ControlTypeEnum : ::System::Int32
	{
		Absent = 0,
		BezierSymmetrical = 1,
		BezierIndependant = 2,
	};
}
