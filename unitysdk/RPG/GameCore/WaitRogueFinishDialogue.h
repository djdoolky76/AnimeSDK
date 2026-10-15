#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueFinishDialogue; }

#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC72680)
#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC72690)
#define RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC72640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueFinishDialogue_TypeDefinitionIndex = 20489;

	class WaitRogueFinishDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueFinishDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueFinishDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueFinishDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueFinishDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEFINISHDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
