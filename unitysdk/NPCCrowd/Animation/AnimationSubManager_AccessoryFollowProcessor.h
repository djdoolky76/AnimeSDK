#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AccessoryFollowProcessor_CpuSlotPoseExtractJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x13791790)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x137914F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x137914E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x137914D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x137915A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0x13791550)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13791A30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AccessoryFollowProcessor_TypeDefinitionIndex = 81255;

	class AnimationSubManager_AccessoryFollowProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::NPCCrowd::Animation::AnimationSubManager_AccessoryFollowProcessor_CpuSlotPoseExtractJob _job; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_RESETSTATICSTATE_OFFSET))();
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
