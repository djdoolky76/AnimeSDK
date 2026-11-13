#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExtraBuffOnBattleFirstSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077F7A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077F7B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077F760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraBuffOnBattleFirstSelectConfig_TypeDefinitionIndex = 18147;

	class RogueModifierExtraBuffOnBattleFirstSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraBuffOnBattleFirstSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFONBATTLEFIRSTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
