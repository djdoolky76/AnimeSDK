#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_UIListenerSnapshot_TypeDefinitionIndex = 61010;

	struct alignas(8) AudioManager_UIListenerSnapshot
	{
		::RPG::Client::AudioListenerMode Mode; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* FollowTarget; // 0x18
		::System::Single WithinDistance; // 0x20
		::UnityEngine::Vector3 Offset; // 0x24
	};
}
