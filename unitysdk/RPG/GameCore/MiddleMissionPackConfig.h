#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiddleMissionPackConfig; }
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }

#define RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87F910)
#define RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87F7F0)

namespace RPG::GameCore
{
	class MiddleMissionPackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::MiddleSinglePackMissionConfig*>* PackMissionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiddleMissionPackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
