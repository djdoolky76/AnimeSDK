#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class StartDialogueEntityInteract; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1C730)
#define RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1C740)
#define RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1C700)

namespace RPG::GameCore
{
	class StartDialogueEntityInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LevelGraphPath; // 0x20
		::System::Boolean UseOverrideData; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x30
		::RPG::GameCore::DialogueEntityInteractOverride* OverrideTasks; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartDialogueEntityInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartDialogueEntityInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTDIALOGUEENTITYINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
