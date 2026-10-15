#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_GAUSSIANBLURGRADUALPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC04E10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GaussianBlurGradualParameter_TypeDefinitionIndex = 37814;

	class GaussianBlurGradualParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANBLURGRADUALPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
