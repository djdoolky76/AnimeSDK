#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_ExecuteContext.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER_SUBMIT_OFFSET UNITYSDK_OFFSET(0xE1CAB50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xE1CAB40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OperationBuffer_TypeDefinitionIndex = 81198;

	class AnimationSubManager_AnimationScheduler_OperationBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _operations; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Object*>* operations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER__CTOR_OFFSET))(this, operations);
		}

		::System::Void Submit(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER_SUBMIT_OFFSET))(this, context);
		}
	};
}
