#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFF13D0)

namespace RPG::Client
{
	class RogueTournHandbookPersonaStyleGiftCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
