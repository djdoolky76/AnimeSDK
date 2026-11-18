#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/NPCCrowd/Animation/NPCAccessoryCPUAnimator.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimationAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimatorManager; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphScript_Core; }
namespace NPCCrowd::Animation { class NPCCPUNormalFKPass; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_BINDBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0xE11E8B0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_FORCESYNCANIMATOR_OFFSET UNITYSDK_OFFSET(0xE11E180)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_FORCESYNC_OFFSET UNITYSDK_OFFSET(0xE11DBC0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATORDATA_1_OFFSET UNITYSDK_OFFSET(0xE11CED0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xE11CE30)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE11E650)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0xE11E610)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETAVATAR_OFFSET UNITYSDK_OFFSET(0xE11DF90)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETBINDEDBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0xE11E7D0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETWORLDTIME_OFFSET UNITYSDK_OFFSET(0xE11D630)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0xE11C730)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_LATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0xE11DF30)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE11DE90)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE11E540)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_PLAYANIMATIONCLIPBYID_OFFSET UNITYSDK_OFFSET(0xE11D230)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_PLAYANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xE11D680)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_REFRESHBINDBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0xE11EB30)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0xE11D180)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETANIMATORLOD_OFFSET UNITYSDK_OFFSET(0xE11E110)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETATTACHMENTPOSITION_OFFSET UNITYSDK_OFFSET(0xE11CF20)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETATTACHMENTROTATION_OFFSET UNITYSDK_OFFSET(0xE11CFB0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETATTACHMENTSCALE_OFFSET UNITYSDK_OFFSET(0xE11D040)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETHIGHQUALITYCULLMODE_OFFSET UNITYSDK_OFFSET(0xE11E5B0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0xE11D0D0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_STOPMAINANIMATION_OFFSET UNITYSDK_OFFSET(0xE11D730)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SYNCMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0xE11E300)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_UPDATEANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xE11D8B0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xE11DE30)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xE11D7E0)
#define NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE11EE30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAccessoryLegacyAnimator_TypeDefinitionIndex = 44718;

	class NPCAccessoryLegacyAnimator : public ::NPCCrowd::Animation::NPCAccessoryCPUAnimator
	{
	public:
		::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO* dataset; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* bindedTransforms; // 0x18
		::NPCCrowd::Animation::NPCCPUAnimationGraphScript_Core* coreGraph; // 0x20
		::NPCCrowd::Animation::NPCCPUNormalFKPass* FKPass; // 0x28
		::UnityEngine::Animator* unityAnimator; // 0x30
		::NPCCrowd::Ability::FTransformFragment _attachedLocalPrs; // 0x38
		::NPCCrowd::Ability::FTransformFragment _attachedWorldPrs; // 0x68
		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData animatorBufferData_Cur; // 0x98
		::System::Boolean bIsEnableUpdate; // 0xAC
		::System::Boolean bWasVisible; // 0xAD
		::System::Boolean bInited; // 0xAE
		::System::Boolean bNeedForceSync; // 0xAF

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Animator* inUnityAnimator, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO* inDataset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_INIT_OFFSET))(this, inUnityAnimator, inDataset);
		}

		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData GetAnimatorData(::NPCCrowd::Animation::NPCUnionAnimator* ownerAnimator)
		{
			return ((::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATORDATA_OFFSET))(this, ownerAnimator);
		}

		::System::Void SetAttachmentPosition(::UnityEngine::Vector3 local, ::UnityEngine::Vector3 world)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETATTACHMENTPOSITION_OFFSET))(this, local, world);
		}

		::System::Void SetAttachmentRotation(::UnityEngine::Quaternion local, ::UnityEngine::Quaternion world)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETATTACHMENTROTATION_OFFSET))(this, local, world);
		}

		::System::Void SetAttachmentScale(::UnityEngine::Vector3 local, ::UnityEngine::Vector3 world)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETATTACHMENTSCALE_OFFSET))(this, local, world);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		::System::Void SetAnimationSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETANIMATIONSPEED_OFFSET))(this, speed);
		}

		::System::Void PlayAnimationClipByID(::System::Int32 animID, ::System::Single frameTime, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_PLAYANIMATIONCLIPBYID_OFFSET))(this, animID, frameTime, speed);
		}

		::System::Void PlayAnimationClip(::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_PLAYANIMATIONCLIP_OFFSET))(this, clip);
		}

		::System::Void StopMainAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_STOPMAINANIMATION_OFFSET))(this);
		}

		::System::Void Update(::NPCCrowd::Accessories::NPCAccessoryAnimatorManager* manager, ::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager*, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_UPDATE_OFFSET))(this, manager, accessory, deltaTime);
		}

		::System::Void LateUpdate(::NPCCrowd::Accessories::NPCAccessoryAnimatorManager* manager, ::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager*, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_LATEUPDATE_OFFSET))(this, manager, accessory, deltaTime);
		}

		::UnityEngine::Avatar* GetAvatar()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETAVATAR_OFFSET))(this);
		}

		::System::Void SetAnimatorLOD(::NPCCrowd::Animation::NPCUnionAnimator* animator, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETANIMATORLOD_OFFSET))(this, animator, lod);
		}

		::System::Void SyncMainClipTime(::System::Single time, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SYNCMAINCLIPTIME_OFFSET))(this, time, speed);
		}

		::System::Void UpdateAnimatorData(::NPCCrowd::Animation::NPCUnionAnimator* attachedNpcAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_UPDATEANIMATORDATA_OFFSET))(this, attachedNpcAnimator);
		}

		::System::Void ForceSyncAnimator(::NPCCrowd::Animation::NPCUnionAnimator* attachedNPCAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_FORCESYNCANIMATOR_OFFSET))(this, attachedNPCAnimator);
		}

		::System::Void Update_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_UPDATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void ForceSync(::System::Single deltaTime, ::NPCCrowd::Animation::NPCUnionAnimator* attachedNPCAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_FORCESYNC_OFFSET))(this, deltaTime, attachedNPCAnimator);
		}

		::System::Void LateUpdate_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_LATEUPDATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetHighQualityCullMode(::System::Boolean isHightQuality)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_SETHIGHQUALITYCULLMODE_OFFSET))(this, isHightQuality);
		}

		::System::Single GetWorldTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETWORLDTIME_OFFSET))(this);
		}

		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData& GetAnimatorData_1()
		{
			return ((::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATORDATA_1_OFFSET))(this);
		}

		::UnityEngine::Animator* GetAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAnimatorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETANIMATORTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBindedBoneTransform(::System::Int32 boneID)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_GETBINDEDBONETRANSFORM_OFFSET))(this, boneID);
		}

		::UnityEngine::Transform* BindBoneTransform(::System::Int32 boneID, ::System::String* boneName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_BINDBONETRANSFORM_OFFSET))(this, boneID, boneName);
		}

		::System::Void RefreshBindBoneTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYLEGACYANIMATOR_REFRESHBINDBONETRANSFORM_OFFSET))(this);
		}
	};
}
