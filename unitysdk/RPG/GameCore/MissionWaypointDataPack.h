#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomValueType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckFloorSavedValueConfig; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionWaypointDataPack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88AFE0)
#define RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D88AFF0)
#define RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88AC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionWaypointDataPack_TypeDefinitionIndex = 19012;

	class MissionWaypointDataPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CustomValueType CustomValueType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FloorCustomValueConfig* FloorCustomValue; // 0x18
		::RPG::GameCore::CheckFloorSavedValueConfig* FloorSavedValue; // 0x20
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::System::UInt32 MCVValue; // 0x30
		::RPG::GameCore::MissionWayPointType WayPointType; // 0x34
		::System::UInt32 WayPointFloorID; // 0x38
		::System::UInt32 WayPointGroupID; // 0x3C
		::System::UInt32 WayPointEntityID; // 0x40
		::System::UInt32 WayPointLittleGameEntityID; // 0x44
		::System::Int32 WayPointShowRangeMin; // 0x48
		::System::Single MapWaypointRange; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionWaypointDataPack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionWaypointDataPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionWaypointDataPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionWaypointDataPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONWAYPOINTDATAPACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
