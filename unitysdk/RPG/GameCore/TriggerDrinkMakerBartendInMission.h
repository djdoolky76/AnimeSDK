#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMission; }

#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46420)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC46430)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC463F0)

namespace RPG::GameCore
{
	class TriggerDrinkMakerBartendInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RequestID; // 0x18
		::System::Boolean IsSaveOnServer; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBartendSuccess; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBartendFail; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
