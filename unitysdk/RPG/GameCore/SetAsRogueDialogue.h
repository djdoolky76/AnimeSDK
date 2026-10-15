#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAsRogueDialogue; }

#define RPG_GAMECORE_SETASROGUEDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA94390)
#define RPG_GAMECORE_SETASROGUEDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA943A0)
#define RPG_GAMECORE_SETASROGUEDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA942D0)

namespace RPG::GameCore
{
	class SetAsRogueDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETASROGUEDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAsRogueDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAsRogueDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETASROGUEDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAsRogueDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAsRogueDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETASROGUEDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
