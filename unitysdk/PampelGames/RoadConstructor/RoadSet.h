#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace PampelGames::RoadConstructor { class LanePreset; }
namespace PampelGames::RoadConstructor { class Road; }
namespace PampelGames::RoadConstructor { class SpawnObjectPreset; }
namespace PampelGames::RoadConstructor { class TrafficLanePreset; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_ROADSET__CTOR_OFFSET UNITYSDK_OFFSET(0x3DAC630)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadSet_TypeDefinitionIndex = 18872;

	class RoadSet : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Road*>* roads; // 0x18
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::LanePreset*>* lanePresets; // 0x20
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SpawnObjectPreset*>* spawnObjectPresets; // 0x28
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLanePreset*>* trafficLanePresets; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADSET__CTOR_OFFSET))(this);
		}
	};
}
