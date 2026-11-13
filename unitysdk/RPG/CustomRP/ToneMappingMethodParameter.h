#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_TONEMAPPINGMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x2074F120)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ToneMappingMethodParameter_TypeDefinitionIndex = 38777;

	class ToneMappingMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TONEMAPPINGMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
