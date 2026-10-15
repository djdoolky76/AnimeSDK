#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5B70)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C5A20)

namespace RPG::GameCore
{
	class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntry; // 0x10
		::System::UInt32 RoadPointIndex; // 0x18
		::System::UInt32 MaxDropCount; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGTRIBEDROPPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
