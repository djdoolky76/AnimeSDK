#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSuppressStyleGiftSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED160)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ED170)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ED120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSuppressStyleGiftSelectConfig_TypeDefinitionIndex = 17806;

	class RogueModifierSuppressStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSuppressStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
