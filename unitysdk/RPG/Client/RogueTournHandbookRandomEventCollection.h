#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKRANDOMEVENTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEADC90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookRandomEventCollection_TypeDefinitionIndex = 69602;

	class RogueTournHandbookRandomEventCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKRANDOMEVENTCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
