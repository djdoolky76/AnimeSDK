#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/EObstaclePhysicsImpactMode.h"
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashObstaclePhysicsImpactConfig_TypeDefinitionIndex = 75866;

	struct alignas(8) RoadRashObstaclePhysicsImpactConfig
	{
		::RPG::Client::RoadRash::EObstaclePhysicsImpactMode Mode; // 0x10
		::System::Boolean FixedToRight; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single StartValue; // 0x18
		::System::Single EndValue; // 0x1C
		::System::Single Duration; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* Curve; // 0x28
	};
}
