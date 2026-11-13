#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAppendAttributeOnPersonaRoomCardAddConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077D6F0)
#define RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077D700)
#define RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077D6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAppendAttributeOnPersonaRoomCardAddConfig_TypeDefinitionIndex = 18014;

	class RogueModifierAppendAttributeOnPersonaRoomCardAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
