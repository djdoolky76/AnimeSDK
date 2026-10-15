#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyNothingConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18140)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18150)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18100)

namespace RPG::GameCore
{
	class RogueModifierModifyNothingConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyNothingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyNothingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyNothingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyNothingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
