#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE6C20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookPersonaStyleGiftCollection_TypeDefinitionIndex = 67661;

	class RogueTournHandbookPersonaStyleGiftCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
