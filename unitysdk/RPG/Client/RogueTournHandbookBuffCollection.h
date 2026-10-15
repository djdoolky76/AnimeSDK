#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE6140)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookBuffCollection_TypeDefinitionIndex = 67654;

	class RogueTournHandbookBuffCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
