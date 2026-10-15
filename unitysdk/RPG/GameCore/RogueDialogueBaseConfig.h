#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99A140)
#define RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99A150)
#define RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D999FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueBaseConfig_TypeDefinitionIndex = 18000;

	class RogueDialogueBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DialoguePath; // 0x10
		::System::String* OptionPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
