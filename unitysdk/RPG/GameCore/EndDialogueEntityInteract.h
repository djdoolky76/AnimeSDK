#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class EndDialogueEntityInteract; }

#define RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87ED10)
#define RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E87ED20)
#define RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E87ECE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndDialogueEntityInteract_TypeDefinitionIndex = 20730;

	class EndDialogueEntityInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DialogueEntityInteractOverride* OverrideTasks; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndDialogueEntityInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndDialogueEntityInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDDIALOGUEENTITYINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
