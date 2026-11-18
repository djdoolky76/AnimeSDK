#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcLodSettings.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Bounds.h"

class NPCAvatarAudioAssetsSO;
class NPCAvatarEmotionParamsSO;
class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace NPCCrowd { class NPCSoftMaterialPath; }
namespace NPCCrowd { class NPCSoftMeshPath; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Animation { class AnimationControllerData; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class TextAsset; }

#define NPCAVATARMESHASSETSSO_ADDMESHASSETS_OFFSET UNITYSDK_OFFSET(0xE5A3BA0)
#define NPCAVATARMESHASSETSSO_CLEARMESHASSETS_OFFSET UNITYSDK_OFFSET(0xE5A3AE0)
#define NPCAVATARMESHASSETSSO_GETAVATARSLOTMESHASSETS_OFFSET UNITYSDK_OFFSET(0xE5A3B50)
#define NPCAVATARMESHASSETSSO_GETMDBCLOTH_OFFSET UNITYSDK_OFFSET(0xE5A2B60)
#define NPCAVATARMESHASSETSSO_GETMDBPOSE_OFFSET UNITYSDK_OFFSET(0xE5A3030)
#define NPCAVATARMESHASSETSSO_GETORADDMESHASSETS_OFFSET UNITYSDK_OFFSET(0xE5A3D50)
#define NPCAVATARMESHASSETSSO_GET_MDBCLOTHCOUNT_OFFSET UNITYSDK_OFFSET(0xE5A2B10)
#define NPCAVATARMESHASSETSSO_GET_MDBCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE5A3460)
#define NPCAVATARMESHASSETSSO_GET_MDBHUMAN_OFFSET UNITYSDK_OFFSET(0xE5A2950)
#define NPCAVATARMESHASSETSSO_GET_MDBPOSECOUNT_OFFSET UNITYSDK_OFFSET(0xE5A2FE0)
#define NPCAVATARMESHASSETSSO_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xE5A3620)
#define NPCAVATARMESHASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0xE5A3F50)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_TypeDefinitionIndex = 48073;

class NPCAvatarMeshAssetsSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
{
public:
	::ENPCAvatarGender gender; // 0x58
	::ENPCAvatarSize size; // 0x5C
	::Foundation::AssetPath mdbHumanAssetPath; // 0x60
	::Il2CppArray<::Foundation::AssetPath>* mdbClothsAssetPath; // 0x70
	::Il2CppArray<::Foundation::AssetPath>* mdbPosesAssetPath; // 0x78
	::UnityEngine::TextAsset* _mdbHumanAsset; // 0x80
	::Foundation::AssetRequestHandle _mdbHumanHandle; // 0x88
	::Il2CppArray<::UnityEngine::TextAsset*>* _mdbClothAssets; // 0xA8
	::Il2CppArray<::Foundation::AssetRequestHandle>* _mdbClothHandleList; // 0xB0
	::Il2CppArray<::UnityEngine::AnimationClip*>* _mdbPoseAssets; // 0xB8
	::Il2CppArray<::Foundation::AssetRequestHandle>* _mdbPoseHandleList; // 0xC0
	::Foundation::AssetPath mdbControllerAssetPath; // 0xC8
	::UnityEngine::RuntimeAnimatorController* _mdbControllerAsset; // 0xD8
	::Foundation::AssetRequestHandle _mdbControllerHandle; // 0xE0
	::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationGraphDataset; // 0x100
	::NPCCrowd::Animation::NPCCrowdAnimationData* animationProtoTypeData; // 0x108
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenAudio; // 0x110
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenBattle; // 0x118
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenEffect; // 0x120
	::MoleMole::SkillCharacterAnimatorZoneData* animationZoneData; // 0x128
	::NPCCrowd::Ability::NPCAbilityParameters* abilityParameters; // 0x130
	::System::Collections::Generic::List_1<::System::Object*>* pathGraphPointRegionTypeMaskTags; // 0x138
	::System::Collections::Generic::List_1<::System::Object*>* gameplayTagMaskActions; // 0x140
	::System::Collections::Generic::List_1<::System::Object*>* sequenceFrameHidePartMappings; // 0x148
	::System::Collections::Generic::List_1<::System::Object*>* avatarSlotMeshDatas; // 0x150
	::NPCCrowd::NPCSoftMeshPath* commonGPULod3SimpleMeshRef; // 0x158
	::NPCCrowd::NPCSoftMeshPath* commonGPULod3SimpleFrontMeshRef; // 0x160
	::NPCCrowd::NPCSoftMeshPath* commonGPULod3SimpleSideMeshRef; // 0x168
	::NPCCrowd::NPCSoftMaterialPath* commonGPULod3SimpleMaterialRef; // 0x170
	::NPCCrowd::NPCSoftMaterialPath* commonGPULod3SimpleDitherMaterialRef; // 0x178
	::NPCCrowd::NPCSoftMeshPath* shadowProxySimpleGPUMeshPathRef; // 0x180
	::NPCCrowd::NPCSoftMeshPath* shadowProxySimpleMeshPathRef; // 0x188
	::NPCCrowd::NPCSoftMeshPath* shadowProxyCapsuleMeshPathRef; // 0x190
	::NPCCrowd::NPCSoftMaterialPath* shadowProxyMaterialRef; // 0x198
	::NPCAvatarEmotionParamsSO* emotionParams; // 0x1A0
	::System::Collections::Generic::List_1<::System::Object*>* colliders; // 0x1A8
	::NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle navObstacle; // 0x1B0
	::NPCCrowd::Animation::AnimationControllerData* controllerData; // 0x1D0
	::NPCAvatarMeshAssetsSO_FNpcLodSettings lodSettings; // 0x1D8
	::NPCAvatarAudioAssetsSO* audioAssetSo; // 0x1E0
	::UnityEngine::Bounds rootBounds; // 0x1E8
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* shadowProxySkinnedMeshes; // 0x200

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO__CTOR_OFFSET))(this);
	}

	::UnityEngine::TextAsset* get_MdbHuman()
	{
		return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GET_MDBHUMAN_OFFSET))(this);
	}

	::System::Int32 get_MdbClothCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GET_MDBCLOTHCOUNT_OFFSET))(this);
	}

	::UnityEngine::TextAsset* GetMdbCloth(::System::Int32 index)
	{
		return ((::UnityEngine::TextAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GETMDBCLOTH_OFFSET))(this, index);
	}

	::System::Int32 get_MdbPoseCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GET_MDBPOSECOUNT_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* GetMdbPose(::System::Int32 index)
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GETMDBPOSE_OFFSET))(this, index);
	}

	::UnityEngine::RuntimeAnimatorController* get_MdbController()
	{
		return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GET_MDBCONTROLLER_OFFSET))(this);
	}

	::System::Void UnLoadedAssets(::NPCCrowd::EUnloadAssetReason reason)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_UNLOADEDASSETS_OFFSET))(this, reason);
	}

	::System::Void ClearMeshAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_CLEARMESHASSETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* GetAvatarSlotMeshAssets()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GETAVATARSLOTMESHASSETS_OFFSET))(this);
	}

	::System::Void AddMeshAssets(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAsset)
	{
		return ((::System::Void(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_ADDMESHASSETS_OFFSET))(this, meshAsset);
	}

	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* GetOrAddMeshAssets(::System::Int32 id)
	{
		return ((::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GETORADDMESHASSETS_OFFSET))(this, id);
	}
};
