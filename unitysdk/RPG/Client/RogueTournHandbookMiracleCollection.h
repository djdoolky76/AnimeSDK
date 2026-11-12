#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLECOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xEA5B690)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookMiracleCollection_TypeDefinitionIndex = 69600;

	class RogueTournHandbookMiracleCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLECOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
