#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceSpawnMonsterInfo; }

#define RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5B8C0)
#define RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5B630)

namespace RPG::GameCore
{
	class RtDefenceSpawnMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixVec2 Pos; // 0x18
		::System::UInt32 UnitID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::Boolean UseTeamBornPoint; // 0x30
		::System::Byte _padding1[0x3];
		::System::Int32 Count; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceSpawnMonsterInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceSpawnMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
