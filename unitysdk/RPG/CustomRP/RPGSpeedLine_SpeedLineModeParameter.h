#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_RPGSPEEDLINE_SPEEDLINEMODEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC62EE0)

namespace RPG::CustomRP
{
	class RPGSpeedLine_SpeedLineModeParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSPEEDLINE_SPEEDLINEMODEPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
