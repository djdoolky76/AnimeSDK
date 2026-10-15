#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlaySequenceDialogue; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D903DB0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D903DC0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D903D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySequenceDialogue_TypeDefinitionIndex = 21125;

	class PlaySequenceDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Dialogues; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlaySequenceDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlaySequenceDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlaySequenceDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlaySequenceDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
