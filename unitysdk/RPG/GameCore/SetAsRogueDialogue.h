#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAsRogueDialogue; }

#define RPG_GAMECORE_SETASROGUEDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA6910)
#define RPG_GAMECORE_SETASROGUEDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA6920)
#define RPG_GAMECORE_SETASROGUEDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA6850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAsRogueDialogue_TypeDefinitionIndex = 21460;

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
