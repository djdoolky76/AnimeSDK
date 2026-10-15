#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatEffectSubType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerEffect; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613F50)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613F60)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613F00)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_TriggerEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatEffectSubType SubType; // 0x10
		::System::UInt32 EffectID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
