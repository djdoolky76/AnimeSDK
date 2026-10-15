#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersInfiniteModeBossConfig; }
namespace RPG::GameCore { class TeamTowersInfiniteModeConfig; }

#define RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7D5A0)
#define RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7D4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersInfiniteModeConfig_TypeDefinitionIndex = 18952;

	class TeamTowersInfiniteModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersInfiniteModeBossConfig*>* BossConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersInfiniteModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersInfiniteModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
