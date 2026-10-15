#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2RoadInvisibleSegmentInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C9430)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C9340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadInvisibleSegmentInfo_TypeDefinitionIndex = 17290;

	class LevelPedestrianV2RoadInvisibleSegmentInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoadPointIndexA; // 0x10
		::System::UInt32 RoadPointIndexB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINVISIBLESEGMENTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
