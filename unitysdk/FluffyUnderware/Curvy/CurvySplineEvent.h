#pragma once
#include "unitysdk/unitysdk.h"

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F764160)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineEvent_TypeDefinitionIndex = 37620;

	class CurvySplineEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEEVENT__CTOR_OFFSET))(this);
		}
	};
}
