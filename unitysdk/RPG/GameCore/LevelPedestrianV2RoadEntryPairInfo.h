#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryPairInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C9160)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C90A0)

namespace RPG::GameCore
{
	class LevelPedestrianV2RoadEntryPairInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryA; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYPAIRINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
