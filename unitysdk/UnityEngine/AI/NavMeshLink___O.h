#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::AI { class NavMesh_OnNavMeshPreUpdate; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLink___O_TypeDefinitionIndex = 41349;

	class NavMeshLink___O : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate** StaticGet__0___UpdateTrackedInstances()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate**)UnitySDK::FromName("UnityEngine.AI", "<>O")->GetStaticField(0xB90);
		}

	};
}
