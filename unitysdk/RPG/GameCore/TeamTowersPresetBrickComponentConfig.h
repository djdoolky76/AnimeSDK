#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersBrickModifierTypeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersPresetBrickComponentConfig; }

#define RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7DDC0)
#define RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7DDD0)
#define RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7DD70)

namespace RPG::GameCore
{
	class TeamTowersPresetBrickComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamTowersBrickModifierTypeConfig ModifierType; // 0x14
		::System::UInt32 IvyTimes; // 0x18
		::System::UInt32 IvyID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersPresetBrickComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPRESETBRICKCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
