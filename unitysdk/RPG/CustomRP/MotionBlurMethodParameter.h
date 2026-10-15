#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_MOTIONBLURMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC09BF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurMethodParameter_TypeDefinitionIndex = 37830;

	class MotionBlurMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
