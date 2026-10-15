#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_SPINEMESH_NEWSKELETONMESH_OFFSET UNITYSDK_OFFSET(0x1ED0FE00)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineMesh_TypeDefinitionIndex = 45086;

	class SpineMesh : public ::System::Object
	{
	public:
		// static const ::System::Object MeshHideflags; // 0x0
		static ::UnityEngine::Mesh* NewSkeletonMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEMESH_NEWSKELETONMESH_OFFSET))();
		}

	};
}
