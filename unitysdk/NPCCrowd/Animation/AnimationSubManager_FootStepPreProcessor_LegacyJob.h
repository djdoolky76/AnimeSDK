#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepControlData.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/NapAnimator_SampleAnimationJobRequest.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_BUILDREQUEST_OFFSET UNITYSDK_OFFSET(0x115C4BD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_CALCULATEGROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x7084A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_CHECKANDUPDATEFOOTSEGMENTS_OFFSET UNITYSDK_OFFSET(0x708440)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x115C3810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DOORDINARYRAYCAST_OFFSET UNITYSDK_OFFSET(0x708320)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DOPREDICTRAYCAST_OFFSET UNITYSDK_OFFSET(0x708330)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DORAYCASTONSTAIR_OFFSET UNITYSDK_OFFSET(0x7082B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DORAYCAST_OFFSET UNITYSDK_OFFSET(0x680F70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x680F60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x680F40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_HITGROUNDFORSLOPE_OFFSET UNITYSDK_OFFSET(0x708400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_HITGROUND_OFFSET UNITYSDK_OFFSET(0x7083C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x680F50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x7082A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_PROCESSFADEINOUT_OFFSET UNITYSDK_OFFSET(0x681050)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_RESET_OFFSET UNITYSDK_OFFSET(0x681060)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x681090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_TRYINITIALIZE_OFFSET UNITYSDK_OFFSET(0x708240)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepPreProcessor_LegacyJob_TypeDefinitionIndex = 81202;

	struct alignas(8) AnimationSubManager_FootStepPreProcessor_LegacyJob
	{
		::System::Int32 _avatarId; // 0x10
		::System::Single _deltaTime; // 0x14
		::UnityEngine::PhysicsScene _physicsScene; // 0x18
		::System::Byte _padding0[0x4];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _control; // 0x20
		::System::Byte _padding1[0x18];
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting _setting; // 0x40
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0xF0
		::System::Byte _padding2[0x28];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x120
		::System::Byte _padding3[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Lod::ELODLevel> _entityLods; // 0x140
		::System::Byte _padding4[0x18];
		::Unity::Collections::NativeSlice_1<::System::Int32> _boneParents; // 0x160
		::System::Byte _padding5[0x8];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x170
		::System::Byte _padding6[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x190
		::System::Byte _padding7[0x18];
		::System::Int32 _leftFootIkWeightCurveId; // 0x1B0
		::System::Int32 _rightFootIkWeightCurveId; // 0x1B4

		static ::System::Nullable_1<::System::Object*> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void DoRaycast(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DORAYCAST_OFFSET))(this, entityId, lodLevel, tickData, footStepControl, entityTransform, pose);
		}

		::System::Void ProcessFadeInOut(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_PROCESSFADEINOUT_OFFSET))(this, entityId, footStepControl);
		}

		::System::Void Reset(::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::Vector3 entityPos)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_RESET_OFFSET))(this, footStepControl, entityPos);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> SampleCurve(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_SAMPLECURVE_OFFSET))(this, entityId, tickData);
		}

		static ::UnityEngine::NapAnimator_SampleAnimationJobRequest BuildRequest(::System::Int32 animationId, ::System::Single time, ::PVOID idPtr, ::PVOID curvePtr, ::System::Int32 curveCount)
		{
			return ((::UnityEngine::NapAnimator_SampleAnimationJobRequest(*)(::System::Int32, ::System::Single, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_BUILDREQUEST_OFFSET))(animationId, time, idPtr, curvePtr, curveCount);
		}

		::System::Void TryInitialize(::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_TRYINITIALIZE_OFFSET))(this, pose, footStepControl);
		}

		::System::Void Preprocess(::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_PREPROCESS_OFFSET))(this, footStepControl);
		}

		::System::Void DoRaycastOnStair(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DORAYCASTONSTAIR_OFFSET))(this, entityId, tickData, entityTransform, footStepControl);
		}

		::System::Void DoOrdinaryRaycast(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DOORDINARYRAYCAST_OFFSET))(this, entityId, footStepControl);
		}

		::System::Void DoPredictRaycast(::System::UInt32 entityId, ::System::Boolean enablePikLastFrame, ::System::Int32 animIndex, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_DOPREDICTRAYCAST_OFFSET))(this, entityId, enablePikLastFrame, animIndex, tickData, entityTransform, footStepControl);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> HitGround(::System::UInt32 entityId, ::UnityEngine::NapTransformData footWorldSpace)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_HITGROUND_OFFSET))(this, entityId, footWorldSpace);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> HitGroundForSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData footWorldSpace)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_HITGROUNDFORSLOPE_OFFSET))(this, entityId, footWorldSpace);
		}

		::System::ValueTuple_4<::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3> CheckAndUpdateFootSegments(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::Int32 footIndex, ::System::Int32 animIndex)
		{
			return ((::System::ValueTuple_4<::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_CHECKANDUPDATEFOOTSEGMENTS_OFFSET))(this, entityId, tickData, footIndex, animIndex);
		}

		::UnityEngine::Vector3 CalculateGroundNormal(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData footStepControl, ::UnityEngine::Vector3 groundNormal, ::System::Int32 footIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_LEGACYJOB_CALCULATEGROUNDNORMAL_OFFSET))(this, entityId, footStepControl, groundNormal, footIndex);
		}
	};
}
