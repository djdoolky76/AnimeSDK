#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/NPCCrowd/Animation/ENPCCPUAnimationClipAvatarMaskType.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCPUAnimatorRuntimeInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/MontageLayerClipData.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NPCAvatarRuntimeData;
class NapRenderEntity;
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimator; }
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ACQUIREALLCURRENTGPUCLIPS_OFFSET UNITYSDK_OFFSET(0x136471A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ACQUIREGPUCLIPBYANIMID_OFFSET UNITYSDK_OFFSET(0x1364AA40)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_APPLYBONESMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1364A390)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_CLEAN_OFFSET UNITYSDK_OFFSET(0x136413E0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_DISABLECPUANIMATORUPDATE_OFFSET UNITYSDK_OFFSET(0x13646540)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ENABLECPUANIMATORUPDATE_OFFSET UNITYSDK_OFFSET(0x136464F0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ENSUREGPUCLIPACQUIRED_OFFSET UNITYSDK_OFFSET(0x13644C20)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_FLUSHGPUMATERIALBLOCK_OFFSET UNITYSDK_OFFSET(0x13642300)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_FORCEWRITEBACKBONESFORFRAMES_OFFSET UNITYSDK_OFFSET(0x1364A120)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETACCESSORYGPUSLOTINFO_OFFSET UNITYSDK_OFFSET(0x13649930)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETANIMATORINFO_OFFSET UNITYSDK_OFFSET(0x136498E0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETANIMATORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13647750)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETAVATARMASK_OFFSET UNITYSDK_OFFSET(0x136479B0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETCLIPIDLAYER1_OFFSET UNITYSDK_OFFSET(0x136455D0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETCLIPINDEXBYANIMID_OFFSET UNITYSDK_OFFSET(0x1364ADB0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETDEFAULTSTATEANIMDATA_OFFSET UNITYSDK_OFFSET(0x13642F00)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETDEFAULTSTATEANIMID_OFFSET UNITYSDK_OFFSET(0x13645730)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETMAINCLIPID_OFFSET UNITYSDK_OFFSET(0x13645580)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETMAINCLIPINFO_OFFSET UNITYSDK_OFFSET(0x13645310)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETRANDOMANIMATIONID_OFFSET UNITYSDK_OFFSET(0x136446B0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETRUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13641AF0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTINFO_OFFSET UNITYSDK_OFFSET(0x136477B0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTLOCALPRS_OFFSET UNITYSDK_OFFSET(0x13647B90)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x13648B50)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTWORLDPRS_1_OFFSET UNITYSDK_OFFSET(0x13648DC0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTWORLDPRS_OFFSET UNITYSDK_OFFSET(0x13647E70)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETWORLDTIME_OFFSET UNITYSDK_OFFSET(0x13642EB0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_HASANIM_OFFSET UNITYSDK_OFFSET(0x13644FB0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x13641340)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ISFIRSTVISIBLECAMERA_OFFSET UNITYSDK_OFFSET(0x13649F40)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ISGPUCLIPGRANULARREADY_OFFSET UNITYSDK_OFFSET(0x1364A6E0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x13649E50)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13641BA0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_MARKMONTAGESPEEDDIRTYIFCHANGED_OFFSET UNITYSDK_OFFSET(0x13643B50)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13643DF0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ONGPUANIMATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13644B90)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYANIMATIONCLIPBYIDNORMALIZED_OFFSET UNITYSDK_OFFSET(0x13644D40)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYANIMATIONCLIPBYID_OFFSET UNITYSDK_OFFSET(0x13644100)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYANIMATIONCLIPONCEBYID_OFFSET UNITYSDK_OFFSET(0x13644AE0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYSINGLEMONTAGEBYCLIPID_OFFSET UNITYSDK_OFFSET(0x13642F60)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_POSTFLUSHANIMATORMATERIALBLOCK_OFFSET UNITYSDK_OFFSET(0x13647600)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_RANDOMPLAYANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x13643E50)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_REFRESHGPUCLIPGRANULARSTATE_OFFSET UNITYSDK_OFFSET(0x1364A400)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_REFRESHRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x136419E0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_RELEASEALLGPUCLIPS_OFFSET UNITYSDK_OFFSET(0x13641690)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_RELEASEGPUCLIPBYANIMID_OFFSET UNITYSDK_OFFSET(0x1364A720)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x13643990)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETANIMATORLOD_OFFSET UNITYSDK_OFFSET(0x136465B0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETBONES_OFFSET UNITYSDK_OFFSET(0x1364A320)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETCLIPSPEED_OFFSET UNITYSDK_OFFSET(0x13645070)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETDEFAULTSTATEANIMDATA_OFFSET UNITYSDK_OFFSET(0x136456D0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETDEFAULTSTATEANIMID_OFFSET UNITYSDK_OFFSET(0x13645680)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETLODTPOSECULLINGMODEFORFRAMES_OFFSET UNITYSDK_OFFSET(0x1364A180)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETMAINANIMATIONMANUALLY_OFFSET UNITYSDK_OFFSET(0x13645BF0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETRENDERERVISIBILITYSTATE_OFFSET UNITYSDK_OFFSET(0x1364A030)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x13643930)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SHOULDWRITEBACKBONES_OFFSET UNITYSDK_OFFSET(0x1364A0C0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x13645620)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_TRYGETANIMATIONINFO_OFFSET UNITYSDK_OFFSET(0x13644870)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_UPDATEABILITYANIMATORDATA_OFFSET UNITYSDK_OFFSET(0x136463B0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_UPDATECLIPINFO_OFFSET UNITYSDK_OFFSET(0x136460F0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR_UPDATEMAINANIMATION_OFFSET UNITYSDK_OFFSET(0x13645780)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1364AE90)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1364AE60)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR__LATEUPDATE_G__UPDATECLIPBUFFERDATA_48_0_OFFSET UNITYSDK_OFFSET(0x136422F0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR__UPDATEMAINANIMATION_G__UPDATEPATHFOLLOW_71_0_OFFSET UNITYSDK_OFFSET(0x136459A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR__UPDATEMAINANIMATION_G__UPDATESTATEMACHINE_71_1_OFFSET UNITYSDK_OFFSET(0x13645A50)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimator_TypeDefinitionIndex = 85031;

	class NPCUnionAnimator : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_samplerGetSlotWorldPRS()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimator_TypeDefinitionIndex)->GetStaticField(0x35EF0);
		}
		static ::System::Int32* StaticGet_TurnRHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimator_TypeDefinitionIndex)->GetStaticField(0xBFE0);
		}
		static ::System::Int32* StaticGet_TurnLHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimator_TypeDefinitionIndex)->GetStaticField(0xBFE4);
		}
		static ::System::Int32* StaticGet_IdleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimator_TypeDefinitionIndex)->GetStaticField(0xBFE8);
		}
		static ::System::Int32* StaticGet_MoveStartHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimator_TypeDefinitionIndex)->GetStaticField(0xBFEC);
		}
		static ::System::Int32* StaticGet_MoveHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimator_TypeDefinitionIndex)->GetStaticField(0xBFF0);
		}
		// static const ::System::String* Idle; // 0x0
		// static const ::System::String* TurnL; // 0x0
		// static const ::System::String* TurnR; // 0x0
		// static const ::System::String* MoveStart; // 0x0
		// static const ::System::String* Move; // 0x0
		// static const ::System::Single FacialAnimInterval; // 0x0
		// static const ::System::Single FacialAnimVariant; // 0x0
		::NPCCrowd::Animation::NPCCPUAnimator* cpuAnimator; // 0x10
		::NPCCrowd::Animation::AnimationControllerInstanceConfig* controllerInstanceConfig; // 0x18
		::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* _cpuDataset; // 0x20
		::NapRenderEntity* renderEntity; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _gpuClipRefByClipIndex; // 0x30
		::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator; // 0x38
		::NPCAvatarRuntimeData* _bindAvatar; // 0x40
		::NPCCrowd::NPCIDGeneratorInt* _idGen; // 0x48
		::System::Boolean _wasVisibleLastFrame; // 0x50
		::System::Boolean isInitIdleAnimation; // 0x51
		::System::Boolean _bGpuClipGranularEnabled; // 0x52
		::System::Byte layerFlags; // 0x53
		::NPCCrowd::Animation::MontageLayerClipData _defaultStateAnimData; // 0x54
		::System::Boolean isStateMachine; // 0x64
		::System::Boolean _writeBackVisibilitySnapshot; // 0x65
		::System::Byte lastLayerFlags; // 0x66
		::System::Boolean curFrameHasAnimChanged; // 0x67
		::System::Boolean bIsGPUAnimatorMode; // 0x68
		::System::Boolean _hasRendererVisibilityData; // 0x69
		::System::Boolean _rendererVisible; // 0x6A
		::System::Boolean _isFirstVisibleInCurrentFrame; // 0x6B
		::System::Int32 montageKey; // 0x6C
		::System::Single _timeToPlayFacialAnim; // 0x70
		::System::Single _timeToPlayDefaultAnim; // 0x74
		::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData _animatorBufferDataCur; // 0x78
		::System::Int32 _forceWriteBackBonesUntilFrame; // 0xCC
		::System::Int32 TagID; // 0xD0
		::System::Int32 _defaultStateAnimID; // 0xD4
		::UnityEngine::AnimatorCullingMode _lodTposeSavedCullingMode; // 0xD8
		::System::Single _timeToStopFacialAnim; // 0xDC
		::System::Int32 _lodTposeCullingUntilFrame; // 0xE0
		::System::UInt32 entityID; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR__CCTOR_OFFSET))();
		}

		::System::Void Init(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* inDataset, ::NPCAvatarRuntimeData* inbindedAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*, ::NPCAvatarRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_INIT_OFFSET))(this, inDataset, inbindedAvatar);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_CLEAN_OFFSET))(this);
		}

		::System::Void RefreshRenderEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_REFRESHRENDERENTITY_OFFSET))(this);
		}

		::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData GetRuntimeInstance()
		{
			return ((::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETRUNTIMEINSTANCE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		::System::Void SetAnimationSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETANIMATIONSPEED_OFFSET))(this, speed);
		}

		::System::Void MarkMontageSpeedDirtyIfChanged(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_MARKMONTAGESPEEDDIRTYIFCHANGED_OFFSET))(this, speed);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void RandomPlayAnimationClip(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* randomAnimationIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_RANDOMPLAYANIMATIONCLIP_OFFSET))(this, randomAnimationIds);
		}

		::System::Int32 GetRandomAnimationId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETRANDOMANIMATIONID_OFFSET))(this);
		}

		::System::Boolean TryGetAnimationInfo(::System::Int32 clipID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*& clipInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_TRYGETANIMATIONINFO_OFFSET))(this, clipID, clipInfo);
		}

		::System::Boolean PlayAnimationClipOnceByID(::System::Int32 animID, ::System::Single clipTime, ::System::Single speed, ::System::Int32 upperLayerAnimID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYANIMATIONCLIPONCEBYID_OFFSET))(this, animID, clipTime, speed, upperLayerAnimID);
		}

		::System::Boolean PlaySingleMontageByClipID(::NPCCrowd::Animation::MontageLayerClipData data, ::System::Single clipTime, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::MontageLayerClipData, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYSINGLEMONTAGEBYCLIPID_OFFSET))(this, data, clipTime, speed);
		}

		::System::Boolean PlayAnimationClipByID(::System::Int32 animID, ::System::Single clipTime, ::System::Single speed, ::System::Int32 upperLayerAnimID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYANIMATIONCLIPBYID_OFFSET))(this, animID, clipTime, speed, upperLayerAnimID);
		}

		::System::Boolean PlayAnimationClipByIDNormalized(::System::Int32 animID, ::System::Single normalizedTime, ::System::Single speed, ::System::Int32 upperLayerAnimID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_PLAYANIMATIONCLIPBYIDNORMALIZED_OFFSET))(this, animID, normalizedTime, speed, upperLayerAnimID);
		}

		::System::Boolean HasAnim(::System::Int32 animID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_HASANIM_OFFSET))(this, animID);
		}

		::System::Void SetClipSpeed(::System::Single speed, ::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETCLIPSPEED_OFFSET))(this, speed, index);
		}

		::System::Void GetMainClipInfo(::System::Single& outClipNormalizedTime, ::System::Single& outSpeed, ::System::Single& outAnimLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETMAINCLIPINFO_OFFSET))(this, outClipNormalizedTime, outSpeed, outAnimLength);
		}

		::System::Int32 GetMainClipID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETMAINCLIPID_OFFSET))(this);
		}

		::System::Int32 GetClipIDLayer1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETCLIPIDLAYER1_OFFSET))(this);
		}

		::System::Void StopAnimation(::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType index)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_STOPANIMATION_OFFSET))(this, index);
		}

		::System::Single GetWorldTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETWORLDTIME_OFFSET))(this);
		}

		::System::Void SetDefaultStateAnimID(::System::Int32 animID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETDEFAULTSTATEANIMID_OFFSET))(this, animID);
		}

		::System::Void SetDefaultStateAnimData(::NPCCrowd::Animation::MontageLayerClipData data)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::MontageLayerClipData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETDEFAULTSTATEANIMDATA_OFFSET))(this, data);
		}

		::System::Int32 GetDefaultStateAnimID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETDEFAULTSTATEANIMID_OFFSET))(this);
		}

		::NPCCrowd::Animation::MontageLayerClipData GetDefaultStateAnimData()
		{
			return ((::NPCCrowd::Animation::MontageLayerClipData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETDEFAULTSTATEANIMDATA_OFFSET))(this);
		}

		::System::Void UpdateMainAnimation(::NPCCrowd::Ability::FNPCCPUAnimatorFragment animationData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_UPDATEMAINANIMATION_OFFSET))(this, animationData);
		}

		::System::Void SetMainAnimationManually(::System::Int32 animationClipId, ::System::Single normalizedTime, ::System::Single speed, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETMAINANIMATIONMANUALLY_OFFSET))(this, animationClipId, normalizedTime, speed, layerIdx);
		}

		::System::Boolean UpdateClipInfo(::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData& clipData, ::System::Int32 animationId, ::System::Single normalizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_UPDATECLIPINFO_OFFSET))(this, clipData, animationId, normalizedTime);
		}

		::NPCCrowd::Ability::FNPCCPUAnimatorFragment UpdateAbilityAnimatorData(::NPCCrowd::Ability::FNPCCPUAnimatorFragment animatorData)
		{
			return ((::NPCCrowd::Ability::FNPCCPUAnimatorFragment(*)(::PVOID, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_UPDATEABILITYANIMATORDATA_OFFSET))(this, animatorData);
		}

		::System::Void EnableCPUAnimatorUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ENABLECPUANIMATORUPDATE_OFFSET))(this);
		}

		::System::Void DisableCPUAnimatorUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_DISABLECPUANIMATORUPDATE_OFFSET))(this);
		}

		::System::Void SetAnimatorLod(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCCrowd::Lod::ELODLevel oldLOD, ::NPCCrowd::Lod::ELODLevel newLOD, ::System::Boolean useGpuLod, ::System::Boolean isPathNpc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETANIMATORLOD_OFFSET))(this, goInfo, oldLOD, newLOD, useGpuLod, isPathNpc);
		}

		::System::Void PostFlushAnimatorMaterialBlock(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCCrowd::Lod::ELODLevel oldLOD, ::NPCCrowd::Lod::ELODLevel newLOD)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_POSTFLUSHANIMATORMATERIALBLOCK_OFFSET))(this, goInfo, oldLOD, newLOD);
		}

		::System::Void FlushGPUMaterialBlock(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReference*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_FLUSHGPUMATERIALBLOCK_OFFSET))(this, goInfo);
		}

		::UnityEngine::Transform* GetAnimatorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETANIMATORTRANSFORM_OFFSET))(this);
		}

		::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* GetSlotInfo(::NPCCrowd::FNPCAttachPointNameHandle slotName)
		{
			return ((::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTINFO_OFFSET))(this, slotName);
		}

		::UnityEngine::AvatarMask* GetAvatarMask(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType type)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETAVATARMASK_OFFSET))(this, type);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotLocalPRS(::NPCCrowd::FNPCAttachPointNameHandle slotName, ::System::Boolean ignoreOffsetConfig)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTLOCALPRS_OFFSET))(this, slotName, ignoreOffsetConfig);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotWorldPRS(::NPCCrowd::FNPCAttachPointNameHandle slotName, ::System::Boolean ignoreOffsetConfig)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTWORLDPRS_OFFSET))(this, slotName, ignoreOffsetConfig);
		}

		::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* GetSlotTransformCache(::NPCCrowd::FNPCAttachPointNameHandle slotName)
		{
			return ((::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache*(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTTRANSFORMCACHE_OFFSET))(this, slotName);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotWorldPRS_1(::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* transformCache, ::System::Boolean getPosition, ::System::Boolean getRotation, ::System::Boolean getScale)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETSLOTWORLDPRS_1_OFFSET))(this, transformCache, getPosition, getRotation, getScale);
		}

		::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData& GetAnimatorInfo()
		{
			return ((::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETANIMATORINFO_OFFSET))(this);
		}

		::System::Void GetAccessoryGPUSlotInfo(::System::Int32 slotNameHashID, ::System::Int32& gpuAnimationInstanceId, ::System::Int32& gpuMaxInstanceCount, ::System::Int32& gpuBoneIndex, ::System::Int32& gpuBoneCount, ::UnityEngine::Vector3& slotPosOffset, ::UnityEngine::Quaternion& slotRotOffset, ::UnityEngine::ComputeBuffer*& animationBakeBuffer, ::UnityEngine::Matrix4x4& gpuAnimationBindPoseInv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::ComputeBuffer*&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETACCESSORYGPUSLOTINFO_OFFSET))(this, slotNameHashID, gpuAnimationInstanceId, gpuMaxInstanceCount, gpuBoneIndex, gpuBoneCount, slotPosOffset, slotRotOffset, animationBakeBuffer, gpuAnimationBindPoseInv);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsFirstVisibleCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ISFIRSTVISIBLECAMERA_OFFSET))(this);
		}

		::System::Void SetRendererVisibilityState(::System::Boolean rendererVisible, ::System::Boolean hasRendererVisibilityData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETRENDERERVISIBILITYSTATE_OFFSET))(this, rendererVisible, hasRendererVisibilityData);
		}

		::System::Boolean ShouldWriteBackBones(::System::Int32 frameCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SHOULDWRITEBACKBONES_OFFSET))(this, frameCount);
		}

		::System::Void ForceWriteBackBonesForFrames(::System::Int32 frames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_FORCEWRITEBACKBONESFORFRAMES_OFFSET))(this, frames);
		}

		::System::Void SetLodTposeCullingModeForFrames(::System::Int32 frames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETLODTPOSECULLINGMODEFORFRAMES_OFFSET))(this, frames);
		}

		::System::Void SetBones(::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData> bones)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_SETBONES_OFFSET))(this, bones);
		}

		::System::Void ApplyBonesMainThread(::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData> bones)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_APPLYBONESMAINTHREAD_OFFSET))(this, bones);
		}

		::System::Void RefreshGpuClipGranularState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_REFRESHGPUCLIPGRANULARSTATE_OFFSET))(this);
		}

		::System::Boolean IsGpuClipGranularReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ISGPUCLIPGRANULARREADY_OFFSET))(this);
		}

		::System::Void OnGpuAnimationChanged(::System::Int32 oldAnimId, ::System::Int32 newAnimId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ONGPUANIMATIONCHANGED_OFFSET))(this, oldAnimId, newAnimId);
		}

		::System::Void EnsureGpuClipAcquired(::System::Int32 animId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ENSUREGPUCLIPACQUIRED_OFFSET))(this, animId);
		}

		::System::Void AcquireAllCurrentGpuClips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ACQUIREALLCURRENTGPUCLIPS_OFFSET))(this);
		}

		::System::Void ReleaseAllGpuClips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_RELEASEALLGPUCLIPS_OFFSET))(this);
		}

		::System::Int32 GetClipIndexByAnimId(::System::Int32 animId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_GETCLIPINDEXBYANIMID_OFFSET))(this, animId);
		}

		::System::Void AcquireGpuClipByAnimId(::System::Int32 animId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_ACQUIREGPUCLIPBYANIMID_OFFSET))(this, animId);
		}

		::System::Void ReleaseGpuClipByAnimId(::System::Int32 animId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR_RELEASEGPUCLIPBYANIMID_OFFSET))(this, animId);
		}

		static ::System::Void _LateUpdate_g__UpdateClipBufferData_48_0(::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData& data)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR__LATEUPDATE_G__UPDATECLIPBUFFERDATA_48_0_OFFSET))(data);
		}

		::System::Void _UpdateMainAnimation_g__UpdatePathFollow_71_0(::NPCCrowd::Ability::FNPCCPUAnimatorFragment animation)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR__UPDATEMAINANIMATION_G__UPDATEPATHFOLLOW_71_0_OFFSET))(this, animation);
		}

		::System::Void _UpdateMainAnimation_g__UpdateStateMachine_71_1(::NPCCrowd::Ability::FNPCCPUAnimatorFragment animation)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR__UPDATEMAINANIMATION_G__UPDATESTATEMACHINE_71_1_OFFSET))(this, animation);
		}
	};
}
