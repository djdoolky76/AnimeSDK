#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseWriteBackProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xED65800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xED65560)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xED65550)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xED65540)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xED65610)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0xED655C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xED65A10)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseWriteBackProcessor_TypeDefinitionIndex = 81205;

	class AnimationSubManager_PoseWriteBackProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::NPCCrowd::Animation::AnimationSubManager_PoseWriteBackProcessor_ParallelJob _parallelJob; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_RESETSTATICSTATE_OFFSET))();
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
