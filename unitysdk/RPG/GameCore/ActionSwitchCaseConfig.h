#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionSwitchCaseConfig; }
namespace RPG::GameCore { class ActionSwitchCaseItemConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONSWITCHCASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3486E0)
#define RPG_GAMECORE_ACTIONSWITCHCASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3486F0)
#define RPG_GAMECORE_ACTIONSWITCHCASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D348680)

namespace RPG::GameCore
{
	class ActionSwitchCaseConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* SwitchValue; // 0x18
		::Il2CppArray<::RPG::GameCore::ActionSwitchCaseItemConfig*>* CaseList; // 0x20
		::RPG::GameCore::MiActionConfigBase* DefaultAction; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Boolean WithBreak; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionSwitchCaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionSwitchCaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionSwitchCaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionSwitchCaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSWITCHCASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
