#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/Foundation/BitSet256.h"
#include "unitysdk/GAOKHAHEDPM.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/JAHFCNNMABJ.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarAnimationCurve.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarSkeletonBoneIndex.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_BoneAdjustSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKSetting.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustPelvisSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKSetting.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class NPCAnimationLib_AvatarAnimatorCache; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPEMASKDATA_OFFSET UNITYSDK_OFFSET(0x137982D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPENAMETOINDICES_OFFSET UNITYSDK_OFFSET(0x13798550)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDMASKLIST_OFFSET UNITYSDK_OFFSET(0x13797A40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET UNITYSDK_OFFSET(0x137990D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARVISIBLECOUNT_OFFSET UNITYSDK_OFFSET(0x13799210)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECTBYDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0x13799400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECTVISIBLECOUNT_OFFSET UNITYSDK_OFFSET(0x13799A60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECT_OFFSET UNITYSDK_OFFSET(0x137992B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13799D00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_FILLBLENDSHAPEMASKSLICE_OFFSET UNITYSDK_OFFSET(0x13798970)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBLENDSHAPECURVEINDEX_OFFSET UNITYSDK_OFFSET(0x13794E40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0x13792C80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEINDEX_OFFSET UNITYSDK_OFFSET(0x13793F30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATECURVEINDEX_OFFSET UNITYSDK_OFFSET(0x137944C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEFOOTSTEPSETTING_OFFSET UNITYSDK_OFFSET(0x13792310)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATELOOKATIKSETTING_OFFSET UNITYSDK_OFFSET(0x137954E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEMOTONRATIOCURVEINDEX_OFFSET UNITYSDK_OFFSET(0x13794230)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEPELVISADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0x137921E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATETWOBONEIKSETTING_OFFSET UNITYSDK_OFFSET(0x13791BF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBLENDSHAPECURVEINDICES_OFFSET UNITYSDK_OFFSET(0x13798FC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0x13798F40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETCURVEINDEX_OFFSET UNITYSDK_OFFSET(0x13798F80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEADJUSTSETTING_OFFSET UNITYSDK_OFFSET(0x137922D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEPARENTS_OFFSET UNITYSDK_OFFSET(0x13792300)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x13791A40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_FOOTSTEPSETTING_OFFSET UNITYSDK_OFFSET(0x137922A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET UNITYSDK_OFFSET(0x13799CA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x13799AC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTFOOTIKCONFIG_OFFSET UNITYSDK_OFFSET(0x13791E50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTHANDIKCONFIG_OFFSET UNITYSDK_OFFSET(0x13791AA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_PELVISADJUSTCONFIG_OFFSET UNITYSDK_OFFSET(0x137920F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTFOOTIKCONFIG_OFFSET UNITYSDK_OFFSET(0x13791FA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTHANDIKCONFIG_OFFSET UNITYSDK_OFFSET(0x13791CF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_MARKCOLLECTDIRTY_OFFSET UNITYSDK_OFFSET(0x13799260)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x137997E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REBUILDCURVEINDEX_OFFSET UNITYSDK_OFFSET(0x137981B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REGISTERANIMATIONARCHETYPE_OFFSET UNITYSDK_OFFSET(0x13799350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13795D00)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeData_TypeDefinitionIndex = 81134;

	class AnimationSubManager_AvatarArchetypeData : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSizeBit = 0x4; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _animationArchetypeCollectData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* _blendShapeCurveIndices; // 0x18
		::UnityEngine::Avatar* _avatar; // 0x20
		::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* _chunkData; // 0x28
		::Il2CppArray<::System::Int32>* _curveIndices; // 0x30
		::Il2CppArray<::System::Int32>* _boneIndices; // 0x38
		::Unity::Collections::NativeArray_1<::System::Int32> _leftFootSegmentOffset; // 0x40
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::HHDPDELCDNI> _masterBone; // 0x50
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Byte> BlendShapeMaskFullFlags; // 0x60
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::Foundation::BitSet256> LayerMaskList; // 0x70
		::System::Byte _padding3[0x8];
		::System::Int32 BlendShapeCount; // 0x80
		::System::Single _maxStretchRatio; // 0x84
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting LookAtIKConfig; // 0x88
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0xE0
		::System::Byte _padding4[0x8];
		::System::Int32 AvatarId; // 0xF0
		::ENPCAvatarSize Size; // 0xF4
		::Unity::Collections::NativeArray_1<::System::Int32> _rightFootSegmentOffset; // 0xF8
		::System::Byte _padding5[0x8];
		::Foundation::Container::NativeVector_1<::System::Int32> _boneDimensions; // 0x108
		::System::Byte _padding6[0x8];
		::Foundation::Container::NativeVector_1<::System::Int32> _boneAdjustDrivenBoneDimensions; // 0x118
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _drivenBoneScaleDelta; // 0x128
		::System::Byte _padding8[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _dirVec; // 0x138
		::System::Byte _padding9[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> _triangleIndices; // 0x148
		::System::Byte _padding10[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> _exteriorEdges; // 0x158
		::System::Byte _padding11[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> _drivenBoneRotDelta; // 0x168
		::System::Byte _padding12[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _masterForwardBoneBindPos; // 0x178
		::System::Byte _padding13[0x8];
		::System::Boolean _needFullCollect; // 0x188
		::System::Boolean HasStateMachineArchetype; // 0x189
		::System::Byte _padding14[0x2];
		::System::Single _startStretchRatio; // 0x18C
		::Unity::Collections::NativeArray_1<::HHDPDELCDNI> _drivenBone; // 0x190
		::System::Byte _padding15[0x8];
		::Unity::Collections::NativeArray_1<::GAOKHAHEDPM> _lookAtEyes; // 0x1A0
		::System::Byte _padding16[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> _targetPoseCount; // 0x1B0
		::System::Byte _padding17[0x8];
		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting _boneAdjustSetting; // 0x1C0
		::System::Int64 VisibleCount; // 0x2A0
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> _coordRot; // 0x2A8
		::System::Byte _padding18[0x8];
		::Unity::Collections::NativeArray_1<::JAHFCNNMABJ> _lookAtSpines; // 0x2B8
		::System::Byte _padding19[0x8];
		::ENPCAvatarGender Gender; // 0x2C8
		::System::Int32 BoneAdjustMaxDrivenBoneCount; // 0x2CC
		::Unity::Collections::NativeArray_1<::System::Object*> _rightFootSegments; // 0x2D0
		::System::Byte _padding20[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> _animIdArray; // 0x2E0
		::System::Byte _padding21[0x8];
		::System::Int32 BoneCount; // 0x2F0
		::System::Int32 BoneAdjustMasterBoneCount; // 0x2F4
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _drivenBonePosDelta; // 0x2F8
		::System::Byte _padding22[0x8];
		::Foundation::Container::NativeVector_1<::System::Int32> _boneAdjustMasterBoneDimensions; // 0x308
		::System::Byte _padding23[0x8];
		::Foundation::Container::NativeVector_1<::System::Int32> _count; // 0x318
		::System::Byte _padding24[0x8];
		::Unity::Collections::NativeArray_1<::System::Byte> BlendShapeMaskValues; // 0x328
		::System::Byte _padding25[0x8];
		::Foundation::Container::NativeVector_1<::System::Int32> _blendShapeDimensions; // 0x338
		::System::Byte _padding26[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> _leftFootSegments; // 0x348
		::System::Byte _padding27[0x8];
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting _footStepSetting; // 0x358
		::Unity::Collections::NativeArray_1<::System::Int32> _drivenBoneCount; // 0x408

		::System::Void _ctor(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::ENPCAvatarGender gender, ::ENPCAvatarSize size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA__CTOR_OFFSET))(this, avatar, config, gender, size);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_LeftHandIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTHANDIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_RightHandIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTHANDIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_LeftFootIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_LEFTFOOTIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting get_RightFootIKConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_RIGHTFOOTIKCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting get_PelvisAdjustConfig()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_PELVISADJUSTCONFIG_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting get_FootStepSetting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_FootStepSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_FOOTSTEPSETTING_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting get_BoneAdjustSetting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEADJUSTSETTING_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::System::Int32> get_BoneParents()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_BONEPARENTS_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting GenerateTwoBoneIKSetting(::System::Int32 endBoneIndex)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATETWOBONEIKSETTING_OFFSET))(this, endBoneIndex);
		}

		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting GeneratePelvisAdjustSetting(::System::Int32 leftFootIndex, ::System::Int32 rightFootIndex, ::System::Int32 pelvisIndex)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEPELVISADJUSTSETTING_OFFSET))(this, leftFootIndex, rightFootIndex, pelvisIndex);
		}

		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting GenerateFootStepSetting(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::Unity::Collections::NativeArray_1<::System::Int32>& animIdArray, ::Unity::Collections::NativeArray_1<::System::Int32>& leftFootSegmentOffset, ::Unity::Collections::NativeArray_1<::System::Int32>& rightFootSegmentOffset, ::Unity::Collections::NativeArray_1<::System::Object*>& leftFootSegments, ::Unity::Collections::NativeArray_1<::System::Object*>& rightFootSegments)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_FootStepSetting(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Object*>&, ::Unity::Collections::NativeArray_1<::System::Object*>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEFOOTSTEPSETTING_OFFSET))(this, config, animIdArray, leftFootSegmentOffset, rightFootSegmentOffset, leftFootSegments, rightFootSegments);
		}

		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting GenerateBoneAdjustSetting(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::Unity::Collections::NativeArray_1<::HHDPDELCDNI>& masterBone, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& masterForwardBoneBindPos, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& coordRot, ::Unity::Collections::NativeArray_1<::System::Int32>& drivenBoneCount, ::Unity::Collections::NativeArray_1<::System::Int32>& targetPoseCount, ::Unity::Collections::NativeArray_1<::HHDPDELCDNI>& drivenBone, ::Unity::Collections::NativeArray_1<::System::Int32>& triangleIndices, ::Unity::Collections::NativeArray_1<::System::Int32>& exteriorEdges, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& dirVecs, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& drivenBonePosDelta, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& drivenBoneRotDelta, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& drivenBoneScaleDelta)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting(*)(::PVOID, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::Unity::Collections::NativeArray_1<::HHDPDELCDNI>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::HHDPDELCDNI>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::System::Int32>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>&, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEADJUSTSETTING_OFFSET))(this, cache, config, masterBone, masterForwardBoneBindPos, coordRot, drivenBoneCount, targetPoseCount, drivenBone, triangleIndices, exteriorEdges, dirVecs, drivenBonePosDelta, drivenBoneRotDelta, drivenBoneScaleDelta);
		}

		static ::Il2CppArray<::System::Int32>* GenerateBoneIndex(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBONEINDEX_OFFSET))(cache, config);
		}

		static ::System::Void GenerateMotonRatioCurveIndex(::System::Int32 index, ::System::Span_1_9011FAD97750D224<::System::Int32> result, ::System::String* boneName, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Span_1_9011FAD97750D224<::System::Int32>, ::System::String*, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEMOTONRATIOCURVEINDEX_OFFSET))(index, result, boneName, cache);
		}

		static ::Il2CppArray<::System::Int32>* GenerateCurveIndex(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATECURVEINDEX_OFFSET))(cache, config);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* GenerateBlendShapeCurveIndex(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* config)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*(*)(::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATEBLENDSHAPECURVEINDEX_OFFSET))(cache, config);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting GenerateLookAtIKSetting(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::Unity::Collections::NativeArray_1<::JAHFCNNMABJ>& spines, ::Unity::Collections::NativeArray_1<::GAOKHAHEDPM>& eyes)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::Unity::Collections::NativeArray_1<::JAHFCNNMABJ>&, ::Unity::Collections::NativeArray_1<::GAOKHAHEDPM>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GENERATELOOKATIKSETTING_OFFSET))(config, cache, spines, eyes);
		}

		::System::Void RebuildCurveIndex(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REBUILDCURVEINDEX_OFFSET))(this, config);
		}

		static ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> BuildMaskList(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache)
		{
			return ((::Unity::Collections::NativeArray_1<::Foundation::BitSet256>(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDMASKLIST_OFFSET))(config, cache);
		}

		::System::Void BuildBlendShapeMaskData(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPEMASKDATA_OFFSET))(this, dataset);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* BuildBlendShapeNameToIndices(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_BUILDBLENDSHAPENAMETOINDICES_OFFSET))(dataset);
		}

		static ::System::Boolean FillBlendShapeMaskSlice(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType maskType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* nameToIndices, ::Unity::Collections::NativeArray_1<::System::Byte> maskValues, ::System::Int32 offset, ::System::Int32 blendShapeCount)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Unity::Collections::NativeArray_1<::System::Byte>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_FILLBLENDSHAPEMASKSLICE_OFFSET))(dataset, maskType, nameToIndices, maskValues, offset, blendShapeCount);
		}

		::System::Int32 GetBoneIndex(::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex boneIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBONEINDEX_OFFSET))(this, boneIndex);
		}

		::System::Int32 GetCurveIndex(::NPCCrowd::Animation::AnimationSubManager_AvatarAnimationCurve curve)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AvatarAnimationCurve))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETCURVEINDEX_OFFSET))(this, curve);
		}

		::System::Boolean GetBlendShapeCurveIndices(::System::Int32 pathHash, ::Il2CppArray<::System::Int32>*& curveIds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GETBLENDSHAPECURVEINDICES_OFFSET))(this, pathHash, curveIds);
		}

		::System::Void ClearCollectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET))(this);
		}

		::System::Void ClearVisibleCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_CLEARVISIBLECOUNT_OFFSET))(this);
		}

		::System::Void MarkCollectDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_MARKCOLLECTDIRTY_OFFSET))(this);
		}

		::System::Boolean Collect(::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECT_OFFSET))(this, frameCount, data);
		}

		::System::Void RegisterAnimationArchetype(::System::Int32 archetypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_REGISTERANIMATIONARCHETYPE_OFFSET))(this, archetypeIndex);
		}

		::System::Boolean CollectByDirtyFlag(::System::Int32 frameCount, ::System::Collections::Generic::List_1<::System::Object*>* animations)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECTBYDIRTYFLAG_OFFSET))(this, frameCount, animations);
		}

		::System::Void CollectVisibleCount(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_COLLECTVISIBLECOUNT_OFFSET))(this, data);
		}

		::System::Void PostCollect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_POSTCOLLECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsChunkValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_AVATARARCHETYPEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
