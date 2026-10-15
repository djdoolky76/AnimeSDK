#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) MonoEffectConfig
	{
		::System::String* PrefabPath; // 0x10
		::System::String* AttachPoint; // 0x18
		::System::Single Scale; // 0x20
		::UnityEngine::Vector3 LocalPositionOffset; // 0x24
		::UnityEngine::Vector3 LocalRotationOffset; // 0x30
	};
}
