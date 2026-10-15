#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CustomLineType : ::System::Int32
	{
		BrokenLine = 0,
		BezierCurve = 1,
		BSplineCurve = 2,
		Count = 3,
	};
}
