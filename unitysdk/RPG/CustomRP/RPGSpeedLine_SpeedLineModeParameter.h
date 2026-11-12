#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_RPGSPEEDLINE_SPEEDLINEMODEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0A3D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGSpeedLine_SpeedLineModeParameter_TypeDefinitionIndex = 38774;

	class RPGSpeedLine_SpeedLineModeParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSPEEDLINE_SPEEDLINEMODEPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
