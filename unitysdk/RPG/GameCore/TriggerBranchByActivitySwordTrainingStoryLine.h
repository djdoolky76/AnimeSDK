#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingBranchInfo; }
namespace RPG::GameCore { class TriggerBranchByActivitySwordTrainingStoryLine; }

#define RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC448A0)
#define RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC448B0)
#define RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC44870)

namespace RPG::GameCore
{
	class TriggerBranchByActivitySwordTrainingStoryLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SwordTrainingBranchInfo*>* StoryLineBranch; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBRANCHBYACTIVITYSWORDTRAININGSTORYLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
