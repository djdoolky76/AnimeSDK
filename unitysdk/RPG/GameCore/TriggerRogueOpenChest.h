#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerRogueOpenChest; }

#define RPG_GAMECORE_TRIGGERROGUEOPENCHEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC586F0)
#define RPG_GAMECORE_TRIGGERROGUEOPENCHEST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC58700)
#define RPG_GAMECORE_TRIGGERROGUEOPENCHEST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC586C0)

namespace RPG::GameCore
{
	class TriggerRogueOpenChest : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEOPENCHEST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueOpenChest* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueOpenChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEOPENCHEST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueOpenChest* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueOpenChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEOPENCHEST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
