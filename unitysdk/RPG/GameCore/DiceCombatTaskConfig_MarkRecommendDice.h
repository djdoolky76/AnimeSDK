#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDice; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612620)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612630)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6125D0)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_MarkRecommendDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::System::String* IconPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
