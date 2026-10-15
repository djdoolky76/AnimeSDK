#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionTriggerActionWithTimesLimitConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3494A0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3494B0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D349450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionWithTimesLimitConfig_TypeDefinitionIndex = 17054;

	class ActionTriggerActionWithTimesLimitConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Times; // 0x20
		::System::String* CounterKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionWithTimesLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONWITHTIMESLIMITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
