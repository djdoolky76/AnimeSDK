#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077F440)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077F450)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077F400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig_TypeDefinitionIndex = 18115;

	class RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueDialogueAeonOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEDIALOGUEAEONOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
