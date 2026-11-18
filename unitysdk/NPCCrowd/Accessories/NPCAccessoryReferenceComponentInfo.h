#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd { template <typename T> class NPCSoftAssetPathList_1; }
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BCANFOLLOWGPUBONE_OFFSET UNITYSDK_OFFSET(0xE788090)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BHASANIMATION_OFFSET UNITYSDK_OFFSET(0xE788030)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BREADGPUSLOTDATA_OFFSET UNITYSDK_OFFSET(0xE787FD0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE7881C0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryReferenceComponentInfo_TypeDefinitionIndex = 88289;

	class NPCAccessoryReferenceComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* meshLOD1; // 0x10
		::UnityEngine::MeshFilter* simpleMeshFilter; // 0x18
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD2AssetRef; // 0x20
		::UnityEngine::Mesh* meshLOD2; // 0x28
		::UnityEngine::Animator* animator; // 0x30
		::UnityEngine::SkinnedMeshRenderer* skMeshRenderer; // 0x38
		::UnityEngine::Material* commonSimpleMaterial; // 0x40
		::UnityEngine::MeshFilter* meshFilter; // 0x48
		::System::Threading::CancellationTokenSource* mdbtaskToken; // 0x50
		::UnityEngine::Mesh* commonSimpleMesh; // 0x58
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD3AssetRef; // 0x60
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD1AssetRef; // 0x68
		::NapRenderer* napRenderer; // 0x70
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Avatar*>* avatarAssetRef; // 0x78
		::UnityEngine::Material* commonSimpleDitherMaterial; // 0x80
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD0AssetRef; // 0x88
		::UnityEngine::GameObject* simpleGo; // 0x90
		::UnityEngine::Avatar* avatar; // 0x98
		::UnityEngine::MeshRenderer* simpleMeshRenderer; // 0xA0
		::UnityEngine::Mesh* mesh; // 0xA8
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0xB0
		::UnityEngine::MeshRenderer* meshRenderer; // 0xB8
		::UnityEngine::Mesh* meshLOD3; // 0xC0
		::UnityEngine::MdbComponent* mdbComponent; // 0xC8
		::UnityEngine::GameObject* go; // 0xD0
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* mdbPoseAssetRef; // 0xD8
		::UnityEngine::GameObject* part; // 0xE0
		::NPCCrowd::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialsAssetRef; // 0xE8
		::System::Boolean bMix; // 0xF0
		::System::Boolean bNeedReadGpuSlotData; // 0xF1
		::System::Boolean bAvatarAssetHasAnimation; // 0xF2
		::System::Byte _padding0[0x1];
		::System::Int32 attachedNpcGpuAnimationInstanceId; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_bReadGpuSlotData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BREADGPUSLOTDATA_OFFSET))(this);
		}

		::System::Boolean get_bHasAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BHASANIMATION_OFFSET))(this);
		}

		::System::Boolean get_bCanFollowGpuBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BCANFOLLOWGPUBONE_OFFSET))(this);
		}
	};
}
