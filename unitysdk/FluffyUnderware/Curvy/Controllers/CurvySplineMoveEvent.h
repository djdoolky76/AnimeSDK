#pragma once
#include "unitysdk/unitysdk.h"

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE6E000)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvySplineMoveEvent_TypeDefinitionIndex = 37727;

	class CurvySplineMoveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENT__CTOR_OFFSET))(this);
		}
	};
}
