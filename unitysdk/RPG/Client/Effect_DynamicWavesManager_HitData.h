#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	struct alignas(8) Effect_DynamicWavesManager_HitData
	{
		::UnityEngine::Transform* trans; // 0x10
		::UnityEngine::Vector2 hitPoint; // 0x18
		::UnityEngine::Vector3 charaDirection; // 0x20
		::System::Boolean isHit; // 0x2C
		::System::Byte _padding0[0x3];
		::UnityEngine::Collider* hitCollider; // 0x30
	};
}
