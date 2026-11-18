#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_APPLYPOSEONMAINTHREADFALLBACK_OFFSET UNITYSDK_OFFSET(0x114C34C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x114C1B30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x114C1B20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x114C1B90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x114C1C60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x114C3B60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x114C3860)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x114C4A20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FlushLateUpdateProcessor_TypeDefinitionIndex = 81133;

	class AnimationSubManager_FlushLateUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		static ::System::Void ApplyPoseOnMainThreadFallback(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_APPLYPOSEONMAINTHREADFALLBACK_OFFSET))(animation);
		}

		static ::System::Void WriteBackMontageData(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKMONTAGEDATA_OFFSET))(animation);
		}

		static ::System::Void WriteBackBlendShape(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKBLENDSHAPE_OFFSET))(animation);
		}
	};
}
