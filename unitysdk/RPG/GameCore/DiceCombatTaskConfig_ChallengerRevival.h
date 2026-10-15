#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChallengerRevival; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6115B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6115C0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D611520)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_ChallengerRevival : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
