#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PampelGames::RoadConstructor { class SceneObject; }
namespace PampelGames::RoadConstructor { class TrafficLane; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class SplineContainer; }

#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFIC__CTOR_OFFSET UNITYSDK_OFFSET(0x3DB8440)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int Traffic_TypeDefinitionIndex = 18878;

	class Traffic : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PampelGames::RoadConstructor::SceneObject* sceneObject; // 0x20
		::UnityEngine::Splines::SplineContainer* splineContainer; // 0x28
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* trafficLanes; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFIC__CTOR_OFFSET))(this);
		}
	};
}
