#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvDistrictSetupTrigger; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39B9C0)
#define RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39BA70)
#define RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39B8E0)

namespace RPG::GameCore
{
	class AdvDistrictSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* DistrictID; // 0x20
		::System::Boolean DisableAfterTrigger; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single TickInterval; // 0x2C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x38
		::System::Boolean IsOverrideValidGuestConfig; // 0x40
		::System::Byte _padding1[0x7];
		::RPG::GameCore::TriggerValidGuestConfig* OverridedValidGuestConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDistrictSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDistrictSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDistrictSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDistrictSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
