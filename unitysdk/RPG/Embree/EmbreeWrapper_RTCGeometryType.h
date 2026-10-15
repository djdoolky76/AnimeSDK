#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Embree
{
	enum class EmbreeWrapper_RTCGeometryType : ::System::Int32
	{
		RTC_GEOMETRY_TYPE_TRIANGLE = 0,
		RTC_GEOMETRY_TYPE_QUAD = 1,
		RTC_GEOMETRY_TYPE_SUBDIVISION = 8,
	};
}
