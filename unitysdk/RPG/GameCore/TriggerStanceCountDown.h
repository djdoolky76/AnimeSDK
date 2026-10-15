#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerStanceCountDown; }

#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31300)
#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC31310)
#define RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC312C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerStanceCountDown_TypeDefinitionIndex = 22717;

	class TriggerStanceCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IncludeRedStance; // 0x22
		::System::Boolean IgnoreMuteBreak; // 0x23
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSTANCECOUNTDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
