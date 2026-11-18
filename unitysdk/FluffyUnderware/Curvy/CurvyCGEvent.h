#pragma once
#include "unitysdk/unitysdk.h"

#define FLUFFYUNDERWARE_CURVY_CURVYCGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB0510)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyCGEvent_TypeDefinitionIndex = 37543;

	class CurvyCGEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCGEVENT__CTOR_OFFSET))(this);
		}
	};
}
