#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionTriggerActionWithConditionConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31B540)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31B550)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithConditionConfig_TypeDefinitionIndex = 17050;

	class ActionTriggerActionWithConditionConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionWithConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionWithConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionWithConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHCONDITIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
