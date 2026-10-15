#pragma once
#include "unitysdk/unitysdk.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E9070)

namespace BansheeGz::BGSpline::Components
{
	class BGCcCursorChangeLinear_PointReachedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
