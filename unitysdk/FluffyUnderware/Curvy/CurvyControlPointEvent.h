#pragma once
#include "unitysdk/unitysdk.h"

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLPOINTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F69A770)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControlPointEvent_TypeDefinitionIndex = 37625;

	class CurvyControlPointEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLPOINTEVENT__CTOR_OFFSET))(this);
		}
	};
}
