#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierCopyBattleSelectMagicUnitConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DDA50)
#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DDA60)
#define RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DDA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierCopyBattleSelectMagicUnitConfig_TypeDefinitionIndex = 17730;

	class RogueModifierCopyBattleSelectMagicUnitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierCopyBattleSelectMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCOPYBATTLESELECTMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
