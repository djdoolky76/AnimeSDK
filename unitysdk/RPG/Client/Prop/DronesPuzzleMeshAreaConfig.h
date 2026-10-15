#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class MeshCollider; }

namespace RPG::Client::Prop
{
	struct alignas(8) DronesPuzzleMeshAreaConfig
	{
		::UnityEngine::MeshCollider* meshCollider; // 0x10
	};
}
