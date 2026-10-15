#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDialogueBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNPCDialogueConfig; }

#define RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1CCB0)
#define RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1CCC0)
#define RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1CC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNPCDialogueConfig_TypeDefinitionIndex = 18001;

	class RogueNPCDialogueConfig : public ::RPG::GameCore::RogueDialogueBaseConfig
	{
	public:
		::System::UInt32 DialogueProgress; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 TalkNameID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNPCDialogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNPCDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNPCDialogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNPCDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
