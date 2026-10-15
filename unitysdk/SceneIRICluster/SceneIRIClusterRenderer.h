#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }

#define SCENEIRICLUSTER_SCENEIRICLUSTERRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xE95ED70)

namespace SceneIRICluster
{
	class SceneIRIClusterRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRIClusterBuilder::IRI2VolumeTemplate* VolumeTemplate; // 0x18
		::UnityEngine::Bounds LocalBounds; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEIRICLUSTER_SCENEIRICLUSTERRENDERER_CTOR_OFFSET))(this);
		}

	};
}
