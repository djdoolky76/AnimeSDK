#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCLUDEFROMMENU_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FF690)

namespace BansheeGz::BGSpline::Curve
{
	class BGCc_CcExcludeFromMenu : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCLUDEFROMMENU_CTOR_OFFSET))(this);
		}

	};
}
