#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerAetherDivideBattle; }

#define RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC42750)
#define RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC42760)
#define RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC42720)

namespace RPG::GameCore
{
	class TriggerAetherDivideBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAetherDivideBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAetherDivideBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAetherDivideBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAetherDivideBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAETHERDIVIDEBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
