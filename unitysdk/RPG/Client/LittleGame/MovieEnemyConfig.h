#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/EnemyType.h"
#include "unitysdk/RPG/Client/LittleGame/PlacementConfig.h"

#define RPG_CLIENT_LITTLEGAME_MOVIEENEMYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA08C30)

namespace RPG::Client::LittleGame
{
	class MovieEnemyConfig : public ::RPG::Client::LittleGame::PlacementConfig
	{
	public:
		::RPG::Client::LittleGame::EnemyType EnemyType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEENEMYCONFIG_CTOR_OFFSET))(this);
		}

	};
}
