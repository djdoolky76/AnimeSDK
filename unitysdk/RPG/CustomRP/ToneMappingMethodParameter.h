#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_TONEMAPPINGMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC794B0)

namespace RPG::CustomRP
{
	class ToneMappingMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TONEMAPPINGMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
