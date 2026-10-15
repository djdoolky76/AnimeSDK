#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierEnableDiceReRollFreeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15370)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DDC90)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DDC50)

namespace RPG::GameCore
{
	class RogueModifierEnableDiceReRollFreeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
