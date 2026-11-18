#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x105F50E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceShadowProxyComponentInfo_TypeDefinitionIndex = 89351;

	class NPCAvatarGOReferenceShadowProxyComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* shadowProxyStaticGo; // 0x10
		::UnityEngine::GameObject* shadowProxySkinnedGo; // 0x18
		::UnityEngine::Material* shadowProxyGpuMaterial; // 0x20
		::UnityEngine::MeshFilter* shadowProxyStaticMF; // 0x28
		::UnityEngine::SkinnedMeshRenderer* shadowProxySMR; // 0x30
		::UnityEngine::MeshRenderer* shadowProxyStaticMR; // 0x38
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* shadowProxyMesh; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
