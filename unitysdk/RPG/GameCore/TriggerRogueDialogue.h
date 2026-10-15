#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueDialogue; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERROGUEDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2AB00)
#define RPG_GAMECORE_TRIGGERROGUEDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2AB10)
#define RPG_GAMECORE_TRIGGERROGUEDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2AAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueDialogue_TypeDefinitionIndex = 20817;

	class TriggerRogueDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DialoguePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
