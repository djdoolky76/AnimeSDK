#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_ALLBLOOMSTAGEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B32E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AllBloomStageParameter_TypeDefinitionIndex = 38718;

	class AllBloomStageParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ALLBLOOMSTAGEPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
