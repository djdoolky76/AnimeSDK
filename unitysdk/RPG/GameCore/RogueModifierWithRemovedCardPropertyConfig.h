#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierWithRemovedCardPropertyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1ACA0)
#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1ACB0)
#define RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1AC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWithRemovedCardPropertyConfig_TypeDefinitionIndex = 17863;

	class RogueModifierWithRemovedCardPropertyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierWithRemovedCardPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWITHREMOVEDCARDPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
