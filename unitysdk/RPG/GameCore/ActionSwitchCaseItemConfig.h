#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionSwitchCaseItemConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D348B80)
#define RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3489D0)

namespace RPG::GameCore
{
	class ActionSwitchCaseItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* CaseValue; // 0x10
		::RPG::GameCore::MiActionConfigBase* CaseAction; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionSwitchCaseItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionSwitchCaseItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASEITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
