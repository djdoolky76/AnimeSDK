#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionConnectAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C65E0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C6490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionConnectAreaInfo_TypeDefinitionIndex = 17297;

	class LevelPedestrianV2IntersectionConnectAreaInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryA; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntryB; // 0x18
		::System::Int32 AreaIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCONNECTAREAINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
