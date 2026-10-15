#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_MOTIONBLURQUALITYPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC37EB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurQualityParameter_TypeDefinitionIndex = 37831;

	class MotionBlurQualityParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURQUALITYPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
