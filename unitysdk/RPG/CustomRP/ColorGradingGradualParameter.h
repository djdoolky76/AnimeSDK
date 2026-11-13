#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_COLORGRADINGGRADUALPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E3010)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingGradualParameter_TypeDefinitionIndex = 38725;

	class ColorGradingGradualParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGGRADUALPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
