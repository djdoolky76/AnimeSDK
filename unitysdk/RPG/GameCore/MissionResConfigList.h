#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionResConfig; }
namespace RPG::GameCore { class MissionResConfigList; }

#define RPG_GAMECORE_MISSIONRESCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887E80)
#define RPG_GAMECORE_MISSIONRESCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D887D50)

namespace RPG::GameCore
{
	class MissionResConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionWithResIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::MissionResConfig*>* MissionResList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionResConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionResConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
