#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionRoadPathInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8A10)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8900)

namespace RPG::GameCore
{
	class LevelPedestrianV2IntersectionRoadPathInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryA; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryB; // 0x18
		::Il2CppArray<::RPG::MVector3>* ConnectPoints; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONROADPATHINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
