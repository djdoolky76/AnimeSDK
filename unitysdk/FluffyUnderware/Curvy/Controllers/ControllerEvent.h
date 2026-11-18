#pragma once
#include "unitysdk/unitysdk.h"

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONTROLLEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F313DC0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int ControllerEvent_TypeDefinitionIndex = 37656;

	class ControllerEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONTROLLEREVENT__CTOR_OFFSET))(this);
		}
	};
}
