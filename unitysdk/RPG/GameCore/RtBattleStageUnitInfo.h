#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleStageUnitInfo; }

#define RPG_GAMECORE_RTBATTLESTAGEUNITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4F270)
#define RPG_GAMECORE_RTBATTLESTAGEUNITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4EFC0)

namespace RPG::GameCore
{
	class RtBattleStageUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::IVec2 Pos; // 0x14
		::System::Boolean UseTeamDir; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint DirAngle; // 0x20
		::System::UInt32 UnitID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEUNITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleStageUnitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleStageUnitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEUNITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
