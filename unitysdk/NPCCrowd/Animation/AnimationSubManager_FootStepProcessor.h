#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class Object; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xE110CA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xE1109A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xE110990)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xE110980)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xE110A50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0xE110A00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE111340)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepProcessor_TypeDefinitionIndex = 81241;

	class AnimationSubManager_FootStepProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_RESETSTATICSTATE_OFFSET))();
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
