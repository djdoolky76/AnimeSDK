#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6102C0)
#define RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6101B0)

namespace RPG::GameCore
{
	class DiceCombatPresetTurnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatPresetTurnActorConfig* AttackerPreset; // 0x10
		::RPG::GameCore::DiceCombatPresetTurnActorConfig* DefenderPreset; // 0x18
		::RPG::GameCore::DiceCombatPresetTurnActorConfig* TeamMatePreset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPresetTurnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPresetTurnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
