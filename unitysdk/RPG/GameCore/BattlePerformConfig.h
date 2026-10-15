#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_BATTLEPERFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4649A0)
#define RPG_GAMECORE_BATTLEPERFORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D464870)

namespace RPG::GameCore
{
	class BattlePerformConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartTaskList; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndTaskList; // 0x18
		// static const ::System::String* BATTLE_PERFORM_CONFIG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
