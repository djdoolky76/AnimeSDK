#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitGroupStateChange; }

#define RPG_GAMECORE_WAITGROUPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9A0D0)
#define RPG_GAMECORE_WAITGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9A0F0)
#define RPG_GAMECORE_WAITGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9A090)

namespace RPG::GameCore
{
	class WaitGroupStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::System::UInt32>* FromStates; // 0x30
		::System::Boolean FromAnyState; // 0x38
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::UInt32>* ToStates; // 0x40
		::System::Boolean ToAnyState; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
