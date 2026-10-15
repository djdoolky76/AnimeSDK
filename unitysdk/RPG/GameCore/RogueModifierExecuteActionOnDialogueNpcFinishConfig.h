#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnDialogueNpcFinishConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15D20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15D30)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDialogueNpcFinishConfig_TypeDefinitionIndex = 17787;

	class RogueModifierExecuteActionOnDialogueNpcFinishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDialogueNpcFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDIALOGUENPCFINISHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
