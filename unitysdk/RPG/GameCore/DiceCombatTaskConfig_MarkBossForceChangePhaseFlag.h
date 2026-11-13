#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkBossForceChangePhaseFlag; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C2620)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3C2630)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3C2590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkBossForceChangePhaseFlag_TypeDefinitionIndex = 16237;

	class DiceCombatTaskConfig_MarkBossForceChangePhaseFlag : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKBOSSFORCECHANGEPHASEFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
