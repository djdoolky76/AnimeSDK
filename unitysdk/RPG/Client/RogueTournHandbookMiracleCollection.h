#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLECOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFF1390)

namespace RPG::Client
{
	class RogueTournHandbookMiracleCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLECOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
