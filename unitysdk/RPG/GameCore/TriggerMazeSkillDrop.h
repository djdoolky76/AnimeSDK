#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerMazeSkillDrop; }

#define RPG_GAMECORE_TRIGGERMAZESKILLDROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC551C0)
#define RPG_GAMECORE_TRIGGERMAZESKILLDROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC551D0)
#define RPG_GAMECORE_TRIGGERMAZESKILLDROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC55190)

namespace RPG::GameCore
{
	class TriggerMazeSkillDrop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZESKILLDROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeSkillDrop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZESKILLDROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeSkillDrop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeSkillDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZESKILLDROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
