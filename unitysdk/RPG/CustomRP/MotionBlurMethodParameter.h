#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_MOTIONBLURMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC37E60)

namespace RPG::CustomRP
{
	class MotionBlurMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
