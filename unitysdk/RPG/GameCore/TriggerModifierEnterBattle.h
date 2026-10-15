#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TriggerModifierEnterBattle; }

#define RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC55C20)
#define RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC55C30)
#define RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC55BF0)

namespace RPG::GameCore
{
	class TriggerModifierEnterBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* TargetFilter; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModifierEnterBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModifierEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModifierEnterBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModifierEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
