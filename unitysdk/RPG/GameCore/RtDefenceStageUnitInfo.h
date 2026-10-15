#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceStageUnitInfo; }

#define RPG_GAMECORE_RTDEFENCESTAGEUNITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5C1F0)
#define RPG_GAMECORE_RTDEFENCESTAGEUNITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5BFB0)

namespace RPG::GameCore
{
	class RtDefenceStageUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixVec2 Pos; // 0x18
		::RPG::GameCore::FixPoint DirAngle; // 0x28
		::System::UInt32 UnitID; // 0x30
		::System::UInt32 Level; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEUNITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceStageUnitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceStageUnitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEUNITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
