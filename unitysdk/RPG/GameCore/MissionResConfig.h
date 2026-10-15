#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionResConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONRESCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887D40)
#define RPG_GAMECORE_MISSIONRESCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D887BC0)

namespace RPG::GameCore
{
	class MissionResConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* VideoList; // 0x18
		::Il2CppArray<::System::String*>* AudioList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionResConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionResConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
