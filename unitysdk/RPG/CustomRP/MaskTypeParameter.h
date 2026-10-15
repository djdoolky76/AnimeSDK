#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_MASKTYPEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36F80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaskTypeParameter_TypeDefinitionIndex = 37818;

	class MaskTypeParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MASKTYPEPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
