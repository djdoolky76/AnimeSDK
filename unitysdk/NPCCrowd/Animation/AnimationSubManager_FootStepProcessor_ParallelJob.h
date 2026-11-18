#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintSpawnerType.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepProcessor_ParallelJob_DispatchIndex.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEFOOTTARGETFORPREDICT_OFFSET UNITYSDK_OFFSET(0x708C50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEFOOTTARGETONSLOPE_OFFSET UNITYSDK_OFFSET(0x708BB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEFOOTTARGET_OFFSET UNITYSDK_OFFSET(0x708AC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEPELVISDELTA_OFFSET UNITYSDK_OFFSET(0x708E50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CHECKCURRENTFOOTSTEPSEGMENT_OFFSET UNITYSDK_OFFSET(0x7085E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x708550)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPFORPREDICT_OFFSET UNITYSDK_OFFSET(0x7089A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPIK_OFFSET UNITYSDK_OFFSET(0x708640)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPONSLOPE_OFFSET UNITYSDK_OFFSET(0x708890)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPONSTAIR_OFFSET UNITYSDK_OFFSET(0x708700)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x708540)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_GETFOOTPRINTSPAWNERTYPE_OFFSET UNITYSDK_OFFSET(0x7085D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_GET__SETTING_OFFSET UNITYSDK_OFFSET(0x708520)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_HIPHEIGHTLIFTINGDELTABYLIMITDIST_OFFSET UNITYSDK_OFFSET(0x1363C270)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_PELVISPD_OFFSET UNITYSDK_OFFSET(0x708CF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_PRECALCULATEPELVISDELTA_OFFSET UNITYSDK_OFFSET(0x708DE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_RESET_OFFSET UNITYSDK_OFFSET(0x708AB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_SAMPLEPARABOLA_OFFSET UNITYSDK_OFFSET(0x708D00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_SETCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x708DA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x13631A60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepProcessor_ParallelJob_TypeDefinitionIndex = 81243;

	struct alignas(4) AnimationSubManager_FootStepProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_avatars()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x35D80);
		}
		static ::System::Double* StaticGet_s_timestamp()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0xBED0);
		}
		::System::Double _timestamp; // 0x10
		::System::Single _deltaTime; // 0x18
		::ENPCAvatarGender _gender; // 0x1C
		::ENPCAvatarSize _size; // 0x20
		::System::Int32 _sourceIndex; // 0x24

		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting get__setting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_FootStepSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_GET__SETTING_OFFSET))(this);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_ParallelJob_DispatchIndex& dispatchIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_ParallelJob_DispatchIndex&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, dispatchIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void DoFootPrint(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTPRINT_OFFSET))(this, entityId, lodLevel, tickData, entityTransform, footStepControl);
		}

		::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType GetFootPrintSpawnerType()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_GETFOOTPRINTSPAWNERTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Vector3> CheckCurrentFootStepSegment(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::Int32 footIndex, ::System::Int32 animIndex)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CHECKCURRENTFOOTSTEPSEGMENT_OFFSET))(this, entityId, tickData, footIndex, animIndex);
		}

		::System::Void DoFootStepIk(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPIK_OFFSET))(this, entityId, lodLevel, motionControl, footStepControl, entityTransform, pose);
		}

		::System::Void DoFootStepOnStair(::System::UInt32 entityId, ::UnityEngine::NapTransformData leftFootAnimDataEntitySpace, ::UnityEngine::NapTransformData leftToeAnimDataLocalSpace, ::UnityEngine::NapTransformData rightFootAnimDataEntitySpace, ::UnityEngine::NapTransformData rightToeAnimDataLocalSpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPONSTAIR_OFFSET))(this, entityId, leftFootAnimDataEntitySpace, leftToeAnimDataLocalSpace, rightFootAnimDataEntitySpace, rightToeAnimDataLocalSpace, entityTransform, pose, footStepControl, motionControl);
		}

		::System::Void DoFootStepOnSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData leftFootAnimDataEntitySpace, ::UnityEngine::NapTransformData rightFootAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPONSLOPE_OFFSET))(this, entityId, leftFootAnimDataEntitySpace, rightFootAnimDataEntitySpace, entityTransform, pose, footStepControl, motionControl);
		}

		::System::Void DoFootStepForPredict(::System::UInt32 entityId, ::UnityEngine::NapTransformData leftFootAnimDataEntitySpace, ::UnityEngine::NapTransformData rightFootAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_DOFOOTSTEPFORPREDICT_OFFSET))(this, entityId, leftFootAnimDataEntitySpace, rightFootAnimDataEntitySpace, entityTransform, pose, footStepControl, motionControl);
		}

		::System::Void Reset(::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_RESET_OFFSET))(this, motionControl, footStepControl);
		}

		::UnityEngine::NapTransformData CalculateFootTarget(::System::UInt32 entityId, ::UnityEngine::NapTransformData footAnimDataEntitySpace, ::UnityEngine::NapTransformData toeAnimDataLocalSpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::System::Single pelvisDelta, ::System::Int32 i)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEFOOTTARGET_OFFSET))(this, entityId, footAnimDataEntitySpace, toeAnimDataLocalSpace, entityTransform, footStepControl, pelvisDelta, i);
		}

		::UnityEngine::NapTransformData CalculateFootTargetOnSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData footAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::System::Int32 i)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEFOOTTARGETONSLOPE_OFFSET))(this, entityId, footAnimDataEntitySpace, entityTransform, footStepControl, i);
		}

		::UnityEngine::NapTransformData CalculateFootTargetForPredict(::System::UInt32 entityId, ::UnityEngine::NapTransformData footAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::System::Int32 i)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEFOOTTARGETFORPREDICT_OFFSET))(this, entityId, footAnimDataEntitySpace, entityTransform, footStepControl, i);
		}

		::System::Single PelvisPd(::System::UInt32 entityId, ::System::Single targetHipDelta, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::Single, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_PELVISPD_OFFSET))(this, entityId, targetHipDelta, footStepControl);
		}

		::System::Single SampleParabola(::System::UInt32 entityId, ::UnityEngine::NapTransformData entityTransform, ::UnityEngine::Vector3 footAnimPosWorldSpace, ::UnityEngine::Vector3 curr, ::UnityEngine::Vector3 next)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_SAMPLEPARABOLA_OFFSET))(this, entityId, entityTransform, footAnimPosWorldSpace, curr, next);
		}

		::System::Void SetControlData(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData, ::UnityEngine::NapTransformData target, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&, ::UnityEngine::NapTransformData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_SETCONTROLDATA_OFFSET))(this, controlData, target, weight);
		}

		::System::Single PreCalculatePelvisDelta(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& controlData, ::UnityEngine::Vector3 supportFootAnimPos, ::UnityEngine::Vector3 supportFootTarget, ::UnityEngine::Vector3 pelvis)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_PRECALCULATEPELVISDELTA_OFFSET))(this, entityId, controlData, supportFootAnimPos, supportFootTarget, pelvis);
		}

		::System::Single CalculatePelvisDelta(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& controlData, ::UnityEngine::Vector3 leftTarget, ::UnityEngine::Vector3 rightTarget, ::UnityEngine::Vector3 pelvis, ::System::Single pelvisDelta)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_CALCULATEPELVISDELTA_OFFSET))(this, entityId, controlData, leftTarget, rightTarget, pelvis, pelvisDelta);
		}

		static ::System::Single HipHeightLiftingDeltaByLimitDist(::UnityEngine::Vector3 footPos, ::UnityEngine::Vector3 pelvisPos, ::System::Single legLenLimit, ::System::Boolean isMax)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_PARALLELJOB_HIPHEIGHTLIFTINGDELTABYLIMITDIST_OFFSET))(footPos, pelvisPos, legLenLimit, isMax);
		}
	};
}
