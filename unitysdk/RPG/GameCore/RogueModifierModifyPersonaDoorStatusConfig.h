#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPersonaDoorStatusConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA181A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA181B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18160)

namespace RPG::GameCore
{
	class RogueModifierModifyPersonaDoorStatusConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
