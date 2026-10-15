#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class MeshCollider; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleMeshAreaConfig_TypeDefinitionIndex = 78573;

	struct alignas(8) DronesPuzzleMeshAreaConfig
	{
		::UnityEngine::MeshCollider* meshCollider; // 0x10
	};
}
