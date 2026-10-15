#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_ALLBLOOMSTAGEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEDB10)

namespace RPG::CustomRP
{
	class AllBloomStageParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ALLBLOOMSTAGEPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
