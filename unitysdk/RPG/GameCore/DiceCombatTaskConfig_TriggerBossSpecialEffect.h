#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossSpecialEffectType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerBossSpecialEffect; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C3D90)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3C3DA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3C3D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerBossSpecialEffect_TypeDefinitionIndex = 16199;

	class DiceCombatTaskConfig_TriggerBossSpecialEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::BossSpecialEffectType Type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
