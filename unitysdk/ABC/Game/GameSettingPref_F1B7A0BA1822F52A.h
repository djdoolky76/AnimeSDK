#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FE2C716718BC4ED1.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingGroupData; }

#define ABC_GAME_GAMESETTINGPREF_F1B7A0BA1822F52A_A5DD7DE60654926C_OFFSET UNITYSDK_OFFSET(0x17A9AF0)
#define ABC_GAME_GAMESETTINGPREF_F1B7A0BA1822F52A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GameSettingPref_F1B7A0BA1822F52A_TypeDefinitionIndex = 6790;

	class GameSettingPref_F1B7A0BA1822F52A : public ::System::Object
	{
	public:
		::E68AA4EB51923C98::FE2C716718BC4ED1 E8E45CE0AA06991E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_F1B7A0BA1822F52A__CTOR_OFFSET))(this);
		}

		::System::Boolean A5DD7DE60654926C(::ABC::Game::GameSettingGroupData* F591F9C7707AAEEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingGroupData*))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_F1B7A0BA1822F52A_A5DD7DE60654926C_OFFSET))(this, F591F9C7707AAEEB);
		}
	};
}
