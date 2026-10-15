#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCheckSwitchMap; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89D020)
#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89D030)
#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89CFF0)

namespace RPG::GameCore
{
	class MonopolyCheckSwitchMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerNotSwitch; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitchToSpeWorld; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitchFromSpeWorld; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitch; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCheckSwitchMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCheckSwitchMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCheckSwitchMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCheckSwitchMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
