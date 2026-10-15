#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyStyleExpGainInPercentageConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18B60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18B70)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18B20)

namespace RPG::GameCore
{
	class RogueModifierModifyStyleExpGainInPercentageConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
