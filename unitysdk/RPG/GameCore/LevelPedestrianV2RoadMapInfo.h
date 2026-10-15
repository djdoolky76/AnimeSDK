#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace RPG::GameCore { class NavMeshLinkInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79B9C0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D796EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadMapInfo_TypeDefinitionIndex = 17312;

	class LevelPedestrianV2RoadMapInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadInfo*>* Roads; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionInfo*>* Intersections; // 0x18
		::Il2CppArray<::RPG::GameCore::NavMeshLinkInfo*>* NavMeshLinks; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADMAPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
