#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_MASKTYPEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x198CFD10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaskTypeParameter_TypeDefinitionIndex = 38747;

	class MaskTypeParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MASKTYPEPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
