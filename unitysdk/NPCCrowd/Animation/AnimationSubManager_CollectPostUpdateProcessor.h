#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_COLLECTROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10023FA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x10023510)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x10023500)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x10023570)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x100235C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10024400)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPostUpdateProcessor_TypeDefinitionIndex = 81240;

	class AnimationSubManager_CollectPostUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		static ::System::Void CollectRootTransform(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPOSTUPDATEPROCESSOR_COLLECTROOTTRANSFORM_OFFSET))(animation);
		}
	};
}
