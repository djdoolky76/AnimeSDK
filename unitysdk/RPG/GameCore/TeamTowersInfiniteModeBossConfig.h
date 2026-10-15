#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersBossConfig; }
namespace RPG::GameCore { class TeamTowersInfiniteModeBossConfig; }

#define RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7D4A0)
#define RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7D2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersInfiniteModeBossConfig_TypeDefinitionIndex = 18951;

	class TeamTowersInfiniteModeBossConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BossID; // 0x10
		::System::Single BrickDownNormalSpeed; // 0x14
		::System::Single BrickDownMaxSpeed; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TeamTowersBossConfig* BossConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersInfiniteModeBossConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersInfiniteModeBossConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
