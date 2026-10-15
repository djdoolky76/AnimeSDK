#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerBreak; }

#define RPG_GAMECORE_TRIGGERBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC44A50)
#define RPG_GAMECORE_TRIGGERBREAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC44A60)
#define RPG_GAMECORE_TRIGGERBREAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC44A10)

namespace RPG::GameCore
{
	class TriggerBreak : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IgnoreMuteBreak; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBREAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
