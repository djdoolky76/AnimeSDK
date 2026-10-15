#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueEventSwitch; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D600ED0)
#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D600EE0)
#define RPG_GAMECORE_DIALOGUEEVENTSWITCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D600E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEventSwitch_TypeDefinitionIndex = 20884;

	class DialogueEventSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UseCurrentDialogue; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 RogueNPCID; // 0x1C
		::Il2CppArray<::System::UInt32>* DialogueEventList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AllTriggered; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NotAllTriggered; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueEventSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueEventSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueEventSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueEventSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTSWITCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
