#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionTriggerActionWithConditionWithFailConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D349220)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D349230)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3491D0)

namespace RPG::GameCore
{
	class ActionTriggerActionWithConditionWithFailConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* SuccAction; // 0x18
		::RPG::GameCore::MiActionConfigBase* FailAction; // 0x20
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionWithConditionWithFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONWITHFAILCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
