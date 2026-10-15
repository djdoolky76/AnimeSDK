#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKRANDOMEVENTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFF13B0)

namespace RPG::Client
{
	class RogueTournHandbookRandomEventCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKRANDOMEVENTCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
