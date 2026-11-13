#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEADC80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexCollection_TypeDefinitionIndex = 69601;

	class RogueTournHandbookHexCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
