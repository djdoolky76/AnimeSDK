#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnReRollBuffConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA168C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA168D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16880)

namespace RPG::GameCore
{
	class RogueModifierExecuteActionOnReRollBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnReRollBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONREROLLBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
