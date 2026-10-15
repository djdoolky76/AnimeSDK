#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFF13A0)

namespace RPG::Client
{
	class RogueTournHandbookHexCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
