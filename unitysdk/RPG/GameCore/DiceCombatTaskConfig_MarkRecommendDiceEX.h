#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDiceEX; }
namespace RPG::GameCore { class MarkRecommendDiceItem; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612740)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612750)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6126F0)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_MarkRecommendDiceEX : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarkRecommendDiceItem*>* Items; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICEEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
