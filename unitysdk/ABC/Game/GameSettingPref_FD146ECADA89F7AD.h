#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingGroupData; }

#define ABC_GAME_GAMESETTINGPREF_FD146ECADA89F7AD_E0FF0418229E2151_OFFSET UNITYSDK_OFFSET(0x1EC4E70)
#define ABC_GAME_GAMESETTINGPREF_FD146ECADA89F7AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GameSettingPref_FD146ECADA89F7AD_TypeDefinitionIndex = 6791;

	class GameSettingPref_FD146ECADA89F7AD : public ::System::Object
	{
	public:
		::ABC::Game::GameSettingGroupData* E113D8DD12019548; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_FD146ECADA89F7AD__CTOR_OFFSET))(this);
		}

		::System::Boolean E0FF0418229E2151(::ABC::Game::GameSettingGroupData* F591F9C7707AAEEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingGroupData*))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_FD146ECADA89F7AD_E0FF0418229E2151_OFFSET))(this, F591F9C7707AAEEB);
		}
	};
}
