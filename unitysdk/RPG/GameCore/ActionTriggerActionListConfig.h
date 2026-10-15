#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionTriggerActionListConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D348BE0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D348BF0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D348B90)

namespace RPG::GameCore
{
	class ActionTriggerActionListConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiActionConfigBase*>* ActionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionTriggerActionListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionTriggerActionListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
