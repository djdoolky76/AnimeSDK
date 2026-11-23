#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/AF06CDA68CCFACB4.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class LanePreset; }
namespace PampelGames::RoadConstructor { class SpawnObject; }
namespace PampelGames::RoadConstructor { class SplineEdgeEditor; }
namespace PampelGames::RoadConstructor { class TrafficLaneEditor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_ROAD_GETALLLANES_OFFSET UNITYSDK_OFFSET(0x3DB12D0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x3DB1410)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int Road_TypeDefinitionIndex = 18904;

	class Road : public ::System::Object
	{
	public:
		::System::Boolean _editorVisible; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* category; // 0x18
		::System::String* roadName; // 0x20
		::System::Int32 priority; // 0x28
		::System::Single length; // 0x2C
		::System::Boolean elevatable; // 0x30
		::System::Boolean oneWay; // 0x31
		::System::Byte _padding1[0x2];
		::BDC595893C6EE433::AF06CDA68CCFACB4 shadowCastingMode; // 0x34
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SplineEdgeEditor*>* splineEdgesEditor; // 0x38
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SpawnObject*>* spawnObjects; // 0x40
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>* trafficLanes; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROAD__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SplineEdgeEditor*>* GetAllLanes(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::LanePreset*>* E8537494C174B278)
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SplineEdgeEditor*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::LanePreset*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROAD_GETALLLANES_OFFSET))(this, E8537494C174B278);
		}
	};
}
