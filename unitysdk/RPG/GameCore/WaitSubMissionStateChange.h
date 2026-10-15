#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitSubMissionStateChange; }

#define RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2A50)
#define RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2A60)
#define RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA2A10)

namespace RPG::GameCore
{
	class WaitSubMissionStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::System::UInt32>* SubMissions; // 0x20
		::RPG::GameCore::SubMissionState State; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::RPG::GameCore::PredicateConfig* Condition; // 0x38
		::System::Boolean TriggerOnMissionInit; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSubMissionStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSubMissionStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSubMissionStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSubMissionStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
