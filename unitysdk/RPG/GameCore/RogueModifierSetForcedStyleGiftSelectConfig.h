#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetForcedStyleGiftSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECEC0)
#define RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ECED0)
#define RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ECE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetForcedStyleGiftSelectConfig_TypeDefinitionIndex = 17856;

	class RogueModifierSetForcedStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetForcedStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFORCEDSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
