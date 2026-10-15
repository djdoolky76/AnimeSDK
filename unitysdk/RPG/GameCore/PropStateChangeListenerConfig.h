#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958640)
#define RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D958670)
#define RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9585F0)

namespace RPG::GameCore
{
	class PropStateChangeListenerConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropState FromState; // 0x18
		::RPG::GameCore::PropState ToState; // 0x1C
		::System::Boolean FromAnyState; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateChangeListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateChangeListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateChangeListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateChangeListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
