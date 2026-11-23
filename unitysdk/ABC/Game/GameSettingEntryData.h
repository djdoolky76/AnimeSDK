#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_GAME_GAMESETTINGENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GameSettingEntryData_TypeDefinitionIndex = 8840;

	class GameSettingEntryData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGENTRYDATA__CTOR_OFFSET))(this);
		}
	};
}
