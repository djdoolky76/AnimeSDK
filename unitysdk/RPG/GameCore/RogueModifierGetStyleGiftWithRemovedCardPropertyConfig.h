#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierGetStyleGiftWithRemovedCardPropertyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9680)
#define RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9690)
#define RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierGetStyleGiftWithRemovedCardPropertyConfig_TypeDefinitionIndex = 17848;

	class RogueModifierGetStyleGiftWithRemovedCardPropertyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierGetStyleGiftWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETSTYLEGIFTWITHREMOVEDCARDPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
