#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupRandomInitControl; }

#define RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1A00)
#define RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B17D0)

namespace RPG::GameCore
{
	class LevelGroupRandomInitControl : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ControlID; // 0x10
		::System::Single Weight; // 0x14
		::Il2CppArray<::System::UInt32>* NPCIDList; // 0x18
		::Il2CppArray<::System::UInt32>* PropIDList; // 0x20
		::Il2CppArray<::System::UInt32>* CrowdIDList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupRandomInitControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupRandomInitControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
