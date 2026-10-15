#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPersonaStyleGiftPoolRuleConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18440)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18450)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaStyleGiftPoolRuleConfig_TypeDefinitionIndex = 17873;

	class RogueModifierModifyPersonaStyleGiftPoolRuleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaStyleGiftPoolRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONASTYLEGIFTPOOLRULECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
