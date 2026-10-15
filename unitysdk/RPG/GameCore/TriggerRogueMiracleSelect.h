#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueMiracleSelect; }

#define RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC586A0)
#define RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC586B0)
#define RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC58660)

namespace RPG::GameCore
{
	class TriggerRogueMiracleSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueMiracleSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueMiracleSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueMiracleSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueMiracleSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
