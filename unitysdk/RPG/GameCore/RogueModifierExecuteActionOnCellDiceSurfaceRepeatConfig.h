#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15B40)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15B50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15B00)

namespace RPG::GameCore
{
	class RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
