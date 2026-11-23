#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A92CA8C5CE7ED303.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PampelGames::RoadConstructor { class TrafficLaneEditor; }
namespace PampelGames::RoadConstructor { class Waypoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class Spline; }

#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_GETNEARESTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x3DA0AF0)
#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_GETWAYPOINTS_OFFSET UNITYSDK_OFFSET(0x165A410)
#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_SETWAYPOINTS_OFFSET UNITYSDK_OFFSET(0x165A480)
#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DA0E00)
#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA0EF0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int TrafficLane_TypeDefinitionIndex = 18864;

	class TrafficLane : public ::System::Object
	{
	public:
		::B223EC95048EAAE0::B3CC6E5519497EE3 trafficLaneType; // 0x10
		::B223EC95048EAAE0::A92CA8C5CE7ED303 direction; // 0x14
		::System::Single position; // 0x18
		::System::Single width; // 0x1C
		::System::Single maxSpeed; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Splines::Spline* spline; // 0x28
		::System::Boolean crossing; // 0x30
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>* waypoints; // 0x38

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>* GetWaypoints()
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_GETWAYPOINTS_OFFSET))(this);
		}

		::System::Void SetWaypoints(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>* F0E82BF5650FADB6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Waypoint*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_SETWAYPOINTS_OFFSET))(this, F0E82BF5650FADB6);
		}

		::System::Void _ctor(::PampelGames::RoadConstructor::TrafficLaneEditor* B21B3AB04CEA1800, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Boolean F0B47218F71468A0)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::TrafficLaneEditor*, ::UnityEngine::Splines::Spline*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE__CTOR_OFFSET))(this, B21B3AB04CEA1800, F03E0BDCBABB08A2, F0B47218F71468A0);
		}

		::System::Void _ctor_1(::PampelGames::RoadConstructor::TrafficLane* ACFD20379A328FFB, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Boolean F0B47218F71468A0)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::TrafficLane*, ::UnityEngine::Splines::Spline*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE__CTOR_1_OFFSET))(this, ACFD20379A328FFB, F03E0BDCBABB08A2, F0B47218F71468A0);
		}

		::PampelGames::RoadConstructor::Waypoint* GetNearestWaypoint(::UnityEngine::Vector3 FF9A37DE513AC35B)
		{
			return ((::PampelGames::RoadConstructor::Waypoint*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLANE_GETNEARESTWAYPOINT_OFFSET))(this, FF9A37DE513AC35B);
		}
	};
}
