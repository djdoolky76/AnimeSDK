#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleBackgroundUnitInfo; }

#define RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4B740)
#define RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4B4D0)

namespace RPG::GameCore
{
	class RtBattleBackgroundUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::System::Boolean UseTeamDir; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint DirAngle; // 0x18
		::System::UInt32 UnitID; // 0x20
		::System::UInt32 Level; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleBackgroundUnitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleBackgroundUnitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEBACKGROUNDUNITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
