#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionTriggerActionMultiTimeConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D348DC0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D348E10)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D348D30)

namespace RPG::GameCore
{
	class ActionTriggerActionMultiTimeConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiParameterConfigBase* TriggerCountParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
