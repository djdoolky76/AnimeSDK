#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersMobileInputConfig; }

#define RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7DC60)
#define RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7CD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersMobileInputConfig_TypeDefinitionIndex = 18945;

	class TeamTowersMobileInputConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SwipeThreshold; // 0x10
		::System::Single DownThreshold; // 0x14
		::System::Single DownAngleThreshold; // 0x18
		::System::UInt32 MoveProtectTimeMs; // 0x1C
		::System::UInt32 MoveRatio; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersMobileInputConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersMobileInputConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
