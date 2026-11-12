#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_ROGUETOURNHANDBOOKFORMULACOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xEA5B680)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookFormulaCollection_TypeDefinitionIndex = 69599;

	class RogueTournHandbookFormulaCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKFORMULACOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
